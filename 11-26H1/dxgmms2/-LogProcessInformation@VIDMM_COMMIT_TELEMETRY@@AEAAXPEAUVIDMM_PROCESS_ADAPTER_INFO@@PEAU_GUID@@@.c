/*
 * XREFs of ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1400C83F8
 * Callers:
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400C823C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140102B20 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x14011D738 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1401270CC (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1401271F8 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@455555AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1400018E4 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U3@U.c)
 *     ?GetProcessStatus@VIDMM_COMMIT_TELEMETRY@@AEAAPEBDPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1400AB4A4 (-GetProcessStatus@VIDMM_COMMIT_TELEMETRY@@AEAAPEBDPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1400C6A24 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PROCESS_ADAPTER_INFO *a2,
        struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  const char *ProcessStatus; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // [rsp+90h] [rbp-19h] BYREF
  __int64 v15; // [rsp+98h] [rbp-11h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+1Fh] BYREF
  const char *v22; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 ProcessImageFileName; // [rsp+E0h] [rbp+37h] BYREF
  unsigned __int16 *v25; // [rsp+E8h] [rbp+3Fh] BYREF
  BOOL v26; // [rsp+110h] [rbp+67h] BYREF
  __int64 v27; // [rsp+128h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( a2 )
    {
      v6 = 0;
      if ( *(_DWORD *)(*(_QWORD *)this + 6952LL) )
      {
        v7 = qword_14008A060;
        do
        {
          v8 = (_QWORD *)(*((_QWORD *)a2 + 1) + 304LL * (unsigned __int16)v6);
          if ( (unsigned int)dword_14008A048 > 5 && (qword_14008A058 & 0x10000) != 0 && (v7 & 0x10000) == v7 )
          {
            v27 = v8[5];
            v14 = v8[19];
            v15 = v8[11];
            v16 = v8[27];
            v26 = v8[1] != 0LL;
            v17 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)(v8 + 1));
            v18 = v9[4];
            v19 = v9[18];
            v20 = v9[10];
            v21 = v9[26];
            ProcessStatus = VIDMM_COMMIT_TELEMETRY::GetProcessStatus(this, a2);
            v11 = *((_QWORD *)a2 + 2);
            v22 = ProcessStatus;
            v23 = *(_QWORD *)(v11 + 16);
            ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(v11 + 16));
            v12 = *(_QWORD *)(*(_QWORD *)this + 24LL);
            v25 = *(unsigned __int16 **)(v12 + 1968);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v12,
              (__int64)&unk_14007D96F,
              (__int64)a3,
              v13,
              &v25,
              (void **)&ProcessImageFileName,
              (__int64)&v23,
              (void **)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v19,
              (__int64)&v18,
              (__int64)&v17,
              (__int64)&v26,
              (__int64)&v16,
              (__int64)&v15,
              (__int64)&v14,
              (__int64)&v27);
            v7 = qword_14008A060;
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(*(_QWORD *)this + 6952LL) );
      }
    }
  }
}
