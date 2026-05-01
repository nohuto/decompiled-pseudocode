/*
 * XREFs of ??$LockScreenActive@AEBK@TouchEdgeGestureTelemetry@@SAXAEBK@Z @ 0x1800FBE8C
 * Callers:
 *     wistd::__function::__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800FBE50 (wistd--__function--__func__lambda_8962cfcd3708def1512ebc9bce7f07a8__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FC65C (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800FCC90 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

const struct _tlgProvider_t *__fastcall TouchEdgeGestureTelemetry::LockScreenActive<unsigned long const &>(int *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // r9d
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = TouchGestureLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807E5722,
                                            0,
                                            v3,
                                            (__int64)&v4);
  }
  return result;
}
