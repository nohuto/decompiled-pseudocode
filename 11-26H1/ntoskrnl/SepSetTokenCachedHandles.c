/*
 * XREFs of SepSetTokenCachedHandles @ 0x140A3B748
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SepSetTokenBnoIsolation @ 0x140ADE5CC (SepSetTokenBnoIsolation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCreateHashTable @ 0x1404B21E0 (RtlCreateHashTable.c)
 *     SepReferenceCachedTokenHandles @ 0x1404C81E0 (SepReferenceCachedTokenHandles.c)
 *     SepCloseCachedTokenHandles @ 0x1404CE0A4 (SepCloseCachedTokenHandles.c)
 *     SepGetCachedHandlesEntry @ 0x140A3B97C (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x140A3C458 (SepValidateReferencedCachedHandles.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  void *v4; // rsi
  char v6; // r12
  __int64 Pool2; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdi
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  bool v17; // dl
  __int64 v18; // rcx
  char v19; // cl
  void *v20; // rax
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF
  char v23; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v23 = 0;
  v22[0] = 0LL;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    CachedHandlesEntry = SepReferenceCachedTokenHandles(a3, (HANDLE *)&a4->Thread, Pool2);
    if ( CachedHandlesEntry < 0 )
      goto LABEL_29;
    v6 = 1;
    CachedHandlesEntry = SepValidateReferencedCachedHandles(a1, a2, a3, v4);
    if ( CachedHandlesEntry < 0 )
      goto LABEL_28;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = a1[27] + 96LL;
  --CurrentThread->KernelApcDisable;
  v14 = (AutoBoost *)KeAbPreAcquire(v13, 0LL, 0LL, a4);
  v16 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v14, v13);
  if ( v16 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v16, v15);
    else
      *((_BYTE *)v16 + 10) = 1;
  }
  if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
  {
    CachedHandlesEntry = -1073741670;
    goto LABEL_23;
  }
  CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v23, v22);
  if ( CachedHandlesEntry )
    goto LABEL_23;
  v17 = 0;
  if ( !*a2 )
  {
    v18 = v22[0];
    if ( a3 )
      v17 = *(_DWORD *)(v22[0] + 56LL) == 0;
    a1[136] = v22[0];
    goto LABEL_16;
  }
  if ( *a2 == 1 )
  {
    v17 = v23 == 0;
    v18 = v22[0];
    a1[144] = v22[0];
LABEL_16:
    if ( v17 )
    {
      *(_DWORD *)(v18 + 56) = a3;
      *(_QWORD *)(v18 + 64) = v4;
    }
  }
  v19 = 0;
  if ( !v17 )
    v19 = v6;
  v20 = 0LL;
  v6 = v19;
  if ( !v17 )
    v20 = v4;
  v4 = v20;
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v13);
  KeAbPostRelease(v13);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    if ( !v6 )
    {
LABEL_29:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)CachedHandlesEntry;
    }
LABEL_28:
    SepCloseCachedTokenHandles(a3, (HANDLE *)v4);
    goto LABEL_29;
  }
  return (unsigned int)CachedHandlesEntry;
}
