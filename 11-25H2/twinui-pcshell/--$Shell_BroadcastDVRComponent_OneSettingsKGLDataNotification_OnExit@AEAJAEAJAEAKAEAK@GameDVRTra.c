/*
 * XREFs of ??$Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@AEAJAEAJAEAKAEAK@GameDVRTraceProvider@@SAXAEAJ0AEAK1@Z @ 0x180224038
 * Callers:
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x180223E9C (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B356C (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18015427C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

int __fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit<long &,long &,unsigned long &,unsigned long &>(
        _DWORD *a1,
        int *a2,
        int *a3,
        unsigned int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // r9
  int v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+44h] [rbp-14h] BYREF
  int v15; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v16[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  v8 = GameDVRTraceProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a3;
    v10 = *a2;
    v11 = *a4;
    v16[0] = *a1;
    v14 = v9;
    v15 = v10;
    v13 = v11;
    LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v8,
                    byte_1807BAF09,
                    0LL,
                    v11,
                    (__int64)v16,
                    (__int64)&v15,
                    (__int64)&v14,
                    (__int64)&v13);
  }
  return (int)v8;
}
