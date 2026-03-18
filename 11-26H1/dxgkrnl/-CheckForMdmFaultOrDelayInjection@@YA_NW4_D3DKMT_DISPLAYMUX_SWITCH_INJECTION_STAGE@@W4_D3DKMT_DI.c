/*
 * XREFs of ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x14008ABA4
 * Callers:
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x14008C2F8 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1400040E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlg.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14002EE60 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

char __fastcall CheckForMdmFaultOrDelayInjection(int a1, int a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r9
  int v15; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+44h] [rbp-85h] BYREF
  __int64 v17; // [rsp+48h] [rbp-81h] BYREF
  __int64 v18; // [rsp+50h] [rbp-79h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-71h] BYREF
  _OWORD v20[4]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-19h]
  __int128 v23; // [rsp+C0h] [rbp-9h]
  __int128 v24; // [rsp+D0h] [rbp+7h]

  v3 = *(_DWORD *)(a3 + 36);
  v4 = a1;
  v6 = a2;
  if ( a1 == v3 || v3 == -1 )
  {
    v7 = *(_DWORD *)(a3 + 40);
    if ( v7 )
    {
      WdLogSingleEntry2(2LL, a1, v7);
      WdLogGlobalForLineNumber = 4412;
      HIDWORD(v24) = *(_DWORD *)(a3 + 40);
      v21 = 0x4000000006uLL;
      v23 = 0uLL;
      v22 = 0LL;
      *(_QWORD *)&v24 = 0x100000082LL;
      DWORD2(v24) = v4;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v21);
      if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
      {
        v15 = *(_DWORD *)(a3 + 40);
        v16 = v4;
        v18 = a3 + 16;
        v17 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          (__int64)&unk_14014475C,
          a3,
          v9,
          (__int64)&v17,
          &v18,
          (__int64)&v16,
          (__int64)&v15);
      }
      Interval.QuadPart = -(__int64)(unsigned int)(10000 * *(_DWORD *)(a3 + 40));
      KeDelayExecutionThread(0, 0, &Interval);
      WdLogSingleEntry2(2LL, v4, *(unsigned int *)(a3 + 40));
      WdLogGlobalForLineNumber = 4448;
      memset(v20, 0, sizeof(v20));
      v21 = *(unsigned __int64 *)&v20[0];
      v23 = v20[2];
      v24 = v20[3];
      v10 = *(_DWORD *)(a3 + 40);
      v22 = 0LL;
      *(_QWORD *)&v21 = 0x4000000006LL;
      DWORD2(v23) = 0;
      *(_QWORD *)&v23 = 0LL;
      *(_QWORD *)&v24 = 130LL;
      *((_QWORD *)&v24 + 1) = __PAIR64__(v10, v4);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v21);
      if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
      {
        v16 = *(_DWORD *)(a3 + 40);
        v15 = v4;
        v17 = a3 + 16;
        v18 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v11,
          (__int64)&unk_1401446F7,
          a3,
          v12,
          (__int64)&v18,
          &v17,
          (__int64)&v15,
          (__int64)&v16);
      }
    }
  }
  if ( (_DWORD)v4 != *(_DWORD *)(a3 + 32) )
    return 0;
  *(_DWORD *)(a3 + 212) |= 1u;
  *(_DWORD *)(a3 + 64) = -1073741595;
  *(_DWORD *)(a3 + 60) = v4;
  *(_DWORD *)(a3 + 56) = v6;
  *(_DWORD *)(a3 + 68) = 1;
  RtlStringCbCopyA((char *)(a3 + 72), 128LL, "**FaultInjected**");
  WdLogSingleEntry2(2LL, v4, v6);
  WdLogGlobalForLineNumber = 4478;
  v22 = 0LL;
  v21 = 0x4000000006uLL;
  v23 = 0uLL;
  LODWORD(v24) = 131;
  DWORD1(v24) = v4;
  *((_QWORD *)&v24 + 1) = (unsigned int)v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v21);
  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
  {
    v16 = v6;
    Interval.QuadPart = a3 + 16;
    v15 = v4;
    v17 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&v17,
      (__int64)&unk_140144685,
      a3,
      v13,
      (__int64)&v17,
      (__int64 *)&Interval,
      (__int64)&v15,
      (__int64)&v16);
  }
  if ( g_DisplayMuxDebug )
    __debugbreak();
  return 1;
}
