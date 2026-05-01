/*
 * XREFs of ?SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x1805A18FC
 * Callers:
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x18059EC50 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18059ED60 (-GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180099B30 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall CSnapComponentTelemetry::GetAndDeleteSnapId::SnapRect(
        CSnapComponentTelemetry::GetAndDeleteSnapId *this,
        const struct Windows::Foundation::Rect *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  int v6; // edx
  const GUID *v7; // r8
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = WindowManagementLogging::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *(_DWORD *)a2;
    v9 = *((_DWORD *)a2 + 3);
    v10 = *((_DWORD *)a2 + 2);
    v11 = *((_DWORD *)a2 + 1);
    v7 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    v8[0] = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_180822E09,
      v7,
      v5,
      (__int64)v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
