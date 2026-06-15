/*
 * XREFs of sub_14003B1C0 @ 0x14003B1C0
 * Callers:
 *     sub_140006490 @ 0x140006490 (sub_140006490.c)
 *     sub_14003414C @ 0x14003414C (sub_14003414C.c)
 * Callees:
 *     sub_14003B200 @ 0x14003B200 (sub_14003B200.c)
 */

BOOL __fastcall sub_14003B1C0(_DWORD *a1)
{
  if ( !a1[2] )
    sub_14003B200(*(_QWORD *)a1 + 8LL, *(_QWORD *)(*(_QWORD *)a1 + 32LL));
  return InitOnceComplete(*(LPINIT_ONCE *)a1, a1[2], (LPVOID)(*(_QWORD *)a1 + 8LL));
}
