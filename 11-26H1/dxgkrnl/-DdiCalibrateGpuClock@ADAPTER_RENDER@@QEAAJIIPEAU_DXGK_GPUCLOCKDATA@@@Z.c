/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1400098A4
 * Callers:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x140054D38 (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ADAPTER_RENDER_DdiCalibrateGpuClock @ 0x14005C780 (ADAPTER_RENDER_DdiCalibrateGpuClock.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x14038AB98 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        struct DXGADAPTER **this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  int v4; // esi
  unsigned int v6; // edi
  __int64 v7; // r13
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v10; // rbx
  int v11; // eax
  KIRQL CurrentIrql; // al
  __int64 v13; // r14
  struct DXGTHREAD *v14; // rbx
  struct DXGTHREAD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  KIRQL v20; // al
  __int64 v21; // [rsp+30h] [rbp-69h]
  unsigned int v22; // [rsp+50h] [rbp-49h]
  unsigned int v23; // [rsp+58h] [rbp-41h] BYREF
  struct DXGTHREAD *v24; // [rsp+60h] [rbp-39h]
  char v25; // [rsp+68h] [rbp-31h]
  _BYTE v26[8]; // [rsp+70h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-21h] BYREF

  v4 = 0;
  v22 = a3;
  v6 = a3;
  v7 = a2;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 5056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5056LL);
  }
  else
  {
    v25 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v24 = Current;
    v10 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v11 = *((_DWORD *)v10 + 13);
      if ( !v11 )
        *((_DWORD *)v10 + 14) = 5056;
      *((_DWORD *)v10 + 13) = v11 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v13 = CurrentIrql;
  v14 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v15 = DXGTHREAD::GetCurrent();
    v14 = v15;
    if ( v15 )
      v4 = *((_DWORD *)v15 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26, this[2]);
  v16 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))this[2] + 114))(
          *((_QWORD *)this[2] + 36),
          (unsigned int)v7,
          v6,
          a4);
  if ( v26[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v13 != KeGetCurrentIrql() )
  {
    v20 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v20, v21);
    WdLogGlobalForLineNumber = 1729;
  }
  if ( v14 && *((_DWORD *)v14 + 12) != v4 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v14 + 12), v4, 0LL, v21);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  WdLogSingleEntry4(4LL, v16, v7, v22, a4->GpuFrequency);
  WdLogGlobalForLineNumber = 1735;
  WdLogSingleEntry2(4LL, a4->GpuClockCounter, a4->CpuClockCounter);
  WdLogGlobalForLineNumber = 1739;
  if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1741;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v23);
  return (unsigned int)v16;
}
