/*
 * XREFs of ?DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014E27C
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD10 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@444444444@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTempla.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

char __fastcall InputETW::InputGesture::DragEnded(
        const WCHAR *a1,
        unsigned int a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v9; // rsi
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
  const WCHAR *v27; // [rsp+D8h] [rbp+27h] BYREF

  v9 = a2;
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
        v17 = a8;
        v18 = a7;
        v26 = v9;
        v27 = a1;
        v20 = a5[1];
        v21 = *a5;
        v22 = a4[1];
        v23 = *a4;
        v24 = a3[1];
        v25 = *a3;
        LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v15,
                        (__int64)&unk_1802239F8,
                        v13,
                        v14,
                        &v27,
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
