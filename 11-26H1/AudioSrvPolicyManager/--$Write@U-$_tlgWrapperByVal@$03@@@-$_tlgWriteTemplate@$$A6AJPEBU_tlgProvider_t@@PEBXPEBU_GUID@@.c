/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180018F64 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18002630C (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x180028B24 (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003D368 (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     _lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator() @ 0x1800435D0 (_lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_--operator().c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180043CCC (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180044028 (-TS_ServiceStart@@YAXXZ.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180044400 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180047CC4 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  v11 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = *(_QWORD *)(a1 + 8);
  v12 = 4LL;
  UserData.Size = *(unsigned __int16 *)UserData.Ptr;
  v9 = *(unsigned __int16 *)(a2 + 11);
  v8 = a2 + 11;
  UserData.Reserved = 2;
  v10 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
}
