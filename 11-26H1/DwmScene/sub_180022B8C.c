/*
 * XREFs of sub_180022B8C @ 0x180022B8C
 * Callers:
 *     sub_180022A00 @ 0x180022A00 (sub_180022A00.c)
 *     sub_180023110 @ 0x180023110 (sub_180023110.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_180023EB0 @ 0x180023EB0 (sub_180023EB0.c)
 * Callees:
 *     sub_180021CEC @ 0x180021CEC (sub_180021CEC.c)
 *     sub_180021D60 @ 0x180021D60 (sub_180021D60.c)
 *     sub_18002455C @ 0x18002455C (sub_18002455C.c)
 */

__int64 __fastcall sub_180022B8C(__int64 a1, __int64 a2)
{
  char v3; // al
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax

  LOBYTE(a2) = 1;
  v3 = sub_18002455C(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = 64LL;
  if ( v3 != 1 )
    v4 = 129LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a1 + v5) );
  if ( v5 + 3 > v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    v8 = o__aligned_malloc(160LL, 8LL);
    if ( v8 )
    {
      v7 = sub_180021CEC(v8);
      goto LABEL_13;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v6 = o__aligned_malloc(160LL, 8LL);
    if ( v6 )
    {
      v7 = sub_180021D60(v6);
LABEL_13:
      v9 = v7;
      goto LABEL_15;
    }
  }
  v9 = 0LL;
LABEL_15:
  if ( v9 )
  {
    o_strncpy_s(v9, 129LL, a1, v5);
    *(_BYTE *)(v9 + v5) = 46;
    *(_QWORD *)(v9 + 136) = v5 + 1;
    result = v9;
    *(_QWORD *)(v9 + 144) = (v5 + 3) << 32;
    *(_BYTE *)(v9 + *(_QWORD *)(v9 + 136)) = 0;
    return result;
  }
  return 0LL;
}
