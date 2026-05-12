/*
 * XREFs of sub_1401016D0 @ 0x1401016D0
 * Callers:
 *     sub_1400FBDFC @ 0x1400FBDFC (sub_1400FBDFC.c)
 *     sub_1401128A8 @ 0x1401128A8 (sub_1401128A8.c)
 *     sub_140112A70 @ 0x140112A70 (sub_140112A70.c)
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 *     sub_1401A4548 @ 0x1401A4548 (sub_1401A4548.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1401016D0(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = v1[131];
  if ( v2 && (*(_DWORD *)(v2 + 24) & 1) != 0 )
    return 0;
  if ( (*(_BYTE *)(v1[74] + 520LL) & 4) != 0 )
    return 1;
  v4 = v1[75];
  if ( !v4 )
    return 0;
  return *(_BYTE *)(v4 + 3) != 0;
}
