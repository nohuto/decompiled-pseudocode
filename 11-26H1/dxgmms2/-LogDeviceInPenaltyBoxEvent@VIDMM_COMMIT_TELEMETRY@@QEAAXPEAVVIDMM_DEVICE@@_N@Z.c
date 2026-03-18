/*
 * XREFs of ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140102B20
 * Callers:
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x14000158C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@@-$_.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140040480 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlg.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1400C83F8 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_DEVICE *a2,
        char a3)
{
  GUID v6; // xmm0
  const char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int16 *v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 ProcessImageFileName; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *v16; // [rsp+50h] [rbp-30h] BYREF
  const char *v17; // [rsp+58h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 268LL)) <= 6 )
  {
    ActivityId = 0LL;
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 276);
    if ( (unsigned int)dword_14008A048 > 5
      && (qword_14008A058 & 0x10000) != 0
      && (qword_14008A060 & 0x10000) == qword_14008A060 )
    {
      v7 = "AddedToPenaltyBox";
      if ( !a3 )
        v7 = "RemovedFromPenaltyBox";
      v8 = *((_QWORD *)a2 + 1);
      v17 = v7;
      v14 = *(unsigned __int16 **)(v8 + 16);
      ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(v8 + 16));
      v9 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      v16 = *(unsigned __int16 **)(v9 + 1968);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v9,
        (__int64)&unk_14007D625,
        (__int64)&ActivityId,
        v10,
        &v16,
        (void **)&ProcessImageFileName,
        (__int64)&v14,
        (void **)&v17);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)dword_14008A048 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_14008A048, 0x10000LL) )
        {
          v11 = *((_QWORD *)this + 1);
          v16 = *(unsigned __int16 **)(*(_QWORD *)(v11 + 8) + 16LL);
          ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL));
          v12 = *(_QWORD *)(*(_QWORD *)this + 24LL);
          v14 = *(unsigned __int16 **)(v12 + 1968);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
            v12,
            (__int64)&unk_14007D68A,
            (__int64)&ActivityId,
            v13,
            &v14,
            (void **)&ProcessImageFileName,
            (__int64)&v16);
        }
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v6 = ActivityId;
    }
    else
    {
      v6 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 276) = v6;
  }
}
