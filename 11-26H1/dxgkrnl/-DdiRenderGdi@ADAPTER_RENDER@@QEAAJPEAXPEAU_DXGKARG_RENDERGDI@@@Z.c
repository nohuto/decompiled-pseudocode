/*
 * XREFs of ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x1402A4F2C
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
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
 *     ?EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1401B3B7C (-EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRenderGdi(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDERGDI *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGADAPTER **v7; // r15
  struct DXGTHREAD *v8; // rsi
  int v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  KIRQL v16; // al
  KIRQL CurrentIrql; // [rsp+50h] [rbp-E8h]
  int v19; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+78h] [rbp-C0h]
  char v21; // [rsp+80h] [rbp-B8h]
  ADAPTER_RENDER *v22; // [rsp+88h] [rbp-B0h]
  void *v23; // [rsp+90h] [rbp-A8h]
  struct _DXGKARG_RENDERGDI *v24; // [rsp+A0h] [rbp-98h]
  char *v25; // [rsp+B0h] [rbp-88h]
  _BYTE v26[24]; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v27[56]; // [rsp+D0h] [rbp-68h] BYREF

  v22 = this;
  v23 = a2;
  v24 = a3;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 5066);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v26, Current);
  v7 = (struct DXGADAPTER **)((char *)this + 16);
  v25 = (char *)this + 16;
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u )
    v8 = DXGTHREAD::GetCurrent();
  if ( v8 )
    v9 = *((_DWORD *)v8 + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v27, *v7);
  v10 = (*((__int64 (__fastcall **)(void *, struct _DXGKARG_RENDERGDI *))*v7 + 116))(a2, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v27);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v16 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, CurrentIrql, v16);
    WdLogGlobalForLineNumber = 3303;
  }
  if ( v8 )
  {
    v12 = *((int *)v8 + 12);
    if ( (_DWORD)v12 != v9 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v8 + 12), v9, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)*v7 + 1213);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v13[3] = (int)v10;
  v13[4] = a2;
  v13[5] = a3->pDmaBuffer;
  v13[6] = a3->DmaSize;
  v13[7] = a3->pAllocationList;
  WdLogGlobalForLineNumber = 3310;
  if ( v10 != -1073741816
    && v10 != -1073741811
    && v10 != -1073741801
    && v10 != -1073741592
    && v10 != -1071775743
    && v10 != -1071775232
    && v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3312;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      (int)v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*v7);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  return v10;
}
