/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x140067D60
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x140069420 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x140066F58 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x14006BE60 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  CTouchProcessor *v9; // rcx
  struct CPointerInfoNode *v10; // rax
  CTouchProcessor *v11; // rcx
  struct CPointerInfoNode *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  int v25; // eax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15166LL);
  v10 = CTouchProcessor::LookupNode(v9, a2, a3);
  v12 = v10;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        v14 = *(_DWORD *)v10;
        if ( (v14 & 0x1000000) == 0 || (v14 & 0x2000000) != 0 || (v14 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15179LL);
        *(_DWORD *)v12 |= 0x2000000u;
        break;
      case 586:
        *(_DWORD *)v10 |= 0x20000000u;
        break;
      case 593:
        v19 = *((_DWORD *)v10 + 1);
        if ( (v19 & 1) == 0 || (v19 & 2) != 0 || (v19 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15193LL);
        *((_DWORD *)v12 + 1) |= 2u;
        break;
      case 594:
        v16 = *((_DWORD *)v10 + 1);
        if ( (v16 & 0x10) == 0 || (v16 & 0x20) != 0 || (v16 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15200LL);
        *((_DWORD *)v12 + 1) |= 0x20u;
        break;
      default:
        v13 = *(_DWORD *)v10;
        if ( (v13 & 0x100000) == 0 || (v13 & 0x200000) != 0 || (v13 & 0x400000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15207LL);
        *(_DWORD *)v12 |= 0x200000u;
        break;
    }
    goto LABEL_12;
  }
  if ( !a6 )
  {
    switch ( a4 )
    {
      case 585:
        v17 = *(_DWORD *)v10;
        if ( (v17 & 0x1000000) == 0 || (v17 & 0x2000000) != 0 || (v17 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15260LL);
        *(_DWORD *)v12 |= 0x4000000u;
        break;
      case 586:
        v15 = *(_DWORD *)v10;
        if ( (v15 & 0x10000000) == 0 || (v15 & 0x20000000) != 0 || (v15 & 0x40000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15267LL);
        *(_DWORD *)v12 |= 0x40000000u;
        break;
      case 593:
        v25 = *((_DWORD *)v10 + 1);
        if ( (v25 & 1) == 0 || (v25 & 2) != 0 || (v25 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15274LL);
        *((_DWORD *)v12 + 1) |= 4u;
        break;
      case 594:
        v18 = *((_DWORD *)v10 + 1);
        if ( (v18 & 0x10) == 0 || (v18 & 0x20) != 0 || (v18 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15281LL);
        *((_DWORD *)v12 + 1) |= 0x40u;
        break;
      default:
        *(_DWORD *)v10 |= 0x400000u;
        break;
    }
    goto LABEL_12;
  }
  switch ( a4 )
  {
    case 585:
      v20 = *(_DWORD *)v10;
      v21 = 0x1000000;
      if ( (v20 & 0x800000) != 0 && (v20 & 0x1000000) == 0 )
        goto LABEL_67;
      v22 = 15216LL;
      goto LABEL_66;
    case 586:
      v23 = *(_DWORD *)v10;
      v21 = 0x10000000;
      if ( (v23 & 0x8000000) != 0 && (v23 & 0x10000000) == 0 )
        goto LABEL_67;
      v22 = 15222LL;
      goto LABEL_66;
    case 593:
      if ( *(int *)v10 >= 0 || (*((_DWORD *)v10 + 1) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15228LL);
      *((_DWORD *)v12 + 1) |= 1u;
      break;
    case 594:
      v24 = *((_DWORD *)v10 + 1);
      if ( (v24 & 8) == 0 || (v24 & 0x10) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15233LL);
      *((_DWORD *)v12 + 1) |= 0x10u;
      break;
    default:
      v21 = 0x100000;
      if ( (*(_DWORD *)v10 & 0x100000) == 0 )
      {
LABEL_67:
        *(_DWORD *)v12 |= v21;
        break;
      }
      v22 = 15238LL;
LABEL_66:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v22);
      goto LABEL_67;
  }
LABEL_12:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v11, a2, *((_DWORD *)v12 + 2));
}
