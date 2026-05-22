/*
 * XREFs of ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180022320
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180020F50 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000AE18 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputETW::ButtonProcessor::ButtonEvent(int a1, char a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  if ( InputETW::IsEnabled() )
  {
    v4 = InputETW::Provider();
    if ( *(_DWORD *)v4 > 5u && (*((_BYTE *)v4 + 16) & 1) != 0 && (*((_QWORD *)v4 + 3) & 1LL) == *((_QWORD *)v4 + 3) )
    {
      v7 = a2;
      v8 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v4,
        (__int64)&unk_18022A101,
        v5,
        v6,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
