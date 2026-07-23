/*
 * XREFs of sub_1409ED0E8 @ 0x1409ED0E8
 * Callers:
 *     sub_1409ED050 @ 0x1409ED050 (sub_1409ED050.c)
 * Callees:
 *     sub_14052C5D0 @ 0x14052C5D0 (sub_14052C5D0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     sub_1409ED29C @ 0x1409ED29C (sub_1409ED29C.c)
 *     sub_1409ED2C4 @ 0x1409ED2C4 (sub_1409ED2C4.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409ED0E8(__int64 a1, unsigned int *a2)
{
  void *v4; // rsi
  int UserDataPagesKernelWritable; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int128 v9; // xmm0
  unsigned int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  char v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v21; // [rsp+48h] [rbp-B8h] BYREF
  PMDL Mdl[2]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN **v23; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-98h]
  __int128 v25; // [rsp+78h] [rbp-88h]
  __int128 v26; // [rsp+88h] [rbp-78h]
  __int128 v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  __int128 v29; // [rsp+B8h] [rbp-48h]
  __int128 v30; // [rsp+C8h] [rbp-38h]
  __int128 v31; // [rsp+D8h] [rbp-28h]
  __int128 v32; // [rsp+E8h] [rbp-18h]
  __int128 v33; // [rsp+F8h] [rbp-8h]

  v4 = (void *)(*(_QWORD *)(a1 + 32) + (a2[1] & 0xFFFFFFF));
  v21 = 0LL;
  Mdl[0] = 0LL;
  UserDataPagesKernelWritable = sub_1409ED2C4(v4);
  if ( UserDataPagesKernelWritable >= 0 )
  {
    v6 = a2[2] & 0xFFFFFFF;
    if ( (*a2 & 2) != 0 )
    {
      UserDataPagesKernelWritable = WbMakeUserDataPagesKernelWritable(v4, v6);
    }
    else
    {
      UserDataPagesKernelWritable = WbMakeUserExecutablePagesKernelWritable(v4, v6, Mdl, &v21);
      if ( UserDataPagesKernelWritable >= 0 )
        goto LABEL_7;
    }
    if ( UserDataPagesKernelWritable >= 0 )
    {
LABEL_7:
      v7 = *(_QWORD *)(a1 + 56);
      v8 = a2[2];
      v23 = &off_140003FD8;
      v9 = *(_OWORD *)(v7 + 80);
      v10 = a2[1] & 0xFFFFFFF;
      v20[0] = 0;
      v11 = *(_OWORD *)(v7 + 96);
      v24 = v9;
      v12 = *(_OWORD *)(v7 + 112);
      v25 = v11;
      v13 = *(_OWORD *)(v7 + 128);
      v26 = v12;
      v14 = *(_OWORD *)(v7 + 144);
      v27 = v13;
      v15 = *(_OWORD *)(v7 + 160);
      v28 = v14;
      v16 = *(_OWORD *)(v7 + 176);
      v29 = v15;
      v17 = *(_OWORD *)(v7 + 208);
      v30 = v16;
      v31 = *(_OWORD *)(v7 + 192);
      v18 = *(_OWORD *)(v7 + 224);
      v32 = v17;
      v33 = v18;
      sub_14052C5D0((__int64)&v23, (char *)v4, v21, v8 & 0xFFFFFFF, *(_QWORD *)(v7 + 72), v10, v20);
      UserDataPagesKernelWritable = 0;
      *a2 = *a2 & 0xFFFFFC03 | (4 * (unsigned __int8)v20[0]);
    }
  }
  sub_1409ED29C(Mdl[0]);
  return (unsigned int)UserDataPagesKernelWritable;
}
