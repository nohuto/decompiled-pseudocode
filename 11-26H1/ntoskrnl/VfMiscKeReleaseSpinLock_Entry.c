/*
 * XREFs of VfMiscKeReleaseSpinLock_Entry @ 0x140C4D170
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckReleaseSpinlock @ 0x140C4D190 (ViMiscCheckReleaseSpinlock.c)
 */

__int64 __fastcall VfMiscKeReleaseSpinLock_Entry(__int64 a1)
{
  return ViMiscCheckReleaseSpinlock(*(_QWORD *)(a1 + 16));
}
