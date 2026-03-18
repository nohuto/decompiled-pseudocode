/*
 * XREFs of ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400C823C
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@33333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14003FEAC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U1@U1@U1@U1@U-$_tlgWr.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1400C83F8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1400C85DC (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13[8]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v14; // [rsp+70h] [rbp-1h] BYREF
  __int64 v15; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+17h] BYREF
  __int64 v18; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned __int16 *v19; // [rsp+98h] [rbp+27h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+2Fh] BYREF
  GUID ActivityId; // [rsp+A8h] [rbp+37h] BYREF

  v2 = 0LL;
  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 260LL)) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    v6 = *((_QWORD *)a2 + 8);
    if ( v6 )
      v2 = *(_QWORD *)(***(_QWORD ***)v6 + 16LL);
    if ( (unsigned int)dword_14008A048 > 5
      && (qword_14008A058 & 0x400000000008LL) != 0
      && (qword_14008A060 & 0x400000000008LL) == qword_14008A060 )
    {
      v7 = *((_QWORD *)a2 + 17);
      v8 = *((_QWORD *)a2 + 19);
      v13[0] = 2;
      v14 = v8 - v7;
      v9 = *((_QWORD *)a2 + 18);
      v10 = v8 - v9;
      v16 = v9 - v7;
      v11 = *((_QWORD *)this + 1);
      v15 = v10;
      v17 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
      v18 = *((_QWORD *)a2 + 4);
      v12 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      v19 = *(unsigned __int16 **)(v12 + 1968);
      v20 = v2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v12,
        (__int64)&unk_14007D586,
        (__int64)&ActivityId,
        v5,
        (__int64)&v20,
        &v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)v13);
    }
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
