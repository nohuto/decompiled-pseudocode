/*
 * XREFs of sub_1409E1A4C @ 0x1409E1A4C
 * Callers:
 *     sub_1409E1978 @ 0x1409E1978 (sub_1409E1978.c)
 * Callees:
 *     sub_1404027F0 @ 0x1404027F0 (sub_1404027F0.c)
 *     sub_14046C360 @ 0x14046C360 (sub_14046C360.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFlushInstructionCache @ 0x14069CF60 (ZwFlushInstructionCache.c)
 *     sub_1409E1F18 @ 0x1409E1F18 (sub_1409E1F18.c)
 *     sub_1409E1F40 @ 0x1409E1F40 (sub_1409E1F40.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E20A0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E21A8 (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409E1A4C(__int64 *a1, int a2, _DWORD *a3)
{
  void *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // r9d
  char *v13; // rbx
  _BYTE v15[4]; // [rsp+40h] [rbp-118h] BYREF
  int v16; // [rsp+44h] [rbp-114h]
  char *v17; // [rsp+48h] [rbp-110h] BYREF
  PMDL Mdl; // [rsp+50h] [rbp-108h] BYREF
  int v19; // [rsp+58h] [rbp-100h]
  _UNKNOWN **v20; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+78h] [rbp-E0h]
  __int128 v22; // [rsp+88h] [rbp-D0h]
  __int128 v23; // [rsp+98h] [rbp-C0h]
  __int128 v24; // [rsp+A8h] [rbp-B0h]
  __int128 v25; // [rsp+B8h] [rbp-A0h]
  __int128 v26; // [rsp+C8h] [rbp-90h]
  __int128 v27; // [rsp+D8h] [rbp-80h]
  __int128 v28; // [rsp+E8h] [rbp-70h]
  __int128 v29; // [rsp+F8h] [rbp-60h]
  __int128 v30; // [rsp+108h] [rbp-50h]

  v17 = 0LL;
  Mdl = 0LL;
  v15[0] = 0;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v7 = sub_1409E1F40(v6);
    if ( v7 >= 0 )
    {
      v8 = a3[2] & 0xFFFFFFF;
      v9 = (*a3 & 2) != 0
         ? WbMakeUserDataPagesKernelWritable(v6, v8)
         : WbMakeUserExecutablePagesKernelWritable(v6, v8, &Mdl, &v17);
      v7 = v9;
      v16 = v9;
      if ( v9 >= 0 )
      {
        if ( !a2
          || (v7 = sub_14046C360(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v6,
                     (__int64)v17,
                     a3[2] & 0xFFFFFFF),
              v16 = v7,
              v7 >= 0) )
        {
          v10 = a1[7];
          v11 = a3[1] & 0xFFFFFFF;
          v12 = a3[2] & 0xFFFFFFF;
          v20 = &off_140002EA0;
          v19 = 0;
          v21 = *(_OWORD *)(v10 + 80);
          v22 = *(_OWORD *)(v10 + 96);
          v23 = *(_OWORD *)(v10 + 112);
          v24 = *(_OWORD *)(v10 + 128);
          v25 = *(_OWORD *)(v10 + 144);
          v26 = *(_OWORD *)(v10 + 160);
          v27 = *(_OWORD *)(v10 + 176);
          v28 = *(_OWORD *)(v10 + 192);
          v29 = *(_OWORD *)(v10 + 208);
          v30 = *(_OWORD *)(v10 + 224);
          v13 = v17;
          sub_1404027F0((__int64)&v20, (char *)v6, v17, v12, *(_QWORD *)(v10 + 72), v11, v15);
          v16 = 0;
          if ( !a2
            || (v7 = sub_14046C360(
                       a1[5],
                       *(_DWORD *)(a1[7] + 48),
                       a1[4],
                       a1[4] - *(_QWORD *)(a1[7] + 56),
                       (__int64)v6,
                       (__int64)v13,
                       a3[2] & 0xFFFFFFF),
                v16 = v7,
                v7 >= 0) )
          {
            v7 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6, a3[2] & 0xFFFFFFF);
          }
        }
      }
    }
  }
  sub_1409E1F18(Mdl);
  return (unsigned int)v7;
}
