/*
 * XREFs of sub_14001EB30 @ 0x14001EB30
 * Callers:
 *     sub_14001E180 @ 0x14001E180 (sub_14001E180.c)
 *     sub_14001E21C @ 0x14001E21C (sub_14001E21C.c)
 *     sub_14001E3D8 @ 0x14001E3D8 (sub_14001E3D8.c)
 *     sub_14001E554 @ 0x14001E554 (sub_14001E554.c)
 *     sub_14001E8BC @ 0x14001E8BC (sub_14001E8BC.c)
 *     sub_14001E9BC @ 0x14001E9BC (sub_14001E9BC.c)
 *     sub_14001F358 @ 0x14001F358 (sub_14001F358.c)
 *     sub_14004E480 @ 0x14004E480 (sub_14004E480.c)
 *     sub_140065780 @ 0x140065780 (sub_140065780.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 *     sub_140075B80 @ 0x140075B80 (sub_140075B80.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14004A6F4 @ 0x14004A6F4 (sub_14004A6F4.c)
 */

__int64 sub_14001EB30(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = sub_14004A6F4(a1, a2 - 1, a3, (__int64 *)va);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      a1[v4] = 0;
  }
  return v5;
}
