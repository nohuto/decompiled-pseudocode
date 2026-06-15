/*
 * XREFs of sub_140067768 @ 0x140067768
 * Callers:
 *     sub_14004392C @ 0x14004392C (sub_14004392C.c)
 *     sub_14006B300 @ 0x14006B300 (sub_14006B300.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400126A4 @ 0x1400126A4 (sub_1400126A4.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14005F750 @ 0x14005F750 (sub_14005F750.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140067768(__int64 a1, __int64 a2, _QWORD *a3, int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // edx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v17; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+30h]
  _QWORD *v19; // [rsp+70h] [rbp+38h] BYREF
  __int64 v20; // [rsp+78h] [rbp+40h] BYREF
  __int64 v21; // [rsp+80h] [rbp+48h] BYREF
  int v22; // [rsp+88h] [rbp+50h] BYREF

  v10 = a6;
  *a6 = 0LL;
  a6 = 0LL;
  sub_140019444((__int64 *)&a6);
  v22 = a4;
  v19 = a3;
  v20 = a2;
  v21 = a1;
  a6 = 0LL;
  v11 = sub_14005F750(&a6, &v21, &v20, &v19, &v22, v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    sub_14000C2A8((int)retaddr, 148, (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp", v11);
    v13 = 715;
LABEL_8:
    sub_14000C2A8((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v12);
    goto LABEL_9;
  }
  v14 = (_QWORD *)sub_140049338(24LL, (__int64)&unk_1400C75FC);
  v19 = v14;
  if ( !v14 )
  {
    *v10 = 0LL;
    goto LABEL_7;
  }
  v15 = sub_1400126A4(v14, (__int64)a6, 0LL);
  *v10 = v15;
  if ( !v15 )
  {
LABEL_7:
    v12 = -2147024882;
    v13 = 719;
    goto LABEL_8;
  }
  v12 = 0;
LABEL_9:
  sub_140003238((__int64 *)&a6);
  return v12;
}
