/*
 * XREFs of ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x140384930
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiCommitVidPn(ADAPTER_DISPLAY *this, const struct _DXGKARG_COMMITVIDPN *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  KIRQL CurrentIrql; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // r14d
  __int64 v11; // rdi
  KIRQL v12; // al
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v20; // rcx
  int v22; // [rsp+50h] [rbp-89h] BYREF
  __int64 v23; // [rsp+58h] [rbp-81h]
  char v24; // [rsp+60h] [rbp-79h]
  _DWORD v25[2]; // [rsp+70h] [rbp-69h] BYREF
  __int64 v26; // [rsp+78h] [rbp-61h]
  __int128 v27; // [rsp+80h] [rbp-59h]
  __int64 v28; // [rsp+90h] [rbp-49h]
  int v29; // [rsp+98h] [rbp-41h]
  int v30; // [rsp+9Ch] [rbp-3Dh]
  int v31; // [rsp+A0h] [rbp-39h]
  DXGKARG_COMMITVIDPN_FLAGS Flags; // [rsp+A4h] [rbp-35h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID AffectedVidPnSourceId; // [rsp+A8h] [rbp-31h]
  int v34; // [rsp+ACh] [rbp-2Dh]
  __int64 v35; // [rsp+B0h] [rbp-29h]
  _BYTE v36[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v22 = -1;
  v26 = 0LL;
  v27 = 0LL;
  v30 = 0;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 5009);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  v4 = MEMORY[0xFFFFF78000000320];
  v5 = v4 * KeQueryTimeIncrement();
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v11 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_COMMITVIDPN *))(*((_QWORD *)this + 2) + 656LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v12 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v12);
    WdLogGlobalForLineNumber = 881;
  }
  if ( v8 && *((_DWORD *)v8 + 12) != v10 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v8 + 12), v10, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v13 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  if ( (int)v11 < 0 )
    v17 = (unsigned int)v11;
  else
    v17 = (v13 * (unsigned __int64)TimeIncrement - v5) / 0x2710;
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 412LL);
  v26 = 0LL;
  Flags = a2->Flags;
  AffectedVidPnSourceId = a2->AffectedVidPnSourceId;
  v25[0] = 30;
  v25[1] = 72;
  v29 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v31 = 86;
  v34 = v17;
  v35 = v18;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v15, v16);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25, CurrentProcessSessionId);
  WdLogSingleEntry5(
    4LL,
    v11,
    a2->hFunctionalVidPn,
    a2->AffectedVidPnSourceId,
    a2->MonitorConnectivityChecks,
    a2->hPrimaryAllocation);
  WdLogGlobalForLineNumber = 910;
  if ( (_DWORD)v11 != -1073741801 && (_DWORD)v11 != -1071774920 && (_DWORD)v11 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 912;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
  return (unsigned int)v11;
}
