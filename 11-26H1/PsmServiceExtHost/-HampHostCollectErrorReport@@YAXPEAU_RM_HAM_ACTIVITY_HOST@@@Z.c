/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AED4
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@35@Z @ 0x180001AF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180019300 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B1A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18003FF1C (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800416FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064250 (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800648F0 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180068C6C (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x18006A93C (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18008C3D0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // esi
  int v2; // r13d
  __int64 v3; // r14
  int v5; // r12d
  unsigned __int64 v6; // rbx
  int JobType; // eax
  int v8; // edx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  int v10; // r15d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  struct _RM_HAM_ACTIVITY_HOST *v15; // rcx
  int ProcessesInfo; // eax
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rbx
  HANDLE *v24; // rsi
  __int64 v25; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+68h] [rbp-11h] BYREF
  const wchar_t *v27; // [rsp+70h] [rbp-9h] BYREF
  void *v28[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+6Fh] BYREF
  int v32; // [rsp+F0h] [rbp+77h] BYREF
  int v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = 0;
  v2 = *((unsigned __int16 *)a1 + 332);
  LODWORD(v3) = 0;
  LODWORD(v31) = *((_DWORD *)a1 + 212);
  v30 = 0;
  v29 = 0LL;
  v5 = 1;
  v6 = ((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL);
  *(_OWORD *)v28 = 0LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CD181);
  if ( (*((_DWORD *)a1 + 166) & 0x30000) != 0x20000LL )
    goto LABEL_33;
  HampHostIsSuspendWaiter(a1);
  JobType = RmHamHostGetJobType(a1);
  v10 = 256;
  if ( JobType == 2 )
  {
    v11 = *(_DWORD *)(v6 + 1252);
    if ( (v11 & 0x80u) != 0 )
    {
      if ( (v11 & 0x100) != 0 )
        goto LABEL_14;
      *(_DWORD *)(v6 + 1256) |= 0x100u;
    }
    else
    {
      *(_DWORD *)(v6 + 1256) |= 0x180u;
    }
    goto LABEL_13;
  }
  if ( JobType == 4 && (*(_BYTE *)(v6 + 1252) & 0x40) == 0 )
  {
    *(_DWORD *)(v6 + 1256) |= 0x40u;
LABEL_13:
    v1 = 1;
  }
LABEL_14:
  HampHostCheckUpdateSuspendWaitState(v9, v8);
  HamReleaseEnforcementLocks(a1);
  v5 = 0;
  if ( v1 )
  {
    v12 = RmHamHostGetJobType(a1);
    if ( v12 == 2 )
    {
      RmpSystemChangePsmApplicationState((_QWORD *)v6, 2);
    }
    else if ( v12 == 4 )
    {
      RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)v6, 1u);
    }
    HamAcquireEnforcementLocks(a1);
    HampHostIsSuspendWaiter(a1);
    *(_DWORD *)(v6 + 1256) = 0;
    v13 = RmHamHostGetJobType(a1);
    if ( v13 == 2 )
    {
      *(_DWORD *)(v6 + 1252) |= 0x180u;
    }
    else if ( v13 == 4 )
    {
      *(_DWORD *)(v6 + 1252) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(v15, v14);
    HamReleaseEnforcementLocks(a1);
  }
  if ( (int)HampSystemCheckReportGameCoreHang((__int64)a1, v2 & 0xFFFFFF00, &v30) >= 0 )
  {
    if ( v30 )
      goto LABEL_33;
    ProcessesInfo = RmHamHostGetProcessesInfo((struct _RM_ACTIVITY_HOST *)v6, 0, 1, (struct _HAM_PROCESS_SNAPSHOT *)v28);
    LODWORD(v3) = v29;
    if ( ProcessesInfo >= 0 )
    {
      if ( (int)HampSystemReportHang(v17, v28[1], v29, (unsigned __int16)v2 & 0xFF00, v31) >= 0 )
        goto LABEL_33;
      v10 = 768;
    }
    else
    {
      v10 = 512;
    }
  }
  if ( (unsigned int)dword_1800E12B0 <= 4 )
    goto LABEL_36;
  if ( tlgKeywordOn((__int64)&dword_1800E12B0, 0x400000000008LL) )
  {
    v25 = 0x1000000LL;
    LODWORD(v31) = v2;
    LOBYTE(v30) = RmHamHostGetJobType(a1);
    v26 = *(_QWORD *)(v6 + 32);
    v27 = (const wchar_t *)((char *)a1 + 24);
    v32 = v10;
    v33 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v19,
      (__int64)&unk_1800CD215,
      v18,
      v20,
      (__int64)&v33,
      (__int64)&v32,
      &v27,
      (__int64)&v26,
      (__int64)&v30,
      (__int64)&v31,
      (__int64)&v25);
  }
LABEL_33:
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
  {
    v31 = *(_QWORD *)(v6 + 32);
    v30 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E12B0,
      byte_1800CD439,
      v21,
      v22,
      (__int64)&v31,
      (__int64)&v30);
  }
LABEL_36:
  v23 = v28[0];
  if ( (_DWORD)v3 )
  {
    v24 = (HANDLE *)v28[0];
    v3 = (unsigned int)v3;
    do
    {
      NtClose(*v24++);
      --v3;
    }
    while ( v3 );
  }
  if ( v23 )
    HampFreeHeap(v23);
  if ( v28[1] )
    HampFreeHeap(v28[1]);
  if ( !v5 )
    HamAcquireEnforcementLocks(a1);
  *((_QWORD *)a1 + 83) &= ~0x8000000000000uLL;
}
