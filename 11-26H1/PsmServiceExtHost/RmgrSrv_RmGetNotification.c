/*
 * XREFs of RmgrSrv_RmGetNotification @ 0x180044270
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004028C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x180044330 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005C130 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall RmgrSrv_RmGetNotification(
        struct ExecutionModel::ResourceHandle__ *a1,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int Notification; // ebx
  int v7; // r8d
  int v8; // r9d
  struct ExecutionModel::ResourceHandle__ *v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 2LL) )
  {
    v10 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E1278,
      byte_1800CB4C1,
      v4,
      v5,
      (__int64)&v10);
  }
  Notification = ExecutionModel::ResourceManager::RmGetNotification(a1, a1, a2);
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 2LL) )
  {
    LODWORD(v10) = *(_DWORD *)a2;
    v11 = Notification;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E1278,
      (unsigned int)&unk_1800CB3EA,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v10);
  }
  return Notification;
}
