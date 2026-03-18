/*
 * XREFs of sub_140023C40 @ 0x140023C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140018090 @ 0x140018090 (sub_140018090.c)
 *     sub_140021020 @ 0x140021020 (sub_140021020.c)
 *     sub_140023400 @ 0x140023400 (sub_140023400.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 */

char __fastcall sub_140023C40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  char v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int16 v11; // r9
  int v12; // r8d
  unsigned int v13; // edx
  __int16 v14; // r9
  int v15; // eax
  int v16; // eax

  v4 = sub_140005000(a2);
  v7 = v4;
  v8 = 1;
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v9 = *(_QWORD *)(v5 + 64);
  else
    v9 = *(_QWORD *)(v5 + 24);
  if ( !v6 )
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(v4 + 4225) |= 8u;
    goto LABEL_34;
  }
  v10 = *(unsigned __int16 *)(v6 + 14);
  v11 = v10 & 0x1FE;
  if ( (v10 & 0x1FE) == 0 && (v10 & 0xE00) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
    {
LABEL_16:
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_32;
    }
    if ( sub_140023400(a1) && (v12 & 0x400) == 0 )
    {
      *(_DWORD *)(v9 + 20) = 0;
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)sub_14002510C(a1, sub_140023AC0, 0LL) )
        *(_DWORD *)(a1 + 24) |= 0x20u;
      goto LABEL_32;
    }
    *(_DWORD *)(a1 + 24) = v12 & 0xFF7FFBDF | 0x800020;
    if ( sub_140018090(a1, 0, (__int64)sub_140023F00, a2) )
      goto LABEL_13;
    *(_DWORD *)(a1 + 24) &= ~0x800000u;
LABEL_15:
    *(_DWORD *)(v9 + 20) = 32;
    goto LABEL_16;
  }
  if ( (v10 & 0xE00) == 0x200 )
  {
    v13 = v10 >> 1;
    if ( (unsigned __int8)v13 == 7 )
    {
      *(_DWORD *)(v9 + 20) = 7;
    }
    else
    {
      if ( (unsigned __int8)v13 == 11 )
        goto LABEL_15;
      if ( (unsigned int)(unsigned __int8)v13 - 16 < 2 )
      {
        *(_DWORD *)(a1 + 24) |= 0x800020u;
        if ( sub_140018090(a1, v11 == 32, (__int64)sub_140023F00, a2) )
        {
LABEL_13:
          v8 = 0;
          goto LABEL_32;
        }
        *(_DWORD *)(a1 + 24) &= ~0x800000u;
        *(_DWORD *)(v9 + 20) = 32;
        goto LABEL_16;
      }
      if ( sub_140023400(a1) )
      {
        v15 = *(_DWORD *)(a1 + 24);
        if ( (v15 & 0x10400) == 0 )
        {
          *(_DWORD *)(a1 + 24) = v15 | 0x400;
          v8 = 0;
          sub_140021020(a1, a2);
          sub_1400092F0(a1, a2);
          goto LABEL_32;
        }
      }
      v16 = 6;
      if ( v14 != 12 )
        v16 = 16;
      *(_DWORD *)(v9 + 20) = v16;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = 16;
  }
  *(_BYTE *)(a2 + 3) = 4;
LABEL_32:
  LOBYTE(v4) = 8 * v8;
  *(_BYTE *)(v7 + 4225) = (8 * v8) | *(_BYTE *)(v7 + 4225) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 24) &= ~0x800u;
LABEL_34:
  *(_DWORD *)(a1 + 24) &= ~0x10000u;
  if ( *(_BYTE *)(a2 + 3) != 1 && (*(_BYTE *)(a1 + 21) & 2) != 0 )
    LOBYTE(v4) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  return v4;
}
