/*
 * XREFs of EtwpCovSampCaptureApc @ 0x140261700
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140261848 (EtwpCovSampCaptureApcRelease.c)
 *     MmCanThreadFault @ 0x140262E50 (MmCanThreadFault.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140A23904 (EtwpCovSampCaptureUserAddresses.c)
 */

struct _KTHREAD *__fastcall EtwpCovSampCaptureApc(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbp
  struct _SLIST_ENTRY *v5; // rsi
  __int64 v6; // r14
  KIRQL v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // rcx
  BOOL v11; // ebx
  struct _KTHREAD *result; // rax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3;
  v5 = (struct _SLIST_ENTRY *)(a1 - 56);
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v13, 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 - 56 + 48) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 632));
    v5[4].Next = 0LL;
    v8 = v7;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 632), 0LL);
    else
      KiReleaseSpinLockInstrumented(v4 + 632, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    __writecr8(v8);
  }
  EtwpCovSampCaptureApcRelease(v5);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v11 = (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 || !CurrentThread->Teb;
  if ( CurrentIrql < 2u
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong
    && (unsigned int)MmCanThreadFault(CurrentThread)
    && KeGetCurrentThread()->ApcStateIndex != 1
    && !v11 )
  {
    EtwpCovSampCaptureUserAddresses(v4, v6);
  }
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)&result[1].SwapListEntry + 2, 0xFF7FFFFF);
  return result;
}
