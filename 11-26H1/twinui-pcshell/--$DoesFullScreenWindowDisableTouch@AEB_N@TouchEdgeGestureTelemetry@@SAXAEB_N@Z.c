/*
 * XREFs of ??$DoesFullScreenWindowDisableTouch@AEB_N@TouchEdgeGestureTelemetry@@SAXAEB_N@Z @ 0x18058C890
 * Callers:
 *     _lambda_7f022a5844bf48eefcfbcbe645f4a926_::operator() @ 0x18058D5E0 (_lambda_7f022a5844bf48eefcfbcbe645f4a926_--operator().c)
 * Callees:
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B5DC4 (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C7D4C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

int __fastcall TouchEdgeGestureTelemetry::DoesFullScreenWindowDisableTouch<bool const &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = TouchGestureLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                    (__int64)v2,
                    byte_180820BA2,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
