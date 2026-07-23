/*
 * XREFs of sub_140886BA8 @ 0x140886BA8
 * Callers:
 *     sub_1409ECCF4 @ 0x1409ECCF4 (sub_1409ECCF4.c)
 * Callees:
 *     sub_14049C82C @ 0x14049C82C (sub_14049C82C.c)
 *     ZwFlushInstructionCache @ 0x140729DE0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     sub_1409ED29C @ 0x1409ED29C (sub_1409ED29C.c)
 *     sub_1409ED2C4 @ 0x1409ED2C4 (sub_1409ED2C4.c)
 *     sub_1409ED3D4 @ 0x1409ED3D4 (sub_1409ED3D4.c)
 *     sub_140AAE6E4 @ 0x140AAE6E4 (sub_140AAE6E4.c)
 */

__int64 __fastcall sub_140886BA8(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // ebx
  void *v7; // r13
  _DWORD *v8; // rsi
  _DWORD *v9; // r15
  _DWORD *v10; // rsi
  int v12; // [rsp+30h] [rbp-68h]
  PMDL Mdl; // [rsp+60h] [rbp-38h] BYREF
  void *v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = 0LL;
  Mdl = 0LL;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v8 = a3 + 2;
    v6 = sub_1409ED2C4(v7);
    if ( v6 >= 0 )
    {
      v6 = sub_1409ED3D4((_DWORD)v7, *v8 & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v14);
      if ( v6 >= 0 )
      {
        v9 = v8;
        if ( a2 )
        {
          v12 = *v8 & 0xFFFFFFF;
          v10 = v14;
          v6 = sub_14049C82C(
                 a1[5],
                 *(_DWORD *)(a1[7] + 48),
                 a1[4],
                 *(_QWORD *)(a1[7] + 56) - a1[4],
                 (__int64)v7,
                 (__int64)v14,
                 v12);
          if ( v6 < 0 )
            goto LABEL_19;
          v9 = a3 + 2;
        }
        else
        {
          v10 = v14;
        }
        memmove(v10, v7, a3[2] & 0xFFFFFFF);
        if ( (*a3 & 2) != 0 || (*v9 & 0xFFFFFFFu) >= 4 )
        {
          if ( (*a3 & 2) == 0 )
            *v10 = a3[3];
          v6 = sub_140AAE6E4(0, (_DWORD)v10, (_DWORD)v10, *v9 & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
          if ( v6 >= 0 )
          {
            if ( !a2
              || (v6 = sub_14049C82C(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v7,
                         (__int64)v10,
                         *v9 & 0xFFFFFFF),
                  v6 >= 0) )
            {
              v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, a3[2] & 0xFFFFFFF);
            }
          }
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
  }
LABEL_19:
  sub_1409ED29C(Mdl);
  return (unsigned int)v6;
}
