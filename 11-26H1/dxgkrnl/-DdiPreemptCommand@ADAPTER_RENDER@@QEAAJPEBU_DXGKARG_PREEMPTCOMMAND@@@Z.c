/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x14000A1C8
 * Callers:
 *     ADAPTER_RENDER_DdiPreemptCommand @ 0x14000A1B0 (ADAPTER_RENDER_DdiPreemptCommand.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v6; // rbx
  int v7; // eax
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL CurrentIrql; // al
  __int64 v14; // r15
  struct DXGTHREAD *v15; // rbx
  struct DXGTHREAD *v16; // rax
  int v17; // esi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  KIRQL v25; // al
  __int64 v26; // [rsp+30h] [rbp-59h]
  unsigned int v27; // [rsp+50h] [rbp-39h] BYREF
  struct DXGTHREAD *v28; // [rsp+58h] [rbp-31h]
  char v29; // [rsp+60h] [rbp-29h]
  _BYTE v30[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5014LL);
  }
  else
  {
    v29 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v28 = Current;
    v6 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v7 = *((_DWORD *)v6 + 13);
      if ( !v7 )
        *((_DWORD *)v6 + 14) = 5014;
      *((_DWORD *)v6 + 13) = v7 + 1;
    }
  }
  v8 = this[2];
  v9 = *((_QWORD *)v8 + 396);
  if ( !v9
    || (v10 = *(_QWORD *)(v9 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 736) + 8LL) + 80LL))(v10)
    && *((struct _KTHREAD **)v8 + 397) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v8 + 256)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, "g", v12, 73LL);
      KeWaitForSingleObject((char *)v8 + 256, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v8 + 35), 1u);
  }
  _InterlockedAdd((volatile signed __int32 *)this[2] + 1213, 1u);
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  v15 = 0LL;
  if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v15 = v16) != 0LL) )
    v17 = *((_DWORD *)v16 + 12);
  else
    v17 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v30, this[2]);
  v18 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))this[2] + 67))(
          *((_QWORD *)this[2] + 36),
          a2);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v14 != KeGetCurrentIrql() )
  {
    v25 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v14, v25, v26);
    WdLogGlobalForLineNumber = 1514;
  }
  if ( v15 )
  {
    v20 = *((int *)v15 + 12);
    if ( (_DWORD)v20 != v17 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v15 + 12), v17, 0LL, v26);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
  v21[3] = v18;
  v21[4] = a2->Flags.Value;
  v21[5] = a2->PreemptionFenceId;
  WdLogGlobalForLineNumber = 1519;
  if ( (_DWORD)v18 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1521;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v27);
  return (unsigned int)v18;
}
