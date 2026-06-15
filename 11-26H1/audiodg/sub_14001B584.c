/*
 * XREFs of sub_14001B584 @ 0x14001B584
 * Callers:
 *     sub_14001B288 @ 0x14001B288 (sub_14001B288.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001B838 @ 0x14001B838 (sub_14001B838.c)
 *     sub_14001BB08 @ 0x14001BB08 (sub_14001BB08.c)
 *     sub_14001BEF8 @ 0x14001BEF8 (sub_14001BEF8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400763A4 @ 0x1400763A4 (sub_1400763A4.c)
 *     sub_14007732C @ 0x14007732C (sub_14007732C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_14001B584(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // r14d
  int v17; // r9d
  int v18; // edx
  __int64 (__fastcall *v19)(); // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+28h] [rbp-30h]
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+30h]
  __int64 v23; // [rsp+90h] [rbp+38h] BYREF
  __int64 v24; // [rsp+98h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+50h]

  v24 = a2;
  v25 = 0LL;
  v26 = 0LL;
  v19 = sub_14007BBD0;
  v20 = 0;
  v23 = a1;
  v4 = sub_14007732C(v21, &v23, &v19);
  sub_1400763A4(&v23, v4);
  if ( !a2 )
  {
    v15 = -2147467261;
    v17 = -2147467261;
    v18 = 1381;
LABEL_32:
    sub_14000C2A8((int)retaddr, v18, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v17);
    sub_1400125D4(&v23);
    sub_140003238(&v25);
    return v15;
  }
  v5 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v5 )
    sub_1400B6010(v5);
  v6 = sub_14001B838(v5, a1 + 64);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1382, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
    if ( v23 )
      sub_1400B6010(v23);
    return v7;
  }
  v8 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v8 )
    sub_1400B6010(v8);
  *(_QWORD *)(a1 + 72) = 0LL;
  v7 = 0;
  v9 = sub_140049338(112LL, &unk_1400C75FC);
  if ( v9 && (v10 = sub_14001BB08(v9)) != 0 )
    *(_QWORD *)(a1 + 72) = v10;
  else
    v7 = -2147024882;
  if ( (v7 & 0x80000000) != 0 )
  {
    sub_14000C2A8((int)retaddr, 1383, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v7);
    if ( v23 )
      sub_1400B6010(v23);
    return v7;
  }
  v25 = 0LL;
  v11 = sub_14001BEF8(&v25, &v24);
  v7 = v11;
  if ( v11 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1384, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v11);
    if ( v23 )
      sub_1400B6010(v23);
    if ( v25 )
      sub_1400B6010(v25);
    return v7;
  }
  v12 = v25;
  v13 = v23;
  v14 = sub_1400B6010(v25);
  v15 = v14;
  if ( v14 < 0 )
  {
    v17 = v14;
    v18 = 1385;
    goto LABEL_32;
  }
  sub_1400B6010(*(_QWORD *)(a1 + 64));
  sub_1400B6010(*(_QWORD *)(a1 + 72));
  if ( v13 )
    sub_1400B6010(v13);
  if ( v12 )
    sub_1400B6010(v12);
  return 0LL;
}
