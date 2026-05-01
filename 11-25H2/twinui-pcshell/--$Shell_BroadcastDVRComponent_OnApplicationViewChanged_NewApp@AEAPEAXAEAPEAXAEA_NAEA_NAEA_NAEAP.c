/*
 * XREFs of ??$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAX0AEA_N11AEAPEBG@Z @ 0x1800B53C8
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B356C (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x1801DB5F8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWrit.c)
 */

const struct _tlgProvider_t *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp<void * &,void * &,bool &,bool &,bool &,unsigned short const * &>(
        __int64 *a1,
        __int64 *a2,
        _BYTE *a3,
        char *a4,
        _BYTE *a5,
        __int64 *a6)
{
  const struct _tlgProvider_t *result; // rax
  int v11; // r8d
  char v12; // cl
  __int64 v13; // r11
  char v14; // [rsp+50h] [rbp-20h] BYREF
  char v15; // [rsp+51h] [rbp-1Fh] BYREF
  _BYTE v16[6]; // [rsp+52h] [rbp-1Eh] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  __int64 v19; // [rsp+68h] [rbp-8h] BYREF

  result = GameDVRTraceProvider::Provider((__int64)a1);
  if ( *(_DWORD *)result > 5u )
  {
    v12 = *a4;
    v18 = *a2;
    v13 = *a6;
    LOBYTE(v11) = *a5;
    v19 = *a1;
    v15 = v12;
    v16[0] = *a3;
    v17 = v13;
    v14 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807BAC16,
                                            v11,
                                            (_DWORD)a5,
                                            (__int64)&v19,
                                            (__int64)&v18,
                                            (__int64)v16,
                                            (__int64)&v15,
                                            (__int64)&v14,
                                            (__int64)&v17);
  }
  return result;
}
