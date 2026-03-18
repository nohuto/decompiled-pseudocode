/*
 * XREFs of sub_140026970 @ 0x140026970
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001FD0 @ 0x140001FD0 (sub_140001FD0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000B3D0 @ 0x14000B3D0 (sub_14000B3D0.c)
 *     sub_140018090 @ 0x140018090 (sub_140018090.c)
 *     sub_140023400 @ 0x140023400 (sub_140023400.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 */

char __fastcall sub_140026970(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  char v8; // si
  unsigned int v9; // edx
  __int16 v10; // r9
  __int64 v11; // r9
  char v12; // dl
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r9
  int v17; // [rsp+90h] [rbp+8h] BYREF

  v4 = sub_140005000(a2);
  v7 = v4;
  v8 = 1;
  if ( !v6 )
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(v4 + 4225) |= 8u;
    return v4;
  }
  v9 = *(unsigned __int16 *)(v6 + 14);
  v10 = v9 & 0x1FE;
  if ( (v9 & 0x1FE) == 0 && (v9 & 0xE00) == 0 )
  {
    if ( sub_140023400(a1) && (*(_DWORD *)(a1 + 24) & 0x400) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)sub_14002510C(a1, (__int64)sub_140023AC0, 0LL, v11) )
      {
        *(_DWORD *)(a1 + 24) |= 0x20u;
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
      }
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 24) |= 0x20u;
    *(_DWORD *)(a1 + 24) &= ~0x400u;
    v12 = 0;
LABEL_10:
    if ( sub_140018090(a1, v12, (__int64)sub_140026BB0, a2) )
    {
      v8 = 0;
      goto LABEL_22;
    }
    goto LABEL_12;
  }
  if ( (v9 & 0xE00) != 0x200 )
    goto LABEL_21;
  v13 = v9 >> 1;
  if ( (unsigned __int8)v13 == 7 )
    goto LABEL_21;
  if ( (unsigned __int8)v13 == 11 )
  {
LABEL_12:
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_22;
  }
  if ( (unsigned int)(unsigned __int8)v13 - 16 < 2 )
  {
    *(_DWORD *)(a1 + 24) |= 0x20u;
    v12 = v10 == 32;
    goto LABEL_10;
  }
  if ( !sub_140023400(a1) || (*(_DWORD *)(a1 + 24) & 0x400) != 0 )
  {
LABEL_21:
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v14 = sub_14000B3D0(a2, &v17, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x400u;
    v8 = 0;
    sub_140001FD0(a1, a2, v14, v15);
    sub_1400092F0(a1, a2);
  }
LABEL_22:
  LOBYTE(v4) = 8 * v8;
  *(_BYTE *)(v7 + 4225) = (8 * v8) | *(_BYTE *)(v7 + 4225) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 24) &= ~0x800u;
  return v4;
}
