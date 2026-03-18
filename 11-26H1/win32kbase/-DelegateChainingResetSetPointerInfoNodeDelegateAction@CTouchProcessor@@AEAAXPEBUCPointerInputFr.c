/*
 * XREFs of ?DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KI@Z @ 0x1400656E0
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1400654C0 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x140066F58 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x14006BE60 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::DelegateChainingResetSetPointerInfoNodeDelegateAction(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
  CTouchProcessor *v7; // rcx
  struct CPointerInfoNode *v8; // rax
  CTouchProcessor *v9; // rcx
  struct CPointerInfoNode *v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15311LL);
  v8 = CTouchProcessor::LookupNode(v7, a2, a3);
  v10 = v8;
  switch ( a4 )
  {
    case 585:
      v11 = *(_DWORD *)v8;
      if ( (v11 & 0x1000000) == 0 || (v11 & 0x2000000) != 0 || (v11 & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15322LL);
      *(_DWORD *)v10 &= ~0x4000000u;
      break;
    case 586:
      v12 = *(_DWORD *)v8;
      if ( (v12 & 0x10000000) == 0 || (v12 & 0x20000000) != 0 || (v12 & 0x40000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15329LL);
      *(_DWORD *)v10 &= ~0x40000000u;
      break;
    case 593:
      v13 = *((_DWORD *)v8 + 1);
      if ( (v13 & 1) == 0 || (v13 & 2) != 0 || (v13 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15336LL);
      *((_DWORD *)v10 + 1) &= ~4u;
      break;
    case 594:
      v14 = *((_DWORD *)v8 + 1);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 || (v14 & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15343LL);
      *((_DWORD *)v10 + 1) &= ~0x40u;
      break;
    default:
      *(_DWORD *)v8 &= ~0x400000u;
      break;
  }
  CTouchProcessor::ReevaluateQFrameHasDelegation(v9, a2, *((_DWORD *)v10 + 2));
}
