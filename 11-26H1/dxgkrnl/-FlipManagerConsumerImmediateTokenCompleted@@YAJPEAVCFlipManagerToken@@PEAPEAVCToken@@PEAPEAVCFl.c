/*
 * XREFs of ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018990
 * Callers:
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x140019350 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x140066F64 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?ConsumerImmediateTokenCompleted@FlipManagerObject@@QEAAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x1400189B4 (-ConsumerImmediateTokenCompleted@FlipManagerObject@@QEAAJPEAVCFlipManagerToken@@PEAPEAVCToken@@P.c)
 */

__int64 __fastcall FlipManagerConsumerImmediateTokenCompleted(
        FlipManagerObject **a1,
        struct CToken **a2,
        struct CFlipManagerSignal **a3)
{
  return FlipManagerObject::ConsumerImmediateTokenCompleted(a1[11], (struct CFlipManagerToken *)a1, a2, a3);
}
