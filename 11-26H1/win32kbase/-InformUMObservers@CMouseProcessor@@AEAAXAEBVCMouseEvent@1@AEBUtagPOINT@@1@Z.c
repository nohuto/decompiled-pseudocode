/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x140089CEC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14008984C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400898B0 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x140089E24 (-IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x14008A044 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1400CE34C (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1401C4A0C (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 PublicExtraInfo; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned int WheelMessage; // eax
  _QWORD v15[10]; // [rsp+30h] [rbp-50h] BYREF

  if ( CBaseProcessor::IsUMObserverRegistered(this) )
  {
    memset(v15, 0, 0x48uLL);
    v7 = *((_QWORD *)a2 + 1);
    LODWORD(v15[0]) = 72;
    v8 = *(_QWORD *)(v7 + 96);
    v15[3] = *a3;
    v9 = (__int64)*a4;
    v15[1] = v8;
    *(_QWORD *)((char *)&v15[7] + 4) = v9;
    PublicExtraInfo = CMouseProcessor::CMouseEvent::GetPublicExtraInfo(a2);
    v11 = *((_DWORD *)a2 + 4);
    v15[5] = PublicExtraInfo;
    LODWORD(v15[6]) = 4;
    v12 = v11 - 1;
    if ( !v12 )
    {
      LODWORD(v15[7]) = 0;
      LODWORD(v15[4]) = 512;
      goto LABEL_8;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3805LL);
LABEL_8:
        LODWORD(v15[2]) = v15[2] & 0xFFFFFFFE | (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) >> 7) & 1;
        InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v15);
        SendMessageTo(11LL, v15, 72LL);
        return;
      }
      LODWORD(v15[7]) = *((unsigned __int16 *)a2 + 16);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    }
    else
    {
      LODWORD(v15[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    }
    LODWORD(v15[4]) = WheelMessage;
    goto LABEL_8;
  }
}
