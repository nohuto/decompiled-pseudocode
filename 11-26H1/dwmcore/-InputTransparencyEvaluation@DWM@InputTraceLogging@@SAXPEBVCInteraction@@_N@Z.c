/*
 * XREFs of ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180026998
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C64 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095C80 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095CC8 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x180095E0C (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x180095E5C (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@D@@534333334@Z @ 0x1801DC030 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@D@@U3@U1@U2@U1@U1@U1.c)
 */

void __fastcall InputTraceLogging::DWM::InputTransparencyEvaluation(const struct CInteraction *a1, unsigned __int8 a2)
{
  int v2; // edi
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rax
  void *v6; // rdx
  unsigned __int8 v7; // al
  int v8; // r8d
  int v9; // r9d
  void *InputHandle; // rax
  BOOL v11; // [rsp+90h] [rbp+7h] BYREF
  BOOL v12; // [rsp+94h] [rbp+Bh] BYREF
  int v13; // [rsp+98h] [rbp+Fh] BYREF
  int v14; // [rsp+9Ch] [rbp+13h] BYREF
  int v15; // [rsp+A0h] [rbp+17h] BYREF
  void *v16; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+B0h] [rbp+27h] BYREF
  const char *v18; // [rsp+B8h] [rbp+2Fh] BYREF
  const char *v19; // [rsp+C0h] [rbp+37h] BYREF
  const struct CInteraction *v20; // [rsp+C8h] [rbp+3Fh] BYREF
  const struct CInteraction *v21; // [rsp+D0h] [rbp+47h] BYREF
  int v22; // [rsp+100h] [rbp+77h] BYREF
  BOOL v23; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = a2;
  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && (*((_BYTE *)v4 + 16) & 2) != 0 && (*((_QWORD *)v4 + 3) & 2LL) == *((_QWORD *)v4 + 3) )
  {
    if ( a1 )
      v5 = *((_QWORD *)a1 + 214);
    else
      v5 = 0LL;
    v17 = v5;
    v23 = InputTraceLogging::InteractionHoverSource(a1);
    v11 = InputTraceLogging::InteractionInputTransparency(a1);
    v12 = InputTraceLogging::InteractionFurtherProcessingForInput(a1);
    if ( a1 )
      v7 = *((_BYTE *)a1 + 200) & 1;
    else
      v7 = (unsigned __int8)v6;
    v13 = v7;
    if ( a1 )
    {
      v22 = *((_DWORD *)a1 + 49);
      InputHandle = CInteraction::GetInputHandle(a1);
      LODWORD(v6) = *((_DWORD *)a1 + 430);
      v16 = InputHandle;
    }
    else
    {
      v22 = (int)v6;
      v16 = v6;
    }
    v14 = (int)v6;
    v18 = InputTraceLogging::InteractionDefaultToString(a1);
    v19 = InputTraceLogging::InteractionSourceTypeToString(a1);
    v20 = a1;
    v21 = a1;
    v15 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_1803B2784,
      v8,
      v9,
      (__int64)&v15,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v22,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v23,
      (__int64)&v17);
  }
  InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(a1);
}
