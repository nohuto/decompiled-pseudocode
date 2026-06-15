/*
 * XREFs of sub_14006A97C @ 0x14006A97C
 * Callers:
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002D758 @ 0x14002D758 (sub_14002D758.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_140006AD0 @ 0x140006AD0 (sub_140006AD0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14006A830 @ 0x14006A830 (sub_14006A830.c)
 *     sub_14006B590 @ 0x14006B590 (sub_14006B590.c)
 *     sub_14006B61C @ 0x14006B61C (sub_14006B61C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14006A97C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __int128 *a7,
        __int64 *a8)
{
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r9d
  int v15; // edx
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  unsigned int v22; // esi
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v29[69]; // [rsp+78h] [rbp-90h] BYREF
  _UNKNOWN *retaddr; // [rsp+4D0h] [rbp+3C8h]

  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14006A830(*((_QWORD *)off_1400E73D8 + 2), 0x12u, (__int64)&unk_1400CA218, a1);
  }
  memset(v29, 0, 0x444uLL);
  v24 = 0LL;
  sub_1400118C0((void **)&v24, 0LL);
  v12 = sub_14006B61C(a3, a2, a1, a6, v29, &v24);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = v12;
    v15 = 624;
LABEL_11:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v14);
    goto LABEL_26;
  }
  v16 = v29[1];
  if ( (DWORD2(v29[66]) != 1 || LODWORD(v29[66]) != 1) && (v29[1] & 0x10) == 0 )
  {
    v13 = -2005139401;
    v14 = -2005139401;
    v15 = 627;
    goto LABEL_11;
  }
  v17 = sub_140049338(56LL, (__int64)&unk_1400C75FC);
  v18 = v17;
  v25 = v17;
  if ( v17 )
  {
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    *(_DWORD *)(v17 + 24) = a4;
    *(_QWORD *)(v17 + 32) = 0LL;
    *(_DWORD *)(v17 + 40) = 2;
    *(_QWORD *)v17 = off_1400B8158;
    *(_DWORD *)(v17 + 48) = v16;
  }
  else
  {
    v18 = 0LL;
  }
  v25 = v18;
  if ( !v18 )
  {
    sub_14000C2A8((int)retaddr, 630, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", -2147024882);
LABEL_17:
    v13 = -2147024882;
    goto LABEL_26;
  }
  v19 = sub_140049338(64LL, (__int64)&unk_1400C75FC);
  v20 = v19;
  v26 = v19;
  if ( v19 )
  {
    *(_QWORD *)(v19 + 40) = 0LL;
    *(_DWORD *)(v19 + 48) = 1;
    *(_DWORD *)(v19 + 52) = 1;
    *(_QWORD *)(v19 + 56) = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  v26 = v20;
  if ( !v20 )
  {
    sub_14000C2A8((int)retaddr, 633, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", -2147024882);
    sub_1400B6010(v18);
    goto LABEL_17;
  }
  v27 = *a7;
  v28 = v29[0];
  v21 = sub_14006B590(v20, (unsigned int)&v28, a5, a6, (__int64)&v27, v24);
  v22 = v21;
  if ( v21 >= 0 )
  {
    *(_QWORD *)(v18 + 32) = v20;
    *a8 = v18;
    v13 = 0;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 635, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v21);
    sub_140006AD0(v20);
    sub_1400B6010(v18);
    v13 = v22;
  }
LABEL_26:
  sub_14001D96C((void **)&v24);
  return v13;
}
