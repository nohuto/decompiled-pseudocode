/*
 * XREFs of sub_14002E924 @ 0x14002E924
 * Callers:
 *     sub_140014030 @ 0x140014030 (sub_140014030.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 */

char __fastcall sub_14002E924(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 i; // rcx
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v14; // [rsp+D0h] [rbp-58h]

  v14 = *(_OWORD *)(sub_140005000(a2) + 4096);
  if ( DWORD1(v14) != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v7 && *(_DWORD *)(v7 + 16) == DWORD1(v14) )
        goto LABEL_8;
    }
  }
  v7 = 0LL;
LABEL_8:
  if ( (*(_WORD *)(a3 + 2) & 5) != 0 && *(_QWORD *)(a1 + 4048) )
  {
    v8 = *(_DWORD *)(a1 + 4056);
    if ( (v8 & 1) != 0 )
    {
      v9 = sub_140005000(*(_QWORD *)(a1 + 4048));
      *(_BYTE *)(v9 + 4225) |= 8u;
      *(_BYTE *)(v10 + 3) = 4;
      sub_14000A8A0(a1, v10, 0);
      *(_QWORD *)(a1 + 4048) = 0LL;
      *(_DWORD *)(a1 + 4056) &= ~1u;
    }
    else if ( (*(_WORD *)(a3 + 2) & 7) == 3 )
    {
      *(_DWORD *)(a1 + 4056) = v8 | 1;
      sub_14002510C(a1, (__int64)sub_14002D810, *(unsigned int *)(a3 + 4), v5);
    }
    else
    {
      v11 = sub_140005000(*(_QWORD *)(a1 + 4048));
      *(_BYTE *)(v11 + 4225) |= 8u;
      *(_BYTE *)(v12 + 3) = 1;
      sub_14000A8A0(a1, v12, 0);
      *(_QWORD *)(a1 + 4048) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, a1, v7, 1LL);
  }
  return 0;
}
