/*
 * XREFs of sub_140138764 @ 0x140138764
 * Callers:
 *     sub_140134B78 @ 0x140134B78 (sub_140134B78.c)
 * Callees:
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140138960 @ 0x140138960 (sub_140138960.c)
 */

__int64 __fastcall sub_140138764(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  int v5; // edi
  unsigned int i; // r14d
  __int64 v8; // r13

  v3 = 0LL;
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v5 = sub_140138960(a1, a2, i + 0x800043000LL, 0x900000001LL);
    if ( v5 < 0 )
      break;
    v8 = 2 * i;
    v5 = sub_140138960(a1, a2, v8 + 0x80003FC00LL, 0x900000001LL);
    if ( v5 < 0 )
      break;
    v5 = sub_140138960(a1, a2, v8 + 0x80003FC01LL, i + 0x900030001LL);
    if ( v5 < 0 )
      break;
  }
  if ( a3 )
  {
    if ( v5 < 0 )
    {
LABEL_12:
      LOBYTE(v3) = a3 != 0;
      sub_140085D5C(*(int **)a1, "TcglibConfigureLockingSp failed", v5, *(_DWORD *)(a1 + 48), i, v3);
      return (unsigned int)v5;
    }
    v5 = sub_140138960(a1, a2, 0x800038002LL, 0x900000001LL);
  }
  if ( v5 < 0 )
    goto LABEL_12;
  sub_140085F28(*(int **)a1, "TcglibConfigureLockingSp success", *(_DWORD *)(a1 + 48), a3 != 0, 0LL);
  return (unsigned int)v5;
}
