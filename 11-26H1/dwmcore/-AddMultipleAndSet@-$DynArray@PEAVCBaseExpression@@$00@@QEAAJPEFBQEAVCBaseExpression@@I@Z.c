/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18016DA20
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18010E310 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x18016D8C0 (-FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x18027C9E0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r9d
  __int64 result; // rax
  unsigned int v5; // ebx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
    return 2147942934LL;
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    result = DynArrayImpl<1>::AddMultipleAndSet(a1, 8u, a1, a2);
    v5 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0xC2u, 0LL);
      return v5;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = *a2;
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v3;
  }
  return result;
}
