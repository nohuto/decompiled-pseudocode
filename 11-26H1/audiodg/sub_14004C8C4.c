/*
 * XREFs of sub_14004C8C4 @ 0x14004C8C4
 * Callers:
 *     sub_14004E9D4 @ 0x14004E9D4 (sub_14004E9D4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004CE60 @ 0x14004CE60 (sub_14004CE60.c)
 *     sub_14004EF04 @ 0x14004EF04 (sub_14004EF04.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004C8C4(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // ebx
  unsigned int v13; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v13 = 0;
  *a4 = 0LL;
  v6 = (_QWORD *)sub_140049338(136LL, (__int64)&unk_1400C75FC);
  v7 = v6;
  if ( !v6 )
  {
    v10 = -2147024882;
    sub_14000C2A8((int)retaddr, 945, (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h", -2147024882);
    return v10;
  }
  v6[1] = 0LL;
  *v6 = off_1400BB3A0;
  if ( *(_QWORD *)(a2 + 112) )
  {
    v6[16] = v6 + 3;
    sub_1400B6010(*(_QWORD *)(a2 + 112));
    sub_1400B6010(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    v6[16] = 0LL;
  }
  v8 = v13;
  if ( v13 != -1 )
    goto LABEL_11;
  v18 = 0;
  v9 = NtQueryWnfStateData(&qword_1400C7FD8, 0LL, 0LL, &v13, 0LL, &v18);
  v10 = v9 | 0x10000000;
  if ( v9 >= 0 || v10 == -805306333 )
  {
    v8 = v13;
LABEL_11:
    v14 = v7 + 1;
    v15 = 0LL;
    v16 = 1;
    v11 = RtlSubscribeWnfStateChangeNotification(&v15, 0x2821B2CA3BC7875LL, v8, sub_14004BA60, v7, 0LL, 0, 0);
    sub_14004CE60(&v14);
    if ( v11 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v10 = sub_14004EF04(retaddr, 967LL, "onecore\\internal\\sdk\\inc\\wil\\resource.h", (unsigned int)v11);
    goto LABEL_9;
  }
  sub_14000C2A8((int)retaddr, 952, (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h", v10);
LABEL_9:
  sub_1400B6010(v7);
  return v10;
}
