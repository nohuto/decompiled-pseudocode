/*
 * XREFs of MiDecommitGetMetadataSlot @ 0x1406FFEA0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     RtlInterlockedSetClearRun @ 0x140357CF0 (RtlInterlockedSetClearRun.c)
 *     RtlFindClearBits @ 0x140358780 (RtlFindClearBits.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x14052E654 (MiDecommitRemoveEnclaveReleaseLocks.c)
 */

__int64 __fastcall MiDecommitGetMetadataSlot(__int64 a1, ULONG_PTR a2)
{
  RTL_BITMAP *StackBase; // rbx
  ULONG ClearBits; // eax
  ULONG v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  __int64 v12; // r8
  AutoBoost *v13; // rdi

  StackBase = (RTL_BITMAP *)stru_140E36558.StackBase;
  while ( 1 )
  {
    ClearBits = RtlFindClearBits(StackBase, 1u, 0);
    v6 = ClearBits;
    if ( ClearBits == -1 )
      break;
    if ( (unsigned int)RtlInterlockedSetClearRun((__int64)StackBase, ClearBits, 1u) )
      return v6;
  }
  MiDecommitRemoveEnclaveReleaseLocks(a1, 1LL);
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 48LL) >> 10) & 0x7F;
  --CurrentThread->SpecialApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E36558.ThreadLock, 0LL, 0LL, v9);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E36558.ThreadLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&stru_140E36558.ThreadLock, v10, (__int64)&stru_140E36558.ThreadLock);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v11);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  MiLockWorkingSetShared(*(_QWORD *)(a1 + 56), (__int64)v11, v12);
  MiMakeSystemAddressValid(a2, v8, *(_BYTE *)(a1 + 64), 0);
  return v6;
}
