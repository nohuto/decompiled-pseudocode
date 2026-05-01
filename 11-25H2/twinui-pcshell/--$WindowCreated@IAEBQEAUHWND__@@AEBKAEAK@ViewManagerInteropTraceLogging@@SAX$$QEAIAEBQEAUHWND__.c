/*
 * XREFs of ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x1801B63DC
 * Callers:
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x18042D7EC (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180439E08 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180070E64 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1801B6520 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

const struct _tlgProvider_t *__fastcall ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v9; // rdx
  int v10; // r9d
  int v11; // r8d
  int v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  int v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  result = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a2;
    v10 = *a4;
    v11 = *a3;
    v14 = *a1;
    v15 = v9;
    v12 = v10;
    v13 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807CDD4A,
                                            v11,
                                            v10,
                                            (__int64)&v14,
                                            (__int64)&v15,
                                            (__int64)&v13,
                                            (__int64)&v12);
  }
  return result;
}
