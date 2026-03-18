/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CRotationMgr@@UEAAXXZ @ 0x140273480
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z @ 0x140272BA8 (-QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::xxxUserReinitializeAutoRotation(CRotationMgr *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  bool v4; // zf
  __int64 v5; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  *((_DWORD *)this + 2) = QueryAutoRotationRegistrySetting(
                            L"Enable",
                            1u,
                            L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( (unsigned int)dword_14039BBC0 > 5 && tlgKeywordOn((__int64)&dword_14039BBC0, 0x400000000001LL) )
  {
    v6 = 1;
    v7 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBC0,
      byte_140366011,
      v2,
      v3,
      (__int64)&v7,
      (__int64)&v6);
  }
  *((_DWORD *)this + 3) = QueryAutoRotationRegistrySetting(
                            L"SlateEnable",
                            1u,
                            L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  v4 = (unsigned int)QueryAutoRotationRegistrySetting(
                       L"SensorPresent",
                       0,
                       L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") == 1;
  v5 = *(_QWORD *)this;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = v4;
  (*(void (__fastcall **)(CRotationMgr *))(v5 + 16))(this);
}
