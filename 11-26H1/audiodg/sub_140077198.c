/*
 * XREFs of sub_140077198 @ 0x140077198
 * Callers:
 *     sub_14007E350 @ 0x14007E350 (sub_14007E350.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140077BE4 @ 0x140077BE4 (sub_140077BE4.c)
 *     sub_14007D1C0 @ 0x14007D1C0 (sub_14007D1C0.c)
 *     sub_14007DD08 @ 0x14007DD08 (sub_14007DD08.c)
 */

__int64 __fastcall sub_140077198(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = sub_140049338(208LL, (__int64)&unk_1400C75FC);
  v15 = v6;
  if ( v6 )
  {
    v8 = sub_140077BE4(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v15 = 0LL;
    v7 = sub_14007DD08(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 168);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 168), v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_13;
        }
        sub_140017CB0((volatile signed __int32 *)(2 * v12 + 16));
LABEL_13:
        *a1 = v11;
        sub_14007D1C0(v11);
      }
      else
      {
        *a1 = 0LL;
      }
      v7 = 0;
    }
    else if ( v11 )
    {
      sub_14007D1C0(v11);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  sub_1400454AC(&v15);
  return (unsigned int)v7;
}
