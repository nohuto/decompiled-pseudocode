/*
 * XREFs of sub_140069280 @ 0x140069280
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_140010C40 @ 0x140010C40 (sub_140010C40.c)
 * Callees:
 *     sub_1400692F0 @ 0x1400692F0 (sub_1400692F0.c)
 */

__int64 __fastcall sub_140069280(__int64 a1, __int64 a2)
{
  char *v2; // r10
  char v3; // r9
  char v4; // r8
  char v5; // al

  if ( !a2 )
    return 3221225558LL;
  v2 = *(char **)(a2 + 184);
  v3 = *v2;
  v4 = v2[1];
  if ( *v2 == 15 )
  {
    v5 = sub_1400692F0(a2);
    if ( v4 == -16 || v5 == 1 )
      return 0LL;
  }
  if ( v3 == 27 )
    return 0LL;
  if ( v3 == 14 )
  {
    if ( *((_DWORD *)v2 + 6) != 266264 )
      return 3221225558LL;
    return 0LL;
  }
  if ( v3 != 22 )
    return 3221225558LL;
  return v4 != 2 ? 0xC0000056 : 0;
}
