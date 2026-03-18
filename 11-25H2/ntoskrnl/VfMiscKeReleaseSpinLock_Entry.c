/*
 * XREFs of VfMiscKeReleaseSpinLock_Entry @ 0x140B98150
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckReleaseSpinlock @ 0x140B98170 (ViMiscCheckReleaseSpinlock.c)
 */

__int64 __fastcall VfMiscKeReleaseSpinLock_Entry(__int64 a1)
{
  return ViMiscCheckReleaseSpinlock(*(_QWORD *)(a1 + 16));
}
