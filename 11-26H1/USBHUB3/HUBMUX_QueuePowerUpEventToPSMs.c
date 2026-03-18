/*
 * XREFs of HUBMUX_QueuePowerUpEventToPSMs @ 0x140011A00
 * Callers:
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResume @ 0x14000A590 (HUBHSM_WaitingForPortsToAcquireReferenceOnResume.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0 @ 0x14000A5C0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeInS0.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x14000A5F0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x14000A650 (HUBHSM_WaitingForPortsToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMUX_QueuePowerUpEventToPSMs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  KIRQL v5; // al
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 i; // rbx

  v2 = a1 + 2336;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2336));
  _InterlockedAnd((volatile signed __int32 *)(v2 + 32), 0xFFFFFFF7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 2368), 0xFFFFFFFD);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v6 = *(_DWORD *)(v2 + 36);
  if ( !v6 )
    return HUBSM_AddEvent(a1 + 1280, 2054);
  *(_DWORD *)(v2 + 12) = v6;
  v7 = a1 + 2376;
  result = *(_QWORD *)(a1 + 2376);
  for ( i = result - 248; v7 != result; i = result - 248 )
  {
    _InterlockedOr((volatile signed __int32 *)(i + 264), 4u);
    (*(void (__fastcall **)(__int64, _QWORD))(i + 1240))(i, a2);
    result = *(_QWORD *)(i + 248);
  }
  return result;
}
