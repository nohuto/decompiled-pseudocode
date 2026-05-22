/*
 * XREFs of ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180157290
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333333333@Z @ 0x180007B4C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

char __fastcall InputETW::Edgy::DropTargetChanged(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v17; // [rsp+88h] [rbp-29h] BYREF
  __int64 v18; // [rsp+90h] [rbp-21h] BYREF
  __int64 v19; // [rsp+98h] [rbp-19h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+D8h] [rbp+27h] BYREF

  v9 = a1;
  LOBYTE(v12) = InputETW::IsEnabled();
  if ( (_BYTE)v12 )
  {
    v12 = InputETW::Provider();
    if ( *(_DWORD *)v12 > 5u )
    {
      LOBYTE(v12) = tlgKeywordOn((__int64)v12, 1LL);
      if ( (_BYTE)v12 )
      {
        v19 = a6;
        v20 = a5;
        v21 = a4[1];
        v22 = *a4;
        v23 = a3[1];
        v24 = *a3;
        v25 = a2[1];
        v26 = *a2;
        v17 = a8;
        v18 = a7;
        v27 = v9;
        LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v15,
                        (__int64)&unk_18022477A,
                        v13,
                        v14,
                        (__int64)&v27,
                        (__int64)&v26,
                        (__int64)&v25,
                        (__int64)&v24,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17);
      }
    }
  }
  return (char)v12;
}
