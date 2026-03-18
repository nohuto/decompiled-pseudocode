/*
 * XREFs of ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046FBC
 * Callers:
 *     DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046F48 (DxgkReportMonitorPowerRapidHpdTriggerEvent.c)
 *     DxgkReportAdapterPowerRapidHpdTriggerEvent @ 0x140046F8C (DxgkReportAdapterPowerRapidHpdTriggerEvent.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@33@Z @ 0x140047354 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U.c)
 *     ?CreateNewActivityId@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x140047490 (-CreateNewActivityId@RAPID_HPD_MANAGER@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4434AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x140047CBC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U-$_tlgWrapperByRef@$0BA@.c)
 */

void __fastcall RAPID_HPD_MANAGER::ReportTriggerEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r15
  int v9; // edx
  bool v10; // sf
  bool v11; // of
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r12
  unsigned __int8 v15; // r14
  int v16; // [rsp+70h] [rbp-9h] BYREF
  int v17; // [rsp+74h] [rbp-5h] BYREF
  int v18; // [rsp+78h] [rbp-1h] BYREF
  __int64 v19; // [rsp+80h] [rbp+7h] BYREF
  __int64 v20; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v21[8]; // [rsp+90h] [rbp+17h] BYREF
  int v22; // [rsp+E0h] [rbp+67h] BYREF
  BOOL v23; // [rsp+E8h] [rbp+6Fh] BYREF
  int v24; // [rsp+F8h] [rbp+7Fh] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  *(_QWORD *)(a1 + 8) = KeGetCurrentThread();
  if ( a2 == 4 )
    *(_BYTE *)(a1 + 32) = 1;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = *(_DWORD *)(a1 + 88);
  v12 = *(_QWORD *)(a1 + 56) + (unsigned int)(10000 * *(_DWORD *)(a1 + 24));
  v11 = __OFSUB__(MEMORY[0xFFFFF78000000014], v12);
  v10 = MEMORY[0xFFFFF78000000014] - v12 < 0;
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000014];
  LOBYTE(v12) = v10 ^ v11;
  v13 = v10 ^ v11;
  v14 = *(_QWORD *)(a1 + 72) + (unsigned int)(10000 * *(_DWORD *)(a1 + 28));
  if ( v9 == 1 )
    v13 = 1;
  v15 = 0;
  if ( v9 != 2 )
    v15 = v13;
  if ( !v15 )
  {
    RAPID_HPD_MANAGER::CreateNewActivityId((RAPID_HPD_MANAGER *)a1);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 80) = a2;
  }
  *(_DWORD *)(a1 + 52) = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned int)dword_1401665F0 > 5 )
    {
      v20 = a3;
      v17 = 3;
      v23 = v8 < v14;
      v22 = v15;
      v21[0] = a1 + 36;
      v24 = *(unsigned __int8 *)(a1 + 32);
      v18 = *(_DWORD *)(a1 + 80);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_140143D06,
        v6,
        v7,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v20,
        (__int64)&v24,
        (__int64)v21,
        (__int64)&v22,
        (__int64)&v23);
    }
  }
  else if ( (unsigned int)dword_1401665F0 > 5
         && (qword_140166600 & 0x400000000002LL) != 0
         && (qword_140166608 & 0x400000000002LL) == qword_140166608 )
  {
    v20 = a3;
    v17 = a2;
    v18 = 2;
    v21[0] = 16779264LL;
    v23 = v8 < v14;
    v22 = v15;
    v19 = a1 + 36;
    v24 = *(unsigned __int8 *)(a1 + 32);
    v16 = *(_DWORD *)(a1 + 80);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_140143E33,
      v6,
      v7,
      (__int64)v21,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v24,
      (__int64)&v19,
      (__int64)&v22,
      (__int64)&v23);
  }
  if ( g_IsInternalRelease && a2 != 3 )
    DxgkLogCodePointPacket(
      117LL,
      a2,
      *(_DWORD *)(a1 + 88) + (v15 << 16) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(unsigned int *)(a1 + 36),
      a3);
  *(_DWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
