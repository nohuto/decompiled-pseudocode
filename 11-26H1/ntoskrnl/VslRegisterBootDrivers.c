/*
 * XREFs of VslRegisterBootDrivers @ 0x140D0B784
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void VslRegisterBootDrivers()
{
  struct _KTHREAD *CurrentThread; // rax
  const signed __int16 *v1; // rcx
  __int64 v2; // rdx
  unsigned __int8 v3; // cf
  __int64 v4; // rax
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
      v4 = v2 + 1;
      v1 = *(const signed __int16 **)v1;
      if ( !v3 )
        v4 = v2;
      v2 = v4;
    }
    while ( v1 != (const signed __int16 *)&PsLoadedModuleList );
    if ( !v4 )
    {
LABEL_9:
      Pool2 = 0LL;
    }
    else
    {
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, 8 * v4, 0x65426B53u);
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
      v8 = VslpLockPagesForTransfer((__int64)v10, Pool2, 8 * (int)v7, 0, 0);
      if ( v8 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)Pool2, 8 * v7, v8);
    }
    v12 = v10[0];
    v13 = v10[7];
    BugCheckParameter4 = (int)VslpEnterIumSecureMode(2u, 0x3Au, 0, (__int64)v11);
    if ( v7 )
      VslpUnlockPagesForTransfer(v10);
    if ( (BugCheckParameter4 & 0x80000000) != 0LL )
      KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, (ULONG_PTR)Pool2, 8 * v7, BugCheckParameter4);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
