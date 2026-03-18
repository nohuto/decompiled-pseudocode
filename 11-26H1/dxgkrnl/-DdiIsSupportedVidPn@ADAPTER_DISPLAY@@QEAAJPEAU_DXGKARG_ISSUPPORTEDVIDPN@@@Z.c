/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1402A8C6C
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1402A8AAC (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009464 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  D3DKMDT_HVIDPN hDesiredVidPn; // rdx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *v10; // rax
  int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  KIRQL v22; // al
  D3DKMDT_HVIDPN v23; // [rsp+28h] [rbp-71h]
  D3DKMDT_HVIDPN v24; // [rsp+30h] [rbp-69h]
  int v25; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+58h] [rbp-41h]
  char v27; // [rsp+60h] [rbp-39h]
  _BYTE v28[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 22, 1u);
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 5025);
  hDesiredVidPn = a2->hDesiredVidPn;
  if ( !a2->hDesiredVidPn || *((_DWORD *)hDesiredVidPn + 16) != 1833172997 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8744;
    LODWORD(v12) = -1071774973;
    WdLogSingleEntry3(2LL, -1071774973LL, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), a2->hDesiredVidPn);
    v19 = *((_QWORD *)this + 2);
    v24 = a2->hDesiredVidPn;
    WdLogGlobalForLineNumber = 2799;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Call to DmmIsNullVidPn failed with status = 0x%I64x (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
      -1071774973LL,
      *(_QWORD *)(v19 + 288),
      (__int64)v24,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( !v27 )
      return (unsigned int)v12;
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_23:
    if ( !v17 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return (unsigned int)v12;
  }
  if ( *((D3DKMDT_HVIDPN *)hDesiredVidPn + 15) != hDesiredVidPn + 30 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v28, Current);
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL), 1u);
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (v10 = DXGTHREAD::GetCurrent(), (v9 = v10) != 0LL) )
      v11 = *((_DWORD *)v10 + 12);
    else
      v11 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v29,
      *((struct DXGADAPTER **)this + 2));
    v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 616LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
            a2);
    if ( v29[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v22 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v22);
      WdLogGlobalForLineNumber = 2826;
    }
    if ( v9 )
    {
      v14 = *((int *)v9 + 12);
      if ( (_DWORD)v14 != v11 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v11, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
    v15[3] = v12;
    v15[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
    v15[5] = a2->hDesiredVidPn;
    v15[6] = a2->IsVidPnSupported;
    WdLogGlobalForLineNumber = 2832;
    if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2834;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( !v27 )
      return (unsigned int)v12;
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
    goto LABEL_23;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), a2->hDesiredVidPn);
  v20 = *((_QWORD *)this + 2);
  v23 = a2->hDesiredVidPn;
  WdLogGlobalForLineNumber = 2811;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Call to DmmIsNullVidPn with Null VidPn caught (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
    *(_QWORD *)(v20 + 288),
    (__int64)v23,
    0LL,
    0LL,
    0LL);
  a2->IsVidPnSupported = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
  return 0LL;
}
