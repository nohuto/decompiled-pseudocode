/*
 * XREFs of ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180096F40
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555544@Z @ 0x180001DF8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180001DF8.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180095980 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180095D24 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180096FE4 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800971D8 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180097868 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::InteractionUpdate(const struct CInteraction **a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct CInteraction *v3; // rdx
  const struct CInteraction *v4; // rdx
  CInteraction *v5; // rdx
  const struct CInteraction *v6; // rdx
  const char *v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  const char *v12; // [rsp+B0h] [rbp+17h] BYREF
  const char *v13; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+2Fh] BYREF
  const char *updated; // [rsp+D0h] [rbp+37h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 5:
    case 6:
      InputTraceLogging::GestureTargeting::UpdateCapture((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    case 7:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    case 8:
      InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    case 9:
      InputTraceLogging::GestureTargeting::RailsUpdate((const struct CManipulationManager::InteractionUpdate *)a1);
      break;
    default:
      v2 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v2 > 4u
        && (*((_DWORD *)v2 + 4) & 0x800LL) != 0
        && (*((_QWORD *)v2 + 3) & 0x800LL) == *((_QWORD *)v2 + 3) )
      {
        InputTraceLogging::InteractionHoverSource(a1[2]);
        InputTraceLogging::InteractionInputTransparency(v3);
        InputTraceLogging::InteractionFurtherProcessingForInput(v4);
        if ( v5 )
          CInteraction::GetInputHandle(v5);
        v12 = InputTraceLogging::InteractionDefaultToString(v5);
        v7 = InputTraceLogging::InteractionSourceTypeToString(v6);
        v8 = *(_DWORD *)a1;
        v13 = v7;
        v14 = v9;
        v15 = v9;
        updated = InputTraceLogging::MidManipulationUpdateTypeToString(v8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v11,
          (__int64)&unk_1803B02AC,
          v10,
          v11,
          &updated,
          (__int64)&v15,
          (__int64)&v14,
          &v13,
          &v12);
      }
      break;
  }
}
