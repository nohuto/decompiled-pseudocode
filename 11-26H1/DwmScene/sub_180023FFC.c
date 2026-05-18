/*
 * XREFs of sub_180023FFC @ 0x180023FFC
 * Callers:
 *     sub_180022620 @ 0x180022620 (sub_180022620.c)
 *     sub_180022770 @ 0x180022770 (sub_180022770.c)
 *     sub_180022A00 @ 0x180022A00 (sub_180022A00.c)
 *     sub_180022D30 @ 0x180022D30 (sub_180022D30.c)
 *     sub_180022E80 @ 0x180022E80 (sub_180022E80.c)
 *     sub_180023110 @ 0x180023110 (sub_180023110.c)
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023490 @ 0x180023490 (sub_180023490.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_180023850 @ 0x180023850 (sub_180023850.c)
 *     sub_180023BE0 @ 0x180023BE0 (sub_180023BE0.c)
 *     sub_180023D10 @ 0x180023D10 (sub_180023D10.c)
 *     sub_180023EB0 @ 0x180023EB0 (sub_180023EB0.c)
 * Callees:
 *     sub_180021CEC @ 0x180021CEC (sub_180021CEC.c)
 *     sub_180021D60 @ 0x180021D60 (sub_180021D60.c)
 *     sub_18002455C @ 0x18002455C (sub_18002455C.c)
 */

__int64 __fastcall sub_180023FFC(char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char *v7; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_18002455C(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = 64LL;
  if ( v3 != 1 )
    v5 = 129LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Str[v6] );
  if ( v6 >= v5 )
    return 0LL;
  v7 = strrchr(Str, 46);
  if ( !v7 )
    return 0LL;
  v8 = v7 + 1;
  o__set_errno(0LL);
  v9 = o_strtol(v8, 0LL, 10LL);
  v10 = v9;
  if ( !v9 && *v8 != 48 && v8[1] )
    return 0LL;
  if ( *(_DWORD *)o__errno() == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v13 = o__aligned_malloc(160LL, 8LL);
    if ( v13 )
    {
      v12 = sub_180021CEC(v13);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v11 = o__aligned_malloc(160LL, 8LL);
    if ( v11 )
    {
      v12 = sub_180021D60(v11);
LABEL_18:
      v14 = v12;
      goto LABEL_20;
    }
  }
  v14 = 0LL;
LABEL_20:
  if ( v14 )
  {
    v15 = v8 - Str;
    o_strncpy_s(v14, 129LL, Str, v15);
    *(_QWORD *)(v14 + 136) = v15;
    v16 = *(_QWORD *)(v14 + 136);
    result = v14;
    *(_QWORD *)(v14 + 144) = v10 | ((v15 + 2) << 32);
    *(_BYTE *)(v14 + v16) = 0;
    return result;
  }
  return 0LL;
}
