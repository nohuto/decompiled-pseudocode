/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040958
 * Callers:
 *     HamRpcSrvConnectServicing @ 0x18002FE00 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x180030000 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x180030F90 (HamRpcSrvConnect.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180041E80 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectSessionState @ 0x180064EB0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180065710 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x1800658A0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvDisconnectServicing @ 0x18006A700 (HamRpcSrvDisconnectServicing.c)
 *     HamRpcSrvConnectFullTrust @ 0x18007C5F0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041190 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004131C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800415C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapS.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  __int64 v2; // rbx
  unsigned int Pid; // eax
  char v4; // r14
  _WORD *v5; // rdx
  __int64 v6; // r15
  unsigned int v7; // esi
  __int16 v8; // ax
  _WORD *v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  char v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[128]; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(v17, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v2 = 64LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CF3DE);
  Pid = HampClientGetPid(a1);
  v4 = *((_BYTE *)a1 + 164);
  v5 = v18;
  v6 = *((_QWORD *)a1 + 19);
  v7 = Pid;
  do
  {
    if ( v2 == -2147483582 )
      break;
    v8 = *(_WORD *)((char *)v5 + a1 - (struct _HAM_CLIENT_CONTEXT *)v18 + 220);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v2;
  }
  while ( v2 );
  v9 = v5 - 1;
  if ( v2 )
    v9 = v5;
  *v9 = 0;
  HampClientDisconnect(a1);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v16 = v6;
    v15 = v18;
    v13[0] = v4;
    v14 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v10,
      (unsigned int)&unk_1800CE8C4,
      v11,
      v12,
      (__int64)&v14,
      (__int64)v13,
      (__int64)&v16,
      (__int64)&v15);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
