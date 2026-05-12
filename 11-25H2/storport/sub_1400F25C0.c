/*
 * XREFs of sub_1400F25C0 @ 0x1400F25C0
 * Callers:
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 * Callees:
 *     sub_1400EB5E0 @ 0x1400EB5E0 (sub_1400EB5E0.c)
 *     sub_1400F23BC @ 0x1400F23BC (sub_1400F23BC.c)
 */

__int64 __fastcall sub_1400F25C0(_QWORD *SystemArgument2)
{
  _WORD *v1; // rax
  unsigned __int16 v3; // di
  _WORD *v4; // rax
  __int64 v5; // rax

  v1 = (_WORD *)SystemArgument2[177];
  v3 = 0;
  if ( !v1 || !*v1 )
    return 0LL;
  while ( v3 < *(_WORD *)SystemArgument2[177] )
  {
    v4 = (_WORD *)sub_1400EB5E0((__int64)SystemArgument2);
    if ( (int)sub_1400F23BC(SystemArgument2, v4) < 0 )
    {
      SystemArgument2[17] |= 0x40000000uLL;
      break;
    }
    ++v3;
  }
  *(_WORD *)(SystemArgument2[177] + 2LL) = v3;
  v5 = SystemArgument2[89];
  *((_BYTE *)SystemArgument2 + 742) = v3;
  *(_WORD *)(v5 + 150) = v3;
  return v3;
}
