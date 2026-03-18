/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x140066F58
 * Callers:
 *     ?DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KI@Z @ 0x1400656E0 (-DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFr.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x140067D60 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x14006A53C (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v7; // rdi
  unsigned int v8; // r10d
  unsigned int i; // r9d
  CPointerInfoNode *v10; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)a2 + 31);
  v4 = 0;
  v7 = 160LL * a3;
  if ( *(_DWORD *)(v7 + v3) != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15368LL);
  v8 = *((_DWORD *)a2 + 12);
  for ( i = 0; i < v8; ++i )
  {
    v10 = (CPointerInfoNode *)(*((_QWORD *)a2 + 30) + 480LL * i);
    if ( *((_DWORD *)v10 + 2) == a3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v10) )
    {
      v4 = 1;
      break;
    }
  }
  result = v4;
  *(_DWORD *)(v7 + v3 + 140) = *(_DWORD *)(v7 + v3 + 140) & 0xFFFFFFF7 ^ (8 * v4);
  return result;
}
