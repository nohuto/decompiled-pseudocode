/*
 * XREFs of ?xxxSetAutoRotationStateInternal@CRotationMgr@@UEAAJH@Z @ 0x1402732DC
 * Callers:
 *     ?xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z @ 0x140273220 (-xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x140272DDC (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRotationMgr::xxxSetAutoRotationStateInternal(CRotationMgr *this, int a2)
{
  int updated; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  updated = UpdateAutoRotationRegistrySetting(
              a2,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 2) = a2;
    if ( (unsigned int)dword_14039BBC0 > 5 && tlgKeywordOn((__int64)&dword_14039BBC0, 0x400000000001LL) )
    {
      v8 = 0;
      v9 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BBC0,
        byte_140366011,
        v5,
        v6,
        (__int64)&v9,
        (__int64)&v8);
    }
    if ( !*((_DWORD *)this + 2) )
      (*(void (__fastcall **)(CRotationMgr *))(*(_QWORD *)this + 24LL))(this);
  }
  return (unsigned int)updated;
}
