/*
 * XREFs of sub_1400692F0 @ 0x1400692F0
 * Callers:
 *     sub_140069280 @ 0x140069280 (sub_140069280.c)
 *     sub_1400F9454 @ 0x1400F9454 (sub_1400F9454.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400692F0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    return *(_BYTE *)(v1 + 20);
  else
    return *(_BYTE *)(v1 + 2);
}
