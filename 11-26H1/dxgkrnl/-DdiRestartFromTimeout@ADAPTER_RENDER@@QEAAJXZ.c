/*
 * XREFs of ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x140416C58
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
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
 */

__int64 __fastcall ADAPTER_RENDER::DdiRestartFromTimeout(ADAPTER_RENDER *this)
{
  KIRQL CurrentIrql; // al
  __int64 v3; // r15
  struct DXGTHREAD *v4; // rbx
  struct DXGTHREAD *Current; // rax
  int v6; // esi
  __int64 v7; // r14
  KIRQL v8; // al
  __int64 v9; // rcx
  int v11; // [rsp+58h] [rbp-19h] BYREF
  __int64 v12; // [rsp+60h] [rbp-11h]
  char v13; // [rsp+68h] [rbp-9h]
  _BYTE v14[8]; // [rsp+70h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+7h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 5021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 5021);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v3 = CurrentIrql;
  v4 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v4 = Current) != 0LL) )
    v6 = *((_DWORD *)Current + 12);
  else
    v6 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v14,
    *((struct DXGADAPTER **)this + 2));
  v7 = (*(int (__fastcall **)(_QWORD))(*((_QWORD *)this + 2) + 584LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 288LL));
  if ( v14[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v3 != KeGetCurrentIrql() )
  {
    v8 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v3, v8);
    WdLogGlobalForLineNumber = 2505;
  }
  if ( v4 && *((_DWORD *)v4 + 12) != v6 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v4 + 12), v6, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  WdLogSingleEntry2(4LL, v7, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL));
  WdLogGlobalForLineNumber = 2509;
  if ( (_DWORD)v7 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2511;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return (unsigned int)v7;
}
