/*
 * XREFs of ??$Shell_BroadcastDVRComponent_RegistryChangeNotification_OnEntry@AEA_NAEA_NAEA_NAEA_N@GameDVRTraceProvider@@SAXAEA_N000@Z @ 0x1800C6D68
 * Callers:
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800C6750 (-BroadcastDVRComponent_RegistryChangeNotification_OnEntry@GameDVRTraceProvider@@SAX_N000@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800C79C8 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@333@Z @ 0x1800C79E8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

const struct _tlgProvider_t *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_RegistryChangeNotification_OnEntry<bool &,bool &,bool &,bool &>(
        _BYTE *a1,
        char *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  const struct _tlgProvider_t *result; // rax
  int v9; // r8d
  int v10; // r9d
  char v11; // dl
  char v12; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+41h] [rbp-17h] BYREF
  char v14; // [rsp+42h] [rbp-16h] BYREF
  _BYTE v15[21]; // [rsp+43h] [rbp-15h] BYREF

  result = GameDVRTraceProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v11 = *a2;
    LOBYTE(v10) = *a4;
    LOBYTE(v9) = *a3;
    v15[0] = *a1;
    v14 = v11;
    v12 = v10;
    v13 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807E85A0,
                                            v9,
                                            v10,
                                            (__int64)v15,
                                            (__int64)&v14,
                                            (__int64)&v13,
                                            (__int64)&v12);
  }
  return result;
}
