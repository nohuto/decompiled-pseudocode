/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1401C50E8
 * Callers:
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401C4F94 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@5@Z @ 0x140003950 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$_ea_140003950.c)
 */

void __fastcall InputTraceLogging::Pointer::RetrieveMessage(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r8
  const char *v5; // rax
  int v6; // [rsp+64h] [rbp+2Bh] BYREF
  int v7; // [rsp+68h] [rbp+2Fh] BYREF
  const char *v8; // [rsp+70h] [rbp+37h] BYREF
  __int64 v9; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v10; // [rsp+80h] [rbp+47h] BYREF
  __int16 v11; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 0x20) != 0 && (qword_14039BB68 & 0x20) == qword_14039BB68 )
  {
    v4 = (unsigned int)(a3 - 1);
    if ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 )
      {
        v4 = (unsigned int)(v4 - 1);
        if ( (_DWORD)v4 )
        {
          if ( (_DWORD)v4 == 1 )
            v5 = "ContinueScan";
          else
            v5 = "UNKNOWN";
        }
        else
        {
          v5 = "SkipMsg";
        }
      }
      else
      {
        v5 = "NoMsg";
      }
    }
    else
    {
      v5 = "ReturnMsg";
    }
    v8 = v5;
    v6 = *(_DWORD *)(a1 + 24);
    v7 = *(unsigned __int16 *)(a1 + 34);
    v9 = *(_QWORD *)(a1 + 40);
    v11 = *(_WORD *)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 144);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BB50,
      (__int64)&unk_140367461,
      v4,
      a4,
      (__int64)&v10,
      (__int64)&v11,
      (__int64)&v9,
      (__int64)&v7,
      (__int64)&v6,
      &v8);
  }
}
