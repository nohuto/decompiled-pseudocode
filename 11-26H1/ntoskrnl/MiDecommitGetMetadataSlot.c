/*
 * XREFs of MiDecommitGetMetadataSlot @ 0x140704B70
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     RtlInterlockedSetClearRun @ 0x140359A90 (RtlInterlockedSetClearRun.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x140530B74 (MiDecommitRemoveEnclaveReleaseLocks.c)
 */

__int64 __fastcall MiDecommitGetMetadataSlot(__int64 a1, ULONG_PTR a2)
{
  _RTL_BITMAP *StackBase; // rbx
  ULONG ClearBits; // eax
  ULONG v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  __int64 v12; // r8
  AutoBoost *v13; // rdi

  StackBase = (_RTL_BITMAP *)stru_140E366D8.StackBase;
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
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8.ThreadLock, 0LL, 0LL, v9);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E366D8.ThreadLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&stru_140E366D8.ThreadLock, v10, (__int64)&stru_140E366D8.ThreadLock);
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
