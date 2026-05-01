/*
 * XREFs of ??$RdpShellExtensionsProcessed@AEAIAEAIAEAI@RdpShellExtensionHostTelemetry@@SAXAEAI00@Z @ 0x18064D0EC
 * Callers:
 *     ?subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x18064F060 (-subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180012E74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18064E99C (-Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall RdpShellExtensionHostTelemetry::RdpShellExtensionsProcessed<unsigned int &,unsigned int &,unsigned int &>(
        int *a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = RdpShellExtensionHostTelemetry::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v11 = *a2;
      v12 = *a1;
      v14 = v9;
      v13 = 0x2000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v8,
                     byte_1807EFFC1,
                     v7,
                     v8,
                     (__int64)&v12,
                     (__int64)&v11,
                     (__int64)&v14,
                     (__int64)&v13);
    }
  }
  return (char)v6;
}
