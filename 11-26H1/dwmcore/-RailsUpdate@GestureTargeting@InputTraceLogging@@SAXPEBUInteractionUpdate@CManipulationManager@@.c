/*
 * XREFs of ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180097868
 * Callers:
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x180096F40 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180095D24 (-MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U2@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@4555554AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180098848 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U-$_tlgWrapperByVal@$03_ea_180098848.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::RailsUpdate(
        const struct CManipulationManager::InteractionUpdate *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // ecx
  const char *v4; // rax
  const struct CInteraction *v5; // rdx
  __int64 v6; // rax
  const struct CInteraction *v7; // rdx
  const struct CInteraction *v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // r8
  unsigned __int8 v11; // al
  const struct CInteraction *v12; // rdx
  const char *v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r9d
  BOOL v18; // [rsp+A0h] [rbp+7h] BYREF
  BOOL v19; // [rsp+A4h] [rbp+Bh] BYREF
  int v20; // [rsp+A8h] [rbp+Fh] BYREF
  int v21; // [rsp+ACh] [rbp+13h] BYREF
  _QWORD *InputHandle; // [rsp+B0h] [rbp+17h] BYREF
  const char *v23; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+C0h] [rbp+27h] BYREF
  const char *v25; // [rsp+C8h] [rbp+2Fh] BYREF
  const char *v26; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+3Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+47h] BYREF
  const char *updated; // [rsp+E8h] [rbp+4Fh] BYREF
  bool v30; // [rsp+108h] [rbp+6Fh] BYREF
  int v31; // [rsp+110h] [rbp+77h] BYREF
  BOOL v32; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x800LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = *((_DWORD *)a1 + 11);
    if ( v3 )
    {
      if ( v3 == 1 )
        v4 = "Y";
      else
        v4 = "UNKNOWN";
    }
    else
    {
      v4 = "X";
    }
    v5 = (const struct CInteraction *)*((_QWORD *)a1 + 2);
    v23 = v4;
    v30 = (*((_BYTE *)a1 + 64) & 2) != 0;
    if ( v5 )
      v6 = *((_QWORD *)v5 + 214);
    else
      v6 = 0LL;
    v24 = v6;
    v32 = InputTraceLogging::InteractionHoverSource(v5);
    v18 = InputTraceLogging::InteractionInputTransparency(v7);
    v19 = InputTraceLogging::InteractionFurtherProcessingForInput(v8);
    if ( v9 )
      v11 = *(_BYTE *)(v9 + 200) & 1;
    else
      v11 = (unsigned __int8)v10;
    v20 = v11;
    if ( v9 )
    {
      v31 = *(_DWORD *)(v9 + 196);
      InputHandle = CInteraction::GetInputHandle((CInteraction *)v9);
      LODWORD(v10) = *(_DWORD *)(v9 + 1720);
    }
    else
    {
      v31 = (int)v10;
      InputHandle = v10;
    }
    v21 = (int)v10;
    v25 = InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v9);
    v13 = InputTraceLogging::InteractionSourceTypeToString(v12);
    v14 = *(_DWORD *)a1;
    v26 = v13;
    v27 = v15;
    v28 = v15;
    updated = InputTraceLogging::MidManipulationUpdateTypeToString(v14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<char>>(
      v17,
      (unsigned int)&unk_1803AFAA8,
      v16,
      v17,
      (__int64)&updated,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v21,
      (__int64)&InputHandle,
      (__int64)&v31,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v32,
      (__int64)&v24,
      (__int64)&v30,
      (__int64)&v23);
  }
}
