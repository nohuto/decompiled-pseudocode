/*
 * XREFs of ?DdiUpdateNativeFenceLogs@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_UPDATENATIVEFENCELOGS@@@Z @ 0x14007344C
 * Callers:
 *     ADAPTER_RENDER_DdiUpdateNativeFenceLogs @ 0x140074E70 (ADAPTER_RENDER_DdiUpdateNativeFenceLogs.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140038950 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiUpdateNativeFenceLogs(
        ADAPTER_RENDER *this,
        struct _DXGKARG_UPDATENATIVEFENCELOGS *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r14
  struct DXGTHREAD *v6; // rbx
  struct DXGTHREAD *Current; // rax
  int v8; // esi
  __int64 (__fastcall *v9)(struct _DXGKARG_UPDATENATIVEFENCELOGS *); // rax
  int v10; // edi
  KIRQL v11; // al
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp-78h] BYREF
  __int64 v15; // [rsp+58h] [rbp-70h]
  char v16; // [rsp+60h] [rbp-68h]
  _BYTE v17[56]; // [rsp+68h] [rbp-60h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 5175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 5175);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v17,
    *((struct DXGADAPTER **)this + 2));
  v9 = *(__int64 (__fastcall **)(struct _DXGKARG_UPDATENATIVEFENCELOGS *))(*((_QWORD *)this + 2) + 1704LL);
  if ( v9 )
    v10 = v9(a2);
  else
    v10 = -1073741822;
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v17);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v11 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v11);
    WdLogGlobalForLineNumber = 3961;
  }
  if ( v6 && *((_DWORD *)v6 + 12) != v8 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v8, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  if ( v10 != -1073741822 && v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3963;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return (unsigned int)v10;
}
