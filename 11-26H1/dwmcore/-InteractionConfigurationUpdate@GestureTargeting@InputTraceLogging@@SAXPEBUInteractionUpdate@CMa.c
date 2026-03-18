/*
 * XREFs of ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800971D8
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180096F40 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554355@Z @ 0x180002800 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180002800.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18009521C (--$InteractionConfigurationUpdate@UDwmPenInteractionConfigurationPrimitive@@@GestureTargeting@In.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x180095C9C (-InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigura.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180095D24 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180095E78 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18009723C (--$InteractionConfigurationUpdate@UDwmTouchInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180097A6C (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180097E80 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  int v4; // eax
  int v5; // ecx
  const char *updated; // rax
  __int64 v7; // r8
  const struct CInteraction *v8; // rdx
  __int64 v9; // rax
  const struct CInteraction *v10; // rdx
  const struct CInteraction *v11; // rdx
  __int64 v12; // rdx
  void *v13; // r8
  unsigned __int8 v14; // al
  const struct CInteraction *v15; // rdx
  const char *v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  BOOL v21; // [rsp+A0h] [rbp-9h] BYREF
  BOOL v22; // [rsp+A4h] [rbp-5h] BYREF
  int v23; // [rsp+A8h] [rbp-1h] BYREF
  int v24; // [rsp+ACh] [rbp+3h] BYREF
  void *InputHandle; // [rsp+B0h] [rbp+7h] BYREF
  const char *v26; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+C0h] [rbp+17h] BYREF
  const char *v28; // [rsp+C8h] [rbp+1Fh] BYREF
  const char *v29; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v31; // [rsp+E0h] [rbp+37h] BYREF
  const char *v32; // [rsp+E8h] [rbp+3Fh] BYREF
  int v33; // [rsp+110h] [rbp+67h] BYREF
  int v34; // [rsp+118h] [rbp+6Fh]
  int v35; // [rsp+120h] [rbp+77h]
  BOOL v36; // [rsp+128h] [rbp+7Fh] BYREF

  switch ( *((_DWORD *)a1 + 11) )
  {
    case 1:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchInteractionConfigurationPrimitive>();
      break;
    case 2:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmTouchpadInteractionConfigurationPrimitive>((__int64)a1);
      break;
    case 3:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmPenInteractionConfigurationPrimitive>((unsigned int *)a1);
      break;
    case 4:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMouseInteractionConfigurationPrimitive>();
      break;
    case 5:
      InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate<DwmMousewheelInteractionConfigurationPrimitive>();
      break;
    default:
      v2 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 2048LL, v3) )
      {
        v4 = *((_DWORD *)a1 + 11);
        v34 = *((_DWORD *)a1 + 12);
        v5 = *((_DWORD *)a1 + 10);
        v35 = v4;
        updated = InputTraceLogging::InteractionConfigurationUpdateTypeToString(v5);
        v8 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
        v26 = updated;
        if ( v8 )
          v9 = *((_QWORD *)v8 + 214);
        else
          v9 = v7;
        v27 = v9;
        v36 = InputTraceLogging::InteractionHoverSource(v8);
        v21 = InputTraceLogging::InteractionInputTransparency(v10);
        v22 = InputTraceLogging::InteractionFurtherProcessingForInput(v11);
        if ( v12 )
          v14 = *(_BYTE *)(v12 + 200) & 1;
        else
          v14 = (unsigned __int8)v13;
        v23 = v14;
        if ( v12 )
        {
          v33 = *(_DWORD *)(v12 + 196);
          InputHandle = CInteraction::GetInputHandle((CInteraction *)v12);
          LODWORD(v13) = *(_DWORD *)(v12 + 1720);
        }
        else
        {
          v33 = (int)v13;
          InputHandle = v13;
        }
        v24 = (int)v13;
        v28 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v12);
        v16 = InputTraceLogging::InteractionSourceTypeToString(v15);
        v17 = *(_DWORD *)a1;
        v29 = v16;
        v30 = v18;
        v31 = v18;
        v32 = InputTraceLogging::MidManipulationUpdateTypeToString(v17);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v20,
          (__int64)&unk_1803AFE71,
          v19,
          v20,
          &v32,
          (__int64)&v31,
          (__int64)&v30,
          &v29,
          &v28,
          (__int64)&v24,
          (__int64)&InputHandle,
          (__int64)&v33,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v36,
          (__int64)&v27,
          &v26);
      }
      break;
  }
}
