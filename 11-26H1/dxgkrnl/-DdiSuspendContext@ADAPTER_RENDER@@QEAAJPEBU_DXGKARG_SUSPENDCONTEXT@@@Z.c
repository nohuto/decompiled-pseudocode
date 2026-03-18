/*
 * XREFs of ?DdiSuspendContext@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUSPENDCONTEXT@@@Z @ 0x1403D093C
 * Callers:
 *     ADAPTER_RENDER_DdiSuspendContext @ 0x14005DD00 (ADAPTER_RENDER_DdiSuspendContext.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiSuspendContext(ADAPTER_RENDER *this, const struct _DXGKARG_SUSPENDCONTEXT *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  struct DXGTHREAD *v6; // rbx
  struct DXGTHREAD *Current; // rax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, const struct _DXGKARG_SUSPENDCONTEXT *); // rax
  int v11; // edi
  __int64 v12; // rcx
  KIRQL v14; // al
  int v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h]
  char v17; // [rsp+60h] [rbp-19h]
  _BYTE v18[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 5118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 5118);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v18,
    *((struct DXGADAPTER **)this + 2));
  v9 = *((_QWORD *)this + 2);
  v10 = *(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SUSPENDCONTEXT *))(v9 + 1288);
  if ( v10 )
    v11 = v10(*(_QWORD *)(v9 + 288), a2);
  else
    v11 = -1073741822;
  if ( v18[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v14 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v14);
    WdLogGlobalForLineNumber = 647;
  }
  if ( v6 && *((_DWORD *)v6 + 12) != v8 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v8, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  if ( v11 != -1073741822 && v11 && v11 != 259 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 649;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return (unsigned int)v11;
}
