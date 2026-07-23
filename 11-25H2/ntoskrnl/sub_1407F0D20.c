/*
 * XREFs of sub_1407F0D20 @ 0x1407F0D20
 * Callers:
 *     sub_1409E1978 @ 0x1409E1978 (sub_1409E1978.c)
 * Callees:
 *     sub_14046C360 @ 0x14046C360 (sub_14046C360.c)
 *     ZwFlushInstructionCache @ 0x14069CF60 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     sub_1409E1F18 @ 0x1409E1F18 (sub_1409E1F18.c)
 *     sub_1409E1F40 @ 0x1409E1F40 (sub_1409E1F40.c)
 *     sub_1409E2074 @ 0x1409E2074 (sub_1409E2074.c)
 *     sub_140A22B08 @ 0x140A22B08 (sub_140A22B08.c)
 */

__int64 __fastcall sub_1407F0D20(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // ebx
  void *v7; // r12
  _DWORD *v8; // rsi
  _DWORD *v9; // r15
  _DWORD *v10; // rsi
  int v12; // [rsp+30h] [rbp-68h]
  PMDL Mdl; // [rsp+58h] [rbp-40h] BYREF
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
    v6 = sub_1409E1F40(v7);
    if ( v6 >= 0 )
    {
      v6 = sub_1409E2074((_DWORD)v7, *v8 & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v14);
      if ( v6 >= 0 )
      {
        v9 = v8;
        if ( a2 )
        {
          v12 = *v8 & 0xFFFFFFF;
          v10 = v14;
          v6 = sub_14046C360(
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
          v6 = sub_140A22B08(0, (_DWORD)v10, (_DWORD)v10, *v9 & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
          if ( v6 >= 0 )
          {
            if ( !a2
              || (v6 = sub_14046C360(
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
  sub_1409E1F18(Mdl);
  return (unsigned int)v6;
}
