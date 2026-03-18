/*
 * XREFs of KiProcessPendingDisconnect @ 0x1402C3D3C
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402C3218 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiDisconnectSecondaryInterruptInternal @ 0x140423208 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptInternal @ 0x140423FBC (KiDisconnectInterruptInternal.c)
 */

_QWORD *__fastcall KiProcessPendingDisconnect(int a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rbx

  result = (_QWORD *)*(unsigned int *)(a2 + 104);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    result = 0LL;
    if ( !*(_WORD *)(a2 + 102) )
    {
      v6 = *(_QWORD *)(a2 + 144);
      v7 = a1 == 0;
      v9 = *(_QWORD *)(v6 + 8);
      if ( v7 )
        v10 = KiDisconnectInterruptInternal(a2, v9);
      else
        v10 = KiDisconnectSecondaryInterruptInternal(a2, v9);
      *(_DWORD *)(v6 + 16) = v10;
      v11 = (_QWORD *)(a2 + 8);
      result = *(_QWORD **)(a3 + 8);
      if ( *result != a3 )
        __fastfail(3u);
      *v11 = a3;
      v11[1] = result;
      *result = v11;
      *(_QWORD *)(a3 + 8) = v11;
    }
  }
  return result;
}
