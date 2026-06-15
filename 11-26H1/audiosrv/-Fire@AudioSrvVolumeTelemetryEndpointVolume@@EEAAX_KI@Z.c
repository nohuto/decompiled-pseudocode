/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x180074570
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x180074670 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U3@@-$_t.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::Fire(
        AudioSrvVolumeTelemetryEndpointVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+68h] [rbp+27h] BYREF
  int v10; // [rsp+6Ch] [rbp+2Bh] BYREF
  int v11; // [rsp+70h] [rbp+2Fh] BYREF
  int v12; // [rsp+74h] [rbp+33h] BYREF
  __int64 v13; // [rsp+78h] [rbp+37h] BYREF
  __int64 v14; // [rsp+80h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+88h] [rbp+47h] BYREF
  int v16; // [rsp+C0h] [rbp+7Fh] BYREF

  v3 = a3;
  v6 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v6 > 4u
    && (*(_QWORD *)(v6 + 16) & 0x400000000002LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x400000000002LL) == *(_QWORD *)(v6 + 24) )
  {
    v16 = *((_DWORD *)this + 24);
    v15 = *((_QWORD *)this + 11);
    v9 = *((_DWORD *)this + 21);
    v10 = *((_DWORD *)this + 20);
    v11 = *((_DWORD *)this + 19);
    v12 = *((_DWORD *)this + 18);
    v13 = a2;
    v14 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_1801A4E72,
      v7,
      v8,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v13);
  }
}
