/*
 * XREFs of ?DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KI@Z @ 0x1401FD828
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1401FD640 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140205590 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x140208E28 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15387);
  v8 = CTouchProcessor::LookupNode(v7, a2, a3);
  v10 = v8;
  switch ( a4 )
  {
    case 585:
      v11 = *(_DWORD *)v8;
      if ( (v11 & 0x1000000) == 0 || (v11 & 0x2000000) != 0 || (v11 & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15398);
      *(_DWORD *)v10 &= ~0x4000000u;
      break;
    case 586:
      v12 = *(_DWORD *)v8;
      if ( (v12 & 0x10000000) == 0 || (v12 & 0x20000000) != 0 || (v12 & 0x40000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15405);
      *(_DWORD *)v10 &= ~0x40000000u;
      break;
    case 593:
      v13 = *((_DWORD *)v8 + 1);
      if ( (v13 & 1) == 0 || (v13 & 2) != 0 || (v13 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15412);
      *((_DWORD *)v10 + 1) &= ~4u;
      break;
    case 594:
      v14 = *((_DWORD *)v8 + 1);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 || (v14 & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15419);
      *((_DWORD *)v10 + 1) &= ~0x40u;
      break;
    default:
      *(_DWORD *)v8 &= ~0x400000u;
      break;
  }
  CTouchProcessor::ReevaluateQFrameHasDelegation(v9, a2, *((_DWORD *)v10 + 2));
}
