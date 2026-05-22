/*
 * XREFs of ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180156ED4
 * Callers:
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180156BD0 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333@Z @ 0x180007A50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

char __fastcall InputETW::Edgy::DragEnded(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v8; // r14
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v16; // [rsp+78h] [rbp-11h] BYREF
  __int64 v17; // [rsp+80h] [rbp-9h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h] BYREF
  __int64 v19; // [rsp+90h] [rbp+7h] BYREF
  __int64 v20; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+2Fh] BYREF
  __int64 v25; // [rsp+C0h] [rbp+37h] BYREF

  v8 = a1;
  LOBYTE(v11) = InputETW::IsEnabled();
  if ( (_BYTE)v11 )
  {
    v11 = InputETW::Provider();
    if ( *(_DWORD *)v11 > 5u )
    {
      LOBYTE(v11) = tlgKeywordOn((__int64)v11, 1LL);
      if ( (_BYTE)v11 )
      {
        v18 = a5;
        v19 = a4[1];
        v20 = *a4;
        v21 = a3[1];
        v22 = *a3;
        v23 = a2[1];
        v24 = *a2;
        v16 = a7;
        v17 = a6;
        v25 = v8;
        LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v14,
                        (__int64)&unk_1802246D8,
                        v12,
                        v13,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&v16);
      }
    }
  }
  return (char)v11;
}
