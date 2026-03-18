/*
 * XREFs of ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1400187C8
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlipManager::IsPresentCanceled(CFlipManager *this, unsigned __int64 a2)
{
  char *v2; // r8
  char *i; // rcx
  char result; // al
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = (char *)this + 192;
  for ( i = (char *)*((_QWORD *)this + 24); ; i = *(char **)i )
  {
    result = 0;
    if ( i == v2 )
      break;
    v5 = (__int64)(i + 16);
    if ( !i )
      v5 = 24LL;
    if ( *(_QWORD *)v5 > a2 )
    {
      v6 = (__int64)(i + 24);
      if ( !i )
        v6 = 32LL;
      if ( *(_QWORD *)v6 <= a2 )
        return 1;
    }
  }
  return result;
}
