/*
 * XREFs of ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x140123BAC
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x140123B08 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140006558 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InkFeedbackServer::RunForAllProviders(
        _QWORD **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int (__fastcall *a5)(_QWORD *, _QWORD, __int64, _QWORD))
{
  _QWORD *v5; // rdi
  unsigned int v6; // ebp
  int v11; // [rsp+40h] [rbp-28h] BYREF
  const char *v12; // [rsp+48h] [rbp-20h] BYREF

  v5 = *a1;
  v6 = a4;
  while ( v5 != a1 )
  {
    if ( a5(v5 - 1, a2, a3, v6) >= 0 )
      return 0LL;
    v5 = (_QWORD *)*v5;
  }
  if ( a2 == 4 || a2 == 2 )
    return 0LL;
  if ( (unsigned int)dword_14039BC68 > 2 )
  {
    v12 = "Command not serviced";
    v11 = -1073741823;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
      (__int64)&v11,
      (__int64)&unk_14036B692,
      a3,
      a4,
      (__int64)&v11,
      &v12);
  }
  return 3221225473LL;
}
