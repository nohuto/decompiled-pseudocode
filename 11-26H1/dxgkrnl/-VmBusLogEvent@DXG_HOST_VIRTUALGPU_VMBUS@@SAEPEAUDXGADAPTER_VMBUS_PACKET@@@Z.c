/*
 * XREFs of ?VmBusLogEvent@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140228190
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4433AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x1400037A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U-$_tlgWrapBuffer@U_UNICO.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x14006FC84 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLogEvent(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-69h]
  __int64 v17; // [rsp+20h] [rbp-69h]
  __int64 v18; // [rsp+28h] [rbp-61h]
  __int64 v19; // [rsp+28h] [rbp-61h]
  __int64 v20; // [rsp+30h] [rbp-59h]
  __int64 v21; // [rsp+30h] [rbp-59h]
  __int64 v22; // [rsp+38h] [rbp-51h]
  int v23; // [rsp+80h] [rbp-9h] BYREF
  int v24; // [rsp+84h] [rbp-5h] BYREF
  int v25; // [rsp+88h] [rbp-1h] BYREF
  __int64 v26; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int16 *v27; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+B0h] [rbp+27h] BYREF
  _BYTE v31[40]; // [rsp+B8h] [rbp+2Fh] BYREF
  int v32; // [rsp+F0h] [rbp+67h] BYREF
  int v33; // [rsp+F8h] [rbp+6Fh] BYREF
  int v34; // [rsp+100h] [rbp+77h] BYREF
  int v35; // [rsp+108h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v31,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v2 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(int *)(v2 + 32);
      v5 = *(unsigned int *)(v2 + 28);
      v6 = *(int *)(v2 + 24);
      if ( (int)v4 >= 0 )
      {
        WdLogSingleEntry2(4LL, v6, v5);
        WdLogGlobalForLineNumber = 6482;
      }
      else
      {
        WdLogSingleEntry3(2LL, v4, v6, (unsigned int)v5);
        v21 = *(unsigned int *)(v3 + 28);
        v19 = *(int *)(v3 + 24);
        v17 = *(int *)(v3 + 32);
        WdLogGlobalForLineNumber = 6477;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Status: 0x%I64x, Scenario: 0x%I64x, EventId: 0x%I64x",
          v17,
          v19,
          v21,
          0LL,
          0LL);
      }
      if ( bTracingEnabled )
      {
        v8 = *(unsigned int *)(v3 + 32);
        if ( (int)v8 >= 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
          {
            v14 = *((_QWORD *)a1 + 10);
            LODWORD(v22) = *(_DWORD *)(v3 + 28);
            LODWORD(v20) = *(_DWORD *)(v3 + 24);
            LODWORD(v18) = *(_DWORD *)(v3 + 32);
            LODWORD(v16) = *(_DWORD *)(v14 + 24);
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v8,
              &VirtualGpuGuestEvent,
              v7,
              *(_QWORD *)(v14 + 16),
              v16,
              v18,
              v20,
              v22,
              *(_QWORD *)(v3 + 40),
              *(_QWORD *)(v3 + 48));
          }
        }
        else
        {
          v9 = *((_QWORD *)a1 + 10);
          v10 = *(_QWORD *)(v9 + 16);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          {
            LODWORD(v22) = *(_DWORD *)(v3 + 28);
            LODWORD(v20) = *(_DWORD *)(v3 + 24);
            LODWORD(v18) = *(_DWORD *)(v3 + 32);
            LODWORD(v16) = *(_DWORD *)(v9 + 24);
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v8,
              &VirtualGpuGuestEventFailure,
              v7,
              *(_QWORD *)(v9 + 16),
              v16,
              v18,
              v20,
              v22,
              *(_QWORD *)(v3 + 40),
              *(_QWORD *)(v3 + 48));
          }
          if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000008000LL) )
          {
            v32 = *(_DWORD *)(v10 + 432);
            v33 = *(_DWORD *)(v10 + 428);
            v34 = *(_DWORD *)(v10 + 424);
            v35 = *(_DWORD *)(v10 + 420);
            v26 = *(_QWORD *)(v10 + 412);
            v27 = *(unsigned __int16 **)(v10 + 1968);
            v28 = *(_QWORD *)(v3 + 48);
            v29 = *(_QWORD *)(v3 + 40);
            v23 = *(_DWORD *)(v3 + 32);
            v24 = *(_DWORD *)(v3 + 28);
            v25 = *(_DWORD *)(v3 + 24);
            v30 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v11,
              (__int64)&unk_140143F74,
              v12,
              v13,
              (__int64)&v30,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v29,
              (__int64)&v28,
              &v27,
              (__int64)&v26,
              (__int64)&v35,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v32);
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6471;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      6471LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  return 0;
}
