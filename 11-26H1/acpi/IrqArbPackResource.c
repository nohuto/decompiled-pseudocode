/*
 * XREFs of IrqArbPackResource @ 0x1400D3680
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpGetRangeData @ 0x1400D3730 (IrqArbpGetRangeData.c)
 */

__int64 __fastcall IrqArbPackResource(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  bool v3; // zf
  int v5; // esi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 1) == 2;
  v5 = a2;
  v10 = 0LL;
  if ( !v3 )
    return 3221225485LL;
  if ( a2 >= 0xFFF00000 )
  {
    result = IrqArbpGetRangeData(a2, &v10);
    if ( (int)result < 0 )
      return result;
    v9 = v10;
    *(_DWORD *)(a3 + 8) = v5;
    *(_WORD *)(a3 + 6) = *(unsigned __int8 *)(v9 + 26);
    *(_WORD *)(a3 + 4) = *(_WORD *)(a1 + 18);
    v8 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    *(_WORD *)(a3 + 4) = a2;
    *(_DWORD *)(a3 + 8) = a2;
    *(_WORD *)(a3 + 6) = *(_WORD *)(a1 + 18);
    v8 = 0xFFFFFFFFLL;
  }
  *(_QWORD *)(a3 + 12) = v8;
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
  *(_WORD *)(a3 + 2) = *(_WORD *)(a1 + 4);
  *(_BYTE *)a3 = *(_BYTE *)(a1 + 1);
  return 0LL;
}
