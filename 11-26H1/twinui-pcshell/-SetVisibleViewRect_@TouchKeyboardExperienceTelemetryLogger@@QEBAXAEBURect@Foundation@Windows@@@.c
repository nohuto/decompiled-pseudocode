/*
 * XREFs of ?SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEBURect@Foundation@Windows@@@Z @ 0x180470390
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C0804 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect_(
        TouchKeyboardExperienceTelemetryLogger *this,
        const struct Windows::Foundation::Rect *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+58h] [rbp-10h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v6 = this;
  v3 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LODWORD(v6) = *((_DWORD *)a2 + 3);
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 1);
    v4 = *(_DWORD *)a2;
    v5 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_180808A5B,
      0LL,
      0LL,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
}
