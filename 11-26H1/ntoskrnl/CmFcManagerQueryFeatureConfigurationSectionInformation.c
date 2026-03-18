/*
 * XREFs of CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140AAD7E4
 * Callers:
 *     CmQueryFeatureConfigurationSections @ 0x140AAD654 (CmQueryFeatureConfigurationSections.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     CmFcpCleanupSectionState @ 0x140AADA48 (CmFcpCleanupSectionState.c)
 *     CmFcpCopySectionState @ 0x140AADA68 (CmFcpCopySectionState.c)
 */

__int64 __fastcall CmFcManagerQueryFeatureConfigurationSectionInformation(
        __int64 a1,
        _QWORD *a2,
        struct _KTHREAD **a3,
        KPROCESSOR_MODE a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbx
  struct _KTHREAD *Thread; // r12
  PVOID *p_SparePtr; // rsi
  unsigned int v13; // edi
  __int64 v14; // rbx
  unsigned int i; // edi
  void *v16; // rcx
  NTSTATUS v17; // ebp
  HANDLE *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r10
  HANDLE *v21; // rdi
  _BYTE *v22; // rsi
  _BYTE v24[8]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v26[80]; // [rsp+60h] [rbp-B8h] BYREF
  HANDLE v27[4]; // [rsp+B0h] [rbp-68h] BYREF

  memset(v27, 0, sizeof(v27));
  memset_0(v24, 0, 0x60uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink,
         17LL,
         0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink,
      0,
      v10,
      (struct _KTHREAD *)&CmpFreezeListLock.WaitBlockFill11[152]);
  }
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  Thread = CmpFreezeListLock.WaitBlock[3].Thread;
  p_SparePtr = &CmpFreezeListLock.WaitBlock[3].SparePtr;
  v13 = 0;
  v14 = 4LL;
  do
  {
    if ( *a2 < (unsigned __int64)*p_SparePtr )
      CmFcpCopySectionState(&v24[24 * v13], &CmpFreezeListLock.LastXStateSaveDebugInfo + 3 * v13);
    ++v13;
    ++a2;
    p_SparePtr += 3;
  }
  while ( v13 < 4 );
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink,
         0LL,
         17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.WaitBlock[3].WaitListEntry.Blink);
  KeLeaveCriticalRegion();
  for ( i = 0; i < 4; ++i )
  {
    v16 = *(void **)&v26[24 * i - 8];
    if ( v16 )
    {
      v17 = ObOpenObjectByPointer(v16, a4 == 0 ? 0x200 : 0, 0LL, 4u, MmSectionObjectType, a4, &v27[i]);
      if ( v17 < 0 )
        goto LABEL_21;
    }
  }
  memset_0(a3 + 1, 0, 0x60uLL);
  *a3 = Thread;
  v18 = v27;
  v19 = a3 + 3;
  v20 = 4LL;
  do
  {
    *(v19 - 2) = *(_QWORD *)((char *)v19 + v24 - (_BYTE *)a3 - 24);
    *v19 = *(_QWORD *)((char *)v19 + v26 - (_BYTE *)a3 - 24);
    v19 += 3;
    *(v19 - 4) = *v18;
    *v18++ = 0LL;
    --v20;
  }
  while ( v20 );
  v17 = 0;
LABEL_21:
  v21 = v27;
  v22 = v24;
  do
  {
    CmFcpCleanupSectionState(v22);
    if ( *v21 )
      ObCloseHandle(*v21, a4);
    v22 += 24;
    ++v21;
    --v14;
  }
  while ( v14 );
  return (unsigned int)v17;
}
