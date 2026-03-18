/*
 * XREFs of ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x14000AF18
 * Callers:
 *     ADAPTER_RENDER_DdiNotifyFocusPresent @ 0x14000AF00 (ADAPTER_RENDER_DdiNotifyFocusPresent.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyFocusPresent(struct DXGADAPTER **this, __int64 a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  struct DXGTHREAD *v6; // rbx
  int v7; // r14d
  struct DXGADAPTER *v8; // rcx
  __int64 (__fastcall *v9)(_QWORD); // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v15; // al
  unsigned int v16; // [rsp+58h] [rbp-19h] BYREF
  __int64 v17; // [rsp+60h] [rbp-11h]
  char v18; // [rsp+68h] [rbp-9h]
  _BYTE v19[8]; // [rsp+70h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+7h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5116LL);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5116);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v7 = *((_DWORD *)Current + 12);
  else
    v7 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19, this[2]);
  v8 = this[2];
  v9 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v8 + 159);
  if ( v9 )
    v10 = v9(*((_QWORD *)v8 + 36));
  else
    v10 = -1073741822;
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v15 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v15);
    WdLogGlobalForLineNumber = 4200;
  }
  if ( v6 && *((_DWORD *)v6 + 12) != v7 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v7, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  if ( v10 != -1073741822 && v10 != -1073741801 && v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4202;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v16);
  return (unsigned int)v10;
}
