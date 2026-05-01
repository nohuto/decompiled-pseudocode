/*
 * XREFs of ??$FireInputPaneHidingEvent@AEAIAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N@Z @ 0x18018FB44
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180293388 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018FBC8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWrite.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardExperienceTelemetryLogger::FireInputPaneHidingEvent<unsigned int &,bool &>(
        int *a1,
        char *a2)
{
  const struct _tlgProvider_t *result; // rax
  int v5; // r9d
  __int64 v6; // r8
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  char v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  result = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)result > 5u && (*((_BYTE *)result + 16) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)result + 3) & 0x10LL;
    if ( v6 == *((_QWORD *)result + 3) )
    {
      v8 = *a2;
      v9 = *a1;
      v7[0] = 0x1000000LL;
      return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                                              (_DWORD)result,
                                              (unsigned int)&unk_1807D14EC,
                                              v6,
                                              v5,
                                              (__int64)&v9,
                                              (__int64)&v8,
                                              (__int64)v7);
    }
  }
  return result;
}
