/*
 * XREFs of ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180096FE4
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180096F40 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U3@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554554AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001BD8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180095D24 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::UpdateCapture(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  const struct CInteraction *v4; // rdx
  const struct CInteraction *v5; // rdx
  CInteraction *v6; // rdx
  const struct CInteraction *v7; // rdx
  const char *v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // [rsp+E0h] [rbp-50h] BYREF
  const char *v14; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v16; // [rsp+F8h] [rbp-38h] BYREF
  const char *updated; // [rsp+100h] [rbp-30h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 2) + 72LL) + 224LL))(
    *((_QWORD *)a1 + 2) + 72LL,
    *((unsigned int *)a1 + 6),
    0LL);
  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && (unsigned __int8)tlgKeywordOn(v2, 2048LL, v3) )
  {
    InputTraceLogging::InteractionHoverSource(*((const struct CInteraction **)a1 + 2));
    InputTraceLogging::InteractionInputTransparency(v4);
    InputTraceLogging::InteractionFurtherProcessingForInput(v5);
    if ( v6 )
      CInteraction::GetInputHandle(v6);
    v13 = InputTraceLogging::InteractionDefaultToString(v6);
    v8 = InputTraceLogging::InteractionSourceTypeToString(v7);
    v9 = *(_DWORD *)a1;
    v14 = v8;
    v15 = v10;
    v16 = v10;
    updated = InputTraceLogging::MidManipulationUpdateTypeToString(v9);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v12,
      (__int64)&unk_1803AFBB4,
      v11,
      v12,
      &updated,
      (__int64)&v16,
      (__int64)&v15,
      &v14,
      &v13);
  }
}
