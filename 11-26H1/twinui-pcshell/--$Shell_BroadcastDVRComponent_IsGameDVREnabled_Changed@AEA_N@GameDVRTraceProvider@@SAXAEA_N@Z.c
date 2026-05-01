/*
 * XREFs of ??$Shell_BroadcastDVRComponent_IsGameDVREnabled_Changed@AEA_N@GameDVRTraceProvider@@SAXAEA_N@Z @ 0x1800C6134
 * Callers:
 *     ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x1800C5BEC (-BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C79C8 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C7D4C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

const struct _tlgProvider_t *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_IsGameDVREnabled_Changed<bool &>(
        char *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // r9d
  char v4; // [rsp+48h] [rbp+10h] BYREF

  result = GameDVRTraceProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807E7E3D,
                                            0,
                                            v3,
                                            (__int64)&v4);
  }
  return result;
}
