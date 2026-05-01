/*
 * XREFs of ??$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEBGAEA_N0@Z @ 0x1804772BC
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18047C054 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800078BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByV.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short const *,bool &,unsigned int>(
        int *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  int v9; // [rsp+58h] [rbp-20h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-10h] BYREF

  v4 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v11 = *a2;
      v9 = *a1;
      v10 = 0x1000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v7,
                     (__int64)&unk_18080C99F,
                     v5,
                     v6,
                     (__int64)&v9,
                     &v11);
    }
  }
  return (char)v4;
}
