/*
 * XREFs of ?xxxSetAutoRotationConvertible@CRotationMgr@@QEAAXH@Z @ 0x1402730D8
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ @ 0x140272FB8 (-xxxRefreshDisplayOrientation@CRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401D06F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CRotationMgr::xxxSetAutoRotationConvertible(CRotationMgr *this, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_14039BBC0 > 5 && tlgKeywordOn((__int64)&dword_14039BBC0, 0x200000000001LL) )
  {
    v6 = *((_DWORD *)this + 6);
    v7 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBC0,
      byte_1403660A6,
      v4,
      v5,
      (__int64)&v6,
      (__int64)&v7);
  }
  *((_DWORD *)this + 6) = a2;
}
