/*
 * XREFs of ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1401ABF70
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x14019FC68 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     SendColorimetricControlToDriverCallback @ 0x1401CF770 (SendColorimetricControlToDriverCallback.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009464 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlModeBehavior(DXGADAPTER *this, struct _DXGKARG_CONTROLMODEBEHAVIOR *a2)
{
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v6; // r12
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *v8; // rax
  int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // al
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+58h] [rbp-41h]
  char v19; // [rsp+60h] [rbp-39h]
  _BYTE v20[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v21[56]; // [rsp+80h] [rbp-19h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 5071);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v20, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (v8 = DXGTHREAD::GetCurrent(), (v7 = v8) != 0LL) )
    v9 = *((_DWORD *)v8 + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v21, this);
  v10 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLMODEBEHAVIOR *))this + 135))(*((_QWORD *)this + 36), a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v21);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v13);
    WdLogGlobalForLineNumber = 154;
  }
  if ( v7 )
  {
    v12 = *((int *)v7 + 12);
    if ( (_DWORD)v12 != v9 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v9, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1213);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v14[3] = v10;
  v14[4] = *((_QWORD *)this + 36);
  v14[5] = a2->Request.Value;
  v14[6] = a2->Satisfied.Value;
  v14[7] = a2->NotSatisfied.Value;
  WdLogGlobalForLineNumber = 161;
  if ( (_DWORD)v10 != -1073741801 && (_DWORD)v10 != -1073741637 && (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 163;
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
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (a2->NotSatisfied.Value & a2->Satisfied.Value) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 172;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pArgControlModeBehavior->Satisfied.Value & pArgControlModeBehavior->NotSatisfied.Value) == 0",
      172LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)v10;
}
