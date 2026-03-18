/*
 * XREFs of ?xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z @ 0x1402733E0
 * Callers:
 *     ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140272D80 (-RotationLockTogglePressed@CRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CRotationMgr@@UEAAJH@Z @ 0x1402731D0 (-xxxSetAutoRotationState@CRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401E5E48 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x140272DDC (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 */

__int64 __fastcall CRotationMgr::xxxSetSlateAutoRotationState(CRotationMgr *this, int a2)
{
  int updated; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+50h] [rbp+18h] BYREF

  updated = UpdateAutoRotationRegistrySetting(
              a2,
              L"SlateEnable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 3) = a2;
    if ( (unsigned int)dword_14039BBC0 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14039BBC0, 0x200000000001LL) )
      {
        v8 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)&dword_14039BBC0,
          byte_14036605D,
          v5,
          v6,
          (__int64)&v8);
      }
    }
  }
  return (unsigned int)updated;
}
