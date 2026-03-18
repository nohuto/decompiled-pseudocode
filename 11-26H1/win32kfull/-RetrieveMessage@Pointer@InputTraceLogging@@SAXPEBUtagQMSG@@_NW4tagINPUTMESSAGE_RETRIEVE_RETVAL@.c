/*
 * XREFs of ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x140140934
 * Callers:
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401407C8 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@5@Z @ 0x140140A54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapperByVal@$03@@U3@U-$_tl.c)
 */

void __fastcall InputTraceLogging::Pointer::RetrieveMessage(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
  int v4; // r8d
  const char *v5; // rax
  int v6; // [rsp+60h] [rbp+27h] BYREF
  int v7; // [rsp+64h] [rbp+2Bh] BYREF
  int v8; // [rsp+68h] [rbp+2Fh] BYREF
  const char *v9; // [rsp+70h] [rbp+37h] BYREF
  __int64 v10; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+80h] [rbp+47h] BYREF
  __int16 v12; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 0x20) != 0 && (qword_1403AA9D8 & 0x20) == qword_1403AA9D8 )
  {
    v6 = a2;
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( --v4 )
      {
        if ( --v4 )
        {
          if ( v4 == 1 )
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
    v9 = v5;
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(unsigned __int16 *)(a1 + 34);
    v10 = *(_QWORD *)(a1 + 40);
    v12 = *(_WORD *)(a1 + 32);
    v11 = *(_QWORD *)(a1 + 144);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1403AA9C0,
      (unsigned int)&unk_1403743AD,
      v4,
      a4,
      (__int64)&v11,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v9,
      (__int64)&v6);
  }
}
