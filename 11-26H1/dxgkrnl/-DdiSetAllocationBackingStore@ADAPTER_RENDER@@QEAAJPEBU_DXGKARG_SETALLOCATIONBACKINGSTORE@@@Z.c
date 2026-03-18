/*
 * XREFs of ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1401B0FEC
 * Callers:
 *     ADAPTER_RENDER_DdiSetAllocationBackingStore @ 0x140074D50 (ADAPTER_RENDER_DdiSetAllocationBackingStore.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140038950 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetAllocationBackingStore(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *a2)
{
  __int64 v4; // rcx
  int (__fastcall *v5)(_QWORD, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *); // rsi
  __int64 v6; // rcx
  KIRQL CurrentIrql; // al
  __int64 v9; // r15
  struct DXGTHREAD *v10; // rbx
  struct DXGTHREAD *Current; // rax
  int v12; // r14d
  __int64 v13; // rsi
  KIRQL v14; // al
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-29h] BYREF
  __int64 v17; // [rsp+58h] [rbp-21h]
  char v18; // [rsp+60h] [rbp-19h]
  _BYTE v19[56]; // [rsp+68h] [rbp-11h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5157);
  v4 = *((_QWORD *)this + 2);
  v5 = *(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *))(v4 + 1464);
  if ( v5 )
  {
    DXGADAPTER::AcquireDdiSync(v4, 1);
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL), 1u);
    CurrentIrql = KeGetCurrentIrql();
    v9 = CurrentIrql;
    v10 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v10 = Current) != 0LL) )
      v12 = *((_DWORD *)Current + 12);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v19,
      *((struct DXGADAPTER **)this + 2));
    v13 = v5(*(_QWORD *)(*((_QWORD *)this + 2) + 288LL), a2);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19);
    if ( (_BYTE)v9 != KeGetCurrentIrql() )
    {
      v14 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v14);
      WdLogGlobalForLineNumber = 4112;
    }
    if ( v10 && *((_DWORD *)v10 + 12) != v12 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v12, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
    if ( (_DWORD)v13 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4114;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return (unsigned int)v13;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    }
    return 3221225659LL;
  }
}
