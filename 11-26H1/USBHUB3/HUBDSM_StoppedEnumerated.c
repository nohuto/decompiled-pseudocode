/*
 * XREFs of HUBDSM_StoppedEnumerated @ 0x140024CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_StoppedEnumerated(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1552LL), -100000000LL, 0LL, 0LL);
  return 1000LL;
}
