/*
 * XREFs of ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8E70
 * Callers:
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1400027D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline @ 0x1401A8F5C (Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall InputTraceLogging::Win32k::UIPIFailure(
        const struct tagUIPI_INFO *a1,
        const struct tagUIPI_INFO *a2,
        unsigned __int8 a3)
{
  int v3; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+60h] [rbp-20h] BYREF
  int v9; // [rsp+64h] [rbp-1Ch] BYREF
  int v10; // [rsp+68h] [rbp-18h] BYREF
  int v11; // [rsp+6Ch] [rbp-14h] BYREF
  int v12; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v13[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v3 = a3;
  if ( (unsigned int)Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)dword_14029EE20 > 4
    && tlgKeywordOn((__int64)&dword_14029EE20, 2LL) )
  {
    v8 = *((_DWORD *)a2 + 2);
    v9 = *((_DWORD *)a2 + 1);
    v10 = *(_DWORD *)a2;
    v11 = *((_DWORD *)a1 + 2);
    v12 = *((_DWORD *)a1 + 1);
    v13[0] = *(_DWORD *)a1;
    v14 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_140277DC9,
      v6,
      v7,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v14);
  }
}
