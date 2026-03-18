/*
 * XREFs of VidSchiCancelDelayTimerDevice @ 0x1400C06D4
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x140041090 (VidSchiCancelDelayTimerContext.c)
 */

void __fastcall VidSchiCancelDelayTimerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  v2 = (_QWORD *)(a2 + 80);
  v3 = *(_QWORD **)(a2 + 80);
  while ( v3 != v2 )
  {
    v4 = (__int64)(v3 - 3);
    v3 = (_QWORD *)*v3;
    VidSchiCancelDelayTimerContext(0LL, v4);
  }
}
