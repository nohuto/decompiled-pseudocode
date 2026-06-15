/*
 * XREFs of sub_140010BA4 @ 0x140010BA4
 * Callers:
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_1400110B8 @ 0x1400110B8 (sub_1400110B8.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_14001137C @ 0x14001137C (sub_14001137C.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400126E8 @ 0x1400126E8 (sub_1400126E8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall sub_140010BA4(__int64 a1, __int64 a2, __int64 *a3)
{
  BOOL v5; // r15d
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  int pExceptionObject; // [rsp+40h] [rbp-A8h] BYREF
  int v27; // [rsp+44h] [rbp-A4h] BYREF
  int v28; // [rsp+48h] [rbp-A0h] BYREF
  int v29; // [rsp+4Ch] [rbp-9Ch] BYREF
  int v30; // [rsp+50h] [rbp-98h] BYREF
  int v31; // [rsp+54h] [rbp-94h] BYREF
  __int64 v32; // [rsp+58h] [rbp-90h] BYREF
  __int128 v33; // [rsp+60h] [rbp-88h] BYREF
  __int128 v34; // [rsp+70h] [rbp-78h] BYREF
  __int64 v35; // [rsp+80h] [rbp-68h]
  __int128 v36; // [rsp+88h] [rbp-60h]
  int v37; // [rsp+98h] [rbp-50h]
  __int64 v39; // [rsp+F8h] [rbp+10h] BYREF
  __int64 *v40; // [rsp+100h] [rbp+18h]
  __int64 v41; // [rsp+108h] [rbp+20h] BYREF

  v40 = a3;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 10;
  v5 = *(_DWORD *)a2 != 0;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 16LL, &unk_1400C9A58);
  }
  *a3 = 0LL;
  v41 = 0LL;
  v6 = sub_14001137C(v5, *(_QWORD *)(a2 + 8), &v41);
  if ( v6 < 0 )
  {
    pExceptionObject = v6;
    throw (long *)&pExceptionObject;
  }
  v39 = v41;
  sub_140011180(&v34, &v39);
  v41 = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  v39 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    v8 = sub_14001137C(v5, v7, &v39);
    if ( v8 < 0 )
    {
      v29 = v8;
      throw (long *)&v29;
    }
    *(_QWORD *)&v33 = v39;
    sub_140011180(&v34, &v33);
  }
  else
  {
    v23 = sub_14004B6D4(v7, (unsigned int)*(unsigned __int16 *)(v7 + 16) + 18, &v39);
    if ( v23 < 0 )
    {
      v27 = v23;
      throw (long *)&v27;
    }
    v32 = 0LL;
    v33 = xmmword_1400C6878;
    v24 = sub_14006A97C((unsigned int)&qword_1400C9798, 0, 0, v5, 1, 0, (__int64)&v33, (__int64)&v32);
    if ( v24 < 0 )
    {
      v28 = v24;
      throw (long *)&v28;
    }
    v25 = v32;
    sub_1400B6010(v32);
    sub_1400B6010(v25);
    *(_QWORD *)&v33 = v25;
    sub_140011180(&v34, &v33);
    sub_140003238(&v39);
  }
  v9 = sub_140049338(344LL, &unk_1400C75FC);
  v39 = v9;
  if ( v9 )
    v12 = sub_1400126E8(v9, 4LL);
  else
    v12 = 0LL;
  v39 = v12;
  if ( !v12 )
  {
    v30 = -2147024882;
    throw (long *)&v30;
  }
  v13 = sub_140011760(v11, v10, *(_QWORD *)(a2 + 32), v12 + 192);
  v14 = v13;
  if ( v13 < 0 )
  {
    v31 = v13;
    throw (long *)&v31;
  }
  if ( *(_DWORD *)a2 == 2 || (v15 = 0, *(_DWORD *)a2 == 3) )
    v15 = 1;
  *(_DWORD *)(v12 + 120) = v15;
  *(_DWORD *)(v12 + 132) = *(_DWORD *)a2;
  *(_DWORD *)(v12 + 12) = v5;
  *(_DWORD *)(v12 + 136) = 0;
  v16 = *(_QWORD *)(v12 + 152);
  if ( v16 && v12 != -152 )
  {
    sub_1400B6010(v16);
    *(_QWORD *)(v12 + 152) = 0LL;
  }
  sub_140004C9C((_QWORD *)(v12 + 240), a1);
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 8) = 1;
  v18 = *((_QWORD *)&v34 + 1);
  while ( v18 )
  {
    v19 = v18;
    v18 = *(_QWORD *)(v18 + 8);
    sub_1400110B8(v12 + 16, v19 + 16);
  }
  sub_14000DE78((__int64)&v34, v17);
  *(_DWORD *)(v12 + 148) = (int)((float)((float)*(int *)(*(_QWORD *)(a2 + 16) + 8LL)
                                       / (float)*(unsigned __int16 *)(*(_QWORD *)(a2 + 16) + 12LL))
                               * (double)(int)*(_QWORD *)(a2 + 24)
                               / 10000000.0
                               + 0.5);
  *(_DWORD *)(v12 + 140) = 6;
  *(_DWORD *)(v12 + 212) = 0;
  *(_OWORD *)(v12 + 216) = xmmword_1400C6878;
  *(_DWORD *)(v12 + 336) = 2;
  *v40 = v12;
  v21 = off_1400E73D8;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 17LL, &unk_1400C9A58);
    v21 = off_1400E73D8;
  }
  if ( v14 < 0 )
  {
    if ( v21 != &off_1400E73D8 && (*((_DWORD *)v21 + 7) & 0x20000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
      sub_14005A040(v21[2], 18LL, &unk_1400C9A58);
    sub_14005A470("CPipeInstance::CreateFormatConverterPipeInstance", 633LL, (unsigned int)v14);
  }
  sub_14000DE78((__int64)&v34, v20);
  return (unsigned int)v14;
}
