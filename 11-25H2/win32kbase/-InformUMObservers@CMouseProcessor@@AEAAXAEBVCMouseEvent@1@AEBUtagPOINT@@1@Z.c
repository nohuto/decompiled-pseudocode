/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x14003864C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     ?GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1400B9430 (-GetPublicExtraInfo@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x1400B9934 (-IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1401A11B8 (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x14022079C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x140220928 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1402209B0 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     memset @ 0x140243000 (memset.c)
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
      goto LABEL_10;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3795LL);
LABEL_10:
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
    goto LABEL_10;
  }
}
