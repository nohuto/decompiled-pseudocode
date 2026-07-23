/*
 * XREFs of SepCanTokenMatchAllPackageSid @ 0x1402FD040
 * Callers:
 *     SepMatchPackage @ 0x1402FCF70 (SepMatchPackage.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402FD210 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B281C (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
