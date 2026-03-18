/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x1402B2370
 * Callers:
 *     SepNormalAccessCheckEx @ 0x1402AF210 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 *     SepMatchPackage @ 0x140468CC0 (SepMatchPackage.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402B2540 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B8FEC (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

_BOOL8 __fastcall SepCanTokenMatchAllPackageSid(__int64 a1)
{
  char v1; // bl
  bool v2; // si
  PERESOURCE *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // r8
  UCHAR ReservedLowFlags; // al
  ULONG_PTR v7; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  _QWORD v11[4]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v12; // [rsp+60h] [rbp-48h]
  __int128 v13; // [rsp+70h] [rbp-38h]
  __int64 v14; // [rsp+80h] [rbp-28h]

  v11[0] = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v1 = 0;
  v11[3] = L"WIN://NOALLAPPPKG";
  v2 = 1;
  v11[1] = *(_QWORD *)(a1 + 776);
  v14 = 0LL;
  v11[2] = 2359330LL;
  v3 = (PERESOURCE *)(a1 + 48);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (ULONG_PTR)*v3;
    ReservedLowFlags = (*v3)->ReservedLowFlags;
    if ( (ReservedLowFlags & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v5, 0LL, 0LL);
    if ( (ReservedLowFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v10 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v10->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    v7 = (ULONG_PTR)*v3;
    if ( (*(_BYTE *)(v5 + 26) & 1) != 0 )
      ExpFastResourceLegacyAcquireShared(v7);
    else
      ExpAcquireResourceSharedLite(v7, 1LL);
    v1 = 1;
  }
  if ( (int)AuthzBasepQuerySecurityAttributeAndValues(v11) >= 0 )
    v2 = *(_QWORD *)v13 == 0LL;
  if ( v1 )
  {
    ExReleaseResourceLite(*v3);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return v2;
}
