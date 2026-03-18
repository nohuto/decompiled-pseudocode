/*
 * XREFs of ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x140067E2C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x140438A20 (DxgkProcessDisplayCalloutBatch.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@333@Z @ 0x1400034C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434AEBU?$_tlgWrapperByRef@$0BA@@@444@Z @ 0x140003590 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U-$_tlgWrapperByRef@$0BA@@@U.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14005A380 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 */

void __fastcall RAPID_HPD_MANAGER::ExtendExistingHPDPeriod(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // edx
  char v12; // cl
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rcx
  BOOL v18; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+74h] [rbp+Bh] BYREF
  BOOL v20; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+80h] [rbp+17h] BYREF
  __int64 v22; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+90h] [rbp+27h] BYREF
  __int64 v24; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+37h] BYREF
  char v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+D0h] [rbp+67h] BYREF
  int v28; // [rsp+E8h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED((DXGAUTOPUSHLOCKFASTSHARED *)&v25, (struct DXGPUSHLOCKFAST *)a1);
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD *)(a1 + 56) + (unsigned int)(10000 * *(_DWORD *)(a1 + 24));
  LOBYTE(v9) = MEMORY[0xFFFFF78000000014] < v8;
  v10 = v7 + (unsigned int)(10000 * *(_DWORD *)(a1 + 28));
  if ( MEMORY[0xFFFFF78000000014] < v8 && MEMORY[0xFFFFF78000000014] < v10 )
    *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000014];
  v11 = *(_DWORD *)(a1 + 88);
  if ( v11 == 1 )
    goto LABEL_18;
  v12 = 0;
  if ( v11 != 2 )
    v12 = v9;
  if ( v12 )
  {
LABEL_18:
    if ( (unsigned int)dword_1401665F0 > 5 && tlgKeywordOn((__int64)&dword_1401665F0, 0x400000000002LL) )
    {
      v23 = a3;
      v18 = a2;
      LODWORD(v21) = 1;
      v24 = 16779264LL;
      v28 = *(_DWORD *)(a1 + 80);
      v27 = (MEMORY[0xFFFFF78000000014] - (int)v16) / 10000;
      v20 = v14 < v15;
      v22 = a1 + 36;
      v19 = *(unsigned __int8 *)(a1 + 32);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        MEMORY[0xFFFFF78000000014] - v16,
        (__int64)&unk_140143D89,
        v13,
        v14,
        (__int64)&v24,
        (__int64)&v21,
        (__int64)&v18,
        (__int64)&v23,
        (__int64)&v19,
        &v22,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v27);
    }
    DxgkLogCodePointPacket(
      0x76u,
      a2,
      *(_DWORD *)(a1 + 88) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(_DWORD *)(a1 + 36),
      a3);
  }
  else if ( (unsigned int)dword_1401665F0 > 5 )
  {
    v22 = a3;
    v20 = a2;
    v28 = *(_DWORD *)(a1 + 80);
    v27 = (MEMORY[0xFFFFF78000000014] - (int)v7) / 10000;
    v18 = v6 < v10;
    v21 = a1 + 36;
    v19 = *(unsigned __int8 *)(a1 + 32);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      MEMORY[0xFFFFF78000000014] - v7,
      (__int64)&unk_140143C6E,
      v9,
      v6,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v19,
      &v21,
      (__int64)&v18,
      (__int64)&v28,
      (__int64)&v27);
  }
  if ( v26 )
  {
    v17 = v25;
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 16));
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
}
