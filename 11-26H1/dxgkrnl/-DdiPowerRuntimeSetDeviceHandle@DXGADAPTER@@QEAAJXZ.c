/*
 * XREFs of ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1401B02F4
 * Callers:
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x14019FE04 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
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

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(DXGADAPTER *this)
{
  KIRQL CurrentIrql; // al
  __int64 v4; // r14
  struct DXGTHREAD *v5; // rdi
  struct DXGTHREAD *Current; // rax
  int v7; // ebp
  __int64 v8; // rsi
  KIRQL v9; // al
  __int64 v10; // rcx
  int v11; // [rsp+50h] [rbp-78h] BYREF
  __int64 v12; // [rsp+58h] [rbp-70h]
  char v13; // [rsp+60h] [rbp-68h]
  _BYTE v14[56]; // [rsp+68h] [rbp-60h] BYREF

  if ( !*((_QWORD *)this + 107) )
    return 3221225474LL;
  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 5127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 5127);
  _InterlockedIncrement((volatile signed __int32 *)this + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v4 = CurrentIrql;
  v5 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v5 = Current) != 0LL) )
    v7 = *((_DWORD *)Current + 12);
  else
    v7 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v14, this);
  v8 = (*((int (__fastcall **)(_QWORD, _QWORD))this + 107))(*((_QWORD *)this + 36), *((_QWORD *)this + 409));
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v14);
  if ( (_BYTE)v4 != KeGetCurrentIrql() )
  {
    v9 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v4, v9);
    WdLogGlobalForLineNumber = 2671;
  }
  if ( v5 && *((_DWORD *)v5 + 12) != v7 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v5 + 12), v7, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1213);
  if ( (_DWORD)v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2673;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  }
  return (unsigned int)v8;
}
