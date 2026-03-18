/*
 * XREFs of sub_140023F70 @ 0x140023F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_140023F70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r8
  int v12; // ecx

  result = sub_140005000(a2);
  v9 = result;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v10 = *(_QWORD *)(v7 + 64);
  else
    v10 = *(_QWORD *)(v7 + 24);
  if ( a3 )
  {
    *(_DWORD *)(v10 + 20) = *(_BYTE *)(v7 + 3) != 1;
    result = *(unsigned int *)(a1 + 56);
    if ( (result & 8) != 0 || (v11 = *(_QWORD *)(v9 + 4176)) == 0 )
    {
      *(_DWORD *)(v9 + 4176) = 0;
    }
    else
    {
      result = StorPortExtendedFunction(1LL, a1, v11, v8);
      *(_QWORD *)(v9 + 4176) = 0LL;
    }
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      v12 = 6;
      result = *(unsigned __int16 *)(a3 + 14) >> 1;
      if ( (unsigned __int8)result != 6 )
      {
        v12 = 16;
        if ( (unsigned __int8)result == 7 )
          v12 = 7;
      }
      *(_DWORD *)(v10 + 20) = v12;
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
        result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    }
  }
  else
  {
    *(_DWORD *)(v10 + 20) = 16;
    *(_BYTE *)(v7 + 3) = 4;
  }
  *(_BYTE *)(v9 + 4225) |= 8u;
  return result;
}
