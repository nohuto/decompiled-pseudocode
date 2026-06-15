/*
 * XREFs of sub_1400AA0F0 @ 0x1400AA0F0
 * Callers:
 *     sub_1400A93A8 @ 0x1400A93A8 (sub_1400A93A8.c)
 * Callees:
 *     sub_140030170 @ 0x140030170 (sub_140030170.c)
 *     sub_14003018C @ 0x14003018C (sub_14003018C.c)
 */

__int64 __fastcall sub_1400AA0F0(__int64 a1, unsigned int *a2)
{
  signed __int32 v3; // eax
  _DWORD *v4; // r11
  bool v5; // zf
  bool *v6; // r8
  int v7; // r8d
  signed __int32 v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h]
  __int16 v11; // [rsp+3Ch] [rbp+14h]

  v3 = sub_14003018C(a2);
  v5 = v3 == *v4;
  v9 = v3;
  *v6 = !v5;
  if ( !v5 )
  {
    v10 = 83887106;
    v11 = 769;
    while ( !sub_140030170((volatile signed __int32 *)a2, &v9, *((unsigned __int8 *)&v10 + (v3 & 0xFFFFFFF7))) )
      v3 = v9;
    *v4 = v7;
  }
  return *v4 >> 1;
}
