/*
 * XREFs of ??$Shell_BroadcastDVRComponent_SetMicrophoneCaptureState@AEAPEAXAEAEAEAEAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAXAEAE1AEAPEBG@Z @ 0x18031312C
 * Callers:
 *     ?BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803156C0 (-BroadcastDVRComponent_SetMicrophoneCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180002314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B356C (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_SetMicrophoneCaptureState<void * &,unsigned char &,unsigned char &,unsigned short const * &>(
        __int64 *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v9; // r8
  char v10; // dl
  __int64 v11; // r9
  char v12; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v13[7]; // [rsp+41h] [rbp-27h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  result = GameDVRTraceProvider::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v10 = *a2;
    v11 = *a4;
    LOBYTE(v9) = *a3;
    v15 = *a1;
    v13[0] = v10;
    v14 = v11;
    v12 = v9;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
                                            (__int64)result,
                                            (__int64)&unk_1807BB42C,
                                            v9,
                                            v11,
                                            (__int64)&v15,
                                            (__int64)v13,
                                            (__int64)&v12,
                                            &v14);
  }
  return result;
}
