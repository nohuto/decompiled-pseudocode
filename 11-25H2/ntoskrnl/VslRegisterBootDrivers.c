/*
 * XREFs of VslRegisterBootDrivers @ 0x140C52668
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void VslRegisterBootDrivers()
{
  struct _KTHREAD *CurrentThread; // rax
  const signed __int16 *v1; // r8
  __int64 v2; // rdx
  unsigned __int8 v3; // cf
  __int64 v4; // rcx
  struct _MDL *Pool2; // rbx
  PVOID *v6; // rdx
  __int64 v7; // rdi
  int v8; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 *v10[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v11[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v12; // [rsp+88h] [rbp-80h]
  __int64 *v13; // [rsp+90h] [rbp-78h]

  memset_0(v11, 0, 0x68uLL);
  memset_0(v10, 0, 0x48uLL);
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v1 = (const signed __int16 *)PsLoadedModuleList;
    v2 = 0LL;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_9;
    do
    {
      v3 = _bittest16(v1 + 55, 8u);
      v4 = v2;
      v1 = *(const signed __int16 **)v1;
      ++v2;
      if ( !v3 )
        v2 = v4;
    }
    while ( v1 != (const signed __int16 *)&PsLoadedModuleList );
    if ( !v2 )
    {
LABEL_9:
      Pool2 = 0LL;
    }
    else
    {
      Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, 8 * v2, 0x65426B53uLL);
      if ( !Pool2 )
        KeBugCheck(0x7Du);
    }
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = 0LL;
    while ( v6 != &PsLoadedModuleList )
    {
      if ( _bittest16((const signed __int16 *)v6 + 55, 8u) )
        *((_QWORD *)&Pool2->Next + v7++) = v6[6];
      v6 = (PVOID *)*v6;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
    if ( v7 )
    {
      v8 = VslpLockPagesForTransfer((__int64)v10, Pool2, 8 * (int)v7, IoReadAccess, 0);
      if ( v8 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)Pool2, 8 * v7, v8);
    }
    v12 = v10[0];
    v13 = v10[7];
    BugCheckParameter4 = (int)VslpEnterIumSecureMode(2u, 0x39u, 0, (__int64)v11);
    if ( v7 )
      VslpUnlockPagesForTransfer(v10);
    if ( (BugCheckParameter4 & 0x80000000) != 0LL )
      KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, (ULONG_PTR)Pool2, 8 * v7, BugCheckParameter4);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
