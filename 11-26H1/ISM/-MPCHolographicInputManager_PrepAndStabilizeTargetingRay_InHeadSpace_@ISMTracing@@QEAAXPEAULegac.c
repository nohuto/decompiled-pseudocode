/*
 * XREFs of ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18000EC40
 * Callers:
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18000D58C (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x18000AFE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r9
  int v5; // [rsp+60h] [rbp-10h] BYREF
  int v6; // [rsp+64h] [rbp-Ch] BYREF
  int v7; // [rsp+68h] [rbp-8h] BYREF
  int v8; // [rsp+6Ch] [rbp-4h] BYREF
  ISMTracing *v9; // [rsp+80h] [rbp+10h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF
  int v11; // [rsp+98h] [rbp+28h] BYREF

  v9 = this;
  v3 = ISMTracing::Provider();
  if ( *(_DWORD *)v3 > 5u && (*((_BYTE *)v3 + 16) & 1) != 0 && (*((_QWORD *)v3 + 3) & 1LL) == *((_QWORD *)v3 + 3) )
  {
    LODWORD(v9) = *((_DWORD *)a2 + 35);
    v10 = *((_DWORD *)a2 + 34);
    v11 = *((_DWORD *)a2 + 33);
    v5 = *((_DWORD *)a2 + 32);
    v6 = *((_DWORD *)a2 + 31);
    v7 = *((_DWORD *)a2 + 30);
    v8 = *((_DWORD *)a2 + 20);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_180213507,
      (__int64)v3,
      v4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
