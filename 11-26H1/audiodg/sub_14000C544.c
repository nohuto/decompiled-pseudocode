/*
 * XREFs of sub_14000C544 @ 0x14000C544
 * Callers:
 *     sub_14000ACA0 @ 0x14000ACA0 (sub_14000ACA0.c)
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_14000BF70 @ 0x14000BF70 (sub_14000BF70.c)
 *     sub_14000F170 @ 0x14000F170 (sub_14000F170.c)
 *     sub_140047564 @ 0x140047564 (sub_140047564.c)
 *     sub_1400476A4 @ 0x1400476A4 (sub_1400476A4.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 * Callees:
 *     sub_14000DC30 @ 0x14000DC30 (sub_14000DC30.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     _o__invalid_parameter_noinfo @ 0x14004A5CA (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

void __fastcall sub_14000C544(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  const void *v7; // r9
  size_t v8; // r8
  void *v9; // r10

  v2 = a2 + 1;
  if ( a2 == -1LL || v2 < a2 || (v4 = a1[1], v2 > v4) )
    sub_14004639C(2147942487LL, a2);
  v5 = v4 - v2;
  if ( v5 )
  {
    v6 = 0;
    v7 = (const void *)(*a1 + 8 * v2);
    v8 = 8 * v5;
    v9 = (void *)(*a1 + 8 * a2);
    if ( 8 * v5 )
    {
      if ( v9 && v7 )
      {
        memmove(v9, v7, v8);
      }
      else
      {
        v6 = 22;
        *(_DWORD *)o__errno(v5, a2, v8, v7) = 22;
        o__invalid_parameter_noinfo();
      }
    }
    sub_14000DC30(v6, a2, v8, v7);
  }
  --a1[1];
}
