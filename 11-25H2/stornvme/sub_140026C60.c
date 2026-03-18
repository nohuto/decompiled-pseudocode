/*
 * XREFs of sub_140026C60 @ 0x140026C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 */

__int64 __fastcall sub_140026C60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  __int64 v12; // r8

  result = sub_140005000(a2);
  v10 = result;
  if ( v8 )
  {
    if ( *(_BYTE *)(v7 + 2) == 40 )
      v11 = *(_DWORD **)(v7 + 64);
    else
      v11 = *(_DWORD **)(v7 + 24);
    v11[16] = *v8;
    v11[17] = v8[1];
    result = *(unsigned int *)(a1 + 56);
    if ( (result & 8) != 0 || (v12 = *(_QWORD *)(v10 + 4176)) == 0 )
    {
      *(_DWORD *)(v10 + 4176) = 0;
    }
    else
    {
      result = StorPortExtendedFunction(1LL, a1, v12, v9);
      *(_QWORD *)(v10 + 4176) = 0LL;
    }
    if ( *(_BYTE *)(a2 + 3) == 1 )
    {
      v11[5] = 0;
      v11[4] = 1;
    }
    else
    {
      v11[4] = 2;
      result = *(unsigned __int16 *)(a3 + 14);
      v11[5] = result;
      *(_BYTE *)(a2 + 3) = 1;
      if ( v11[7] )
        result = sub_140006100(a1, 0x40u);
    }
  }
  else
  {
    *(_BYTE *)(v7 + 3) = 4;
  }
  *(_BYTE *)(v10 + 4225) |= 8u;
  return result;
}
