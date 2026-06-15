/*
 * XREFs of sub_140020F28 @ 0x140020F28
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140021024 @ 0x140021024 (sub_140021024.c)
 *     sub_140021234 @ 0x140021234 (sub_140021234.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140020F28(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v9; // edx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
  {
    v6 = -2147467261;
    v9 = 202;
    goto LABEL_10;
  }
  v4 = a2[1];
  if ( !v4 )
    v4 = a2[2];
  if ( !v4 )
  {
    v6 = -2147024809;
    v9 = 203;
LABEL_10:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v6);
    return v6;
  }
  v12 = 0LL;
  v10 = *(_OWORD *)(a2 + 1);
  v5 = ((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, __int64 *))sub_140021024)(a1, *a2, &v10, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 206, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v5);
    if ( v12 )
      sub_1400B6010(v12);
    return v6;
  }
  v7 = v12;
  sub_140021234(v12, a3);
  if ( v7 )
    sub_1400B6010(v7);
  return 0LL;
}
