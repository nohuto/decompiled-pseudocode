/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x140398B0C
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x140050260 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x140283C48 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x140284044 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14000822C (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
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

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(
        DXGADAPTER *this,
        DXGK_INTERRUPT_TYPE a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  KIRQL CurrentIrql; // al
  __int64 v9; // r13
  struct DXGTHREAD *v10; // rsi
  struct DXGTHREAD *Current; // rax
  int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  KIRQL v19; // al
  struct _DXGKARG_CONTROLINTERRUPT2 v20; // [rsp+50h] [rbp-49h]
  int v21; // [rsp+58h] [rbp-41h] BYREF
  __int64 v22; // [rsp+60h] [rbp-39h]
  char v23; // [rsp+68h] [rbp-31h]
  _BYTE v24[8]; // [rsp+70h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-21h] BYREF

  v4 = a3;
  v6 = a2;
  if ( *((int *)this + 761) >= 1300 && *((_QWORD *)this + 112) )
  {
    v20.InterruptType = a2;
    v20.InterruptState = a3 == 0;
    return DXGADAPTER::DdiControlInterrupt2(this, v20, 0LL, a4);
  }
  else
  {
    v21 = -1;
    v22 = 0LL;
    if ( (qword_1401664C0 & 2) != 0 )
    {
      v23 = 1;
      v21 = 5038;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
    }
    else
    {
      v23 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 5038);
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1213);
    CurrentIrql = KeGetCurrentIrql();
    v9 = CurrentIrql;
    v10 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v10 = Current) != 0LL) )
      v12 = *((_DWORD *)Current + 12);
    else
      v12 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24, this);
    LOBYTE(v13) = v4;
    v14 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 87))(*((_QWORD *)this + 36), (unsigned int)v6, v13);
    if ( v24[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v9 != KeGetCurrentIrql() )
    {
      v19 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v19);
      WdLogGlobalForLineNumber = 1823;
    }
    if ( v10 )
    {
      v16 = *((int *)v10 + 12);
      if ( (_DWORD)v16 != v12 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v12, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1213);
    if ( (_DWORD)v6 == 3 && (int)v14 >= 0 )
    {
      LOBYTE(v16) = v4;
      PoNotifyVSyncChange(v16);
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
    v17[3] = v14;
    v17[4] = v6;
    v17[5] = v4;
    WdLogGlobalForLineNumber = 1836;
    if ( (_DWORD)v14 != -1073741823 && (_DWORD)v14 != -1073741822 && (_DWORD)v14 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1838;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v14;
  }
}
