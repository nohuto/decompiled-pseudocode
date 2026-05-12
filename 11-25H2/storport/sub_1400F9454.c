/*
 * XREFs of sub_1400F9454 @ 0x1400F9454
 * Callers:
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 * Callees:
 *     sub_1400692F0 @ 0x1400692F0 (sub_1400692F0.c)
 */

__int64 __fastcall sub_1400F9454(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v4; // edx
  char *v5; // rcx
  char v6; // r8
  bool v7; // cf

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 == 6 )
    return (unsigned int)-1073741738;
  if ( ((v2 - 5) & 0xFFFFFFFD) != 0 )
    return 0;
  if ( !a2 )
    return (unsigned int)-1073741738;
  v5 = *(char **)(a2 + 184);
  v6 = *v5;
  if ( *v5 == 27 )
    return 0;
  v4 = -1073741738;
  if ( v2 == 5 )
    return v4;
  if ( v6 == 14 )
  {
    v7 = *((_DWORD *)v5 + 6) != 266264;
LABEL_12:
    v4 &= -v7;
    return v4;
  }
  if ( v6 == 15 )
  {
    v7 = sub_1400692F0(a2) != 1;
    goto LABEL_12;
  }
  if ( v6 == 22 && v5[1] == 2 )
    return 0;
  return v4;
}
