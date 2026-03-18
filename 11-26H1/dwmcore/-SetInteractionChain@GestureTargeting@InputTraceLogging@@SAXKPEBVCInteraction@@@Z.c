/*
 * XREFs of ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180154080
 * Callers:
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1800A7C6C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x180154284 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180093FF8 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180094B0C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D594C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@534333334@Z @ 0x1801DC030 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetInteractionChain(int a1, const struct CInteraction *a2)
{
  const struct _tlgProvider_t *v4; // rcx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const struct _tlgProvider_t *v8; // rax
  int v9; // r8d
  int v10; // r9d
  BOOL v11; // [rsp+90h] [rbp+7h] BYREF
  BOOL v12; // [rsp+94h] [rbp+Bh] BYREF
  int v13; // [rsp+98h] [rbp+Fh] BYREF
  int v14; // [rsp+9Ch] [rbp+13h] BYREF
  int v15; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD *InputHandle; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+B0h] [rbp+27h] BYREF
  const char *v18; // [rsp+B8h] [rbp+2Fh] BYREF
  const char *v19; // [rsp+C0h] [rbp+37h] BYREF
  const struct CInteraction *v20; // [rsp+C8h] [rbp+3Fh] BYREF
  const struct CInteraction *v21; // [rsp+D0h] [rbp+47h] BYREF
  int v22; // [rsp+100h] [rbp+77h] BYREF
  BOOL v23; // [rsp+108h] [rbp+7Fh] BYREF

  if ( InputTraceLogging::Enabled(2048, 0) )
  {
    if ( a2 )
    {
      do
      {
        v8 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 2048LL) )
        {
          v17 = *((_QWORD *)a2 + 214);
          v23 = InputTraceLogging::InteractionHoverSource(a2);
          v11 = InputTraceLogging::InteractionInputTransparency(a2);
          v12 = InputTraceLogging::InteractionFurtherProcessingForInput(a2);
          v13 = *((_BYTE *)a2 + 200) & 1;
          v22 = *((_DWORD *)a2 + 49);
          InputHandle = CInteraction::GetInputHandle(a2);
          v14 = *((_DWORD *)a2 + 430);
          v18 = InputTraceLogging::InteractionDefaultToString(a2);
          v19 = InputTraceLogging::InteractionSourceTypeToString(a2);
          v20 = a2;
          v21 = a2;
          v15 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v9,
            (unsigned int)&unk_1803B0AAC,
            v9,
            v10,
            (__int64)&v15,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v14,
            (__int64)&InputHandle,
            (__int64)&v22,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v23,
            (__int64)&v17);
        }
        InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a2);
        a2 = (const struct CInteraction *)*((_QWORD *)a2 + 28);
      }
      while ( a2 );
    }
    else
    {
      v4 = InputTraceLogging::Provider();
      if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 2048LL) )
      {
        v22 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v5,
          (unsigned int)&unk_1803B0BA9,
          v6,
          v7,
          (__int64)&v22);
      }
    }
  }
}
