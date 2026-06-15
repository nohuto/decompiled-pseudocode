/*
 * XREFs of sub_1400A29A8 @ 0x1400A29A8
 * Callers:
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001E554 @ 0x14001E554 (sub_14001E554.c)
 *     sub_1400390D8 @ 0x1400390D8 (sub_1400390D8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400A29A8(__int64 a1, int a2, __int64 *a3, WCHAR **a4)
{
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // edx
  int v12; // eax
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v8 = sub_140049338(56LL, (__int64)&unk_1400C75FC);
  v14[0] = v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = off_1400BA770;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_DWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = a1;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_DWORD *)(v8 + 48) = 0;
    *(_BYTE *)(v8 + 52) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  v14[0] = v8;
  if ( v8 )
  {
    v12 = sub_14001E554((char *)v8, a4);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14[0] = 0LL;
      *a3 = v8;
      v9 = 0;
      goto LABEL_10;
    }
    v10 = v12;
    v11 = 42;
  }
  else
  {
    v9 = -2147024882;
    v10 = -2147024882;
    v11 = 40;
  }
  sub_14000C2A8(
    (int)retaddr,
    v11,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    v10);
LABEL_10:
  sub_1400390D8(v14, 0LL);
  return v9;
}
