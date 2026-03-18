/*
 * XREFs of ?DdiDsiTransmission@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1401AEDEC
 * Callers:
 *     ?DdiDsiTransmission@KernelDriver@@UEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x14027E7E0 (-DdiDsiTransmission@KernelDriver@@UEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 * Callees:
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
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiDsiTransmission(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _DXGK_DSI_TRANSMISSION *a3)
{
  KIRQL CurrentIrql; // al
  __int64 v7; // r14
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // ebp
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, struct _DXGK_DSI_TRANSMISSION *); // rax
  int v13; // edi
  KIRQL v14; // al
  __int64 v15; // rcx
  int v17; // [rsp+50h] [rbp-98h] BYREF
  __int64 v18; // [rsp+58h] [rbp-90h]
  char v19; // [rsp+60h] [rbp-88h]
  _BYTE v20[56]; // [rsp+68h] [rbp-80h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 5145);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v20,
    *((struct DXGADAPTER **)this + 2));
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 1440LL);
  if ( v11 && (v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_DSI_TRANSMISSION *))(v11 + 40)) != 0LL )
    v13 = v12(*(_QWORD *)(v11 + 8), a2, a3);
  else
    v13 = -1073741637;
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v20);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v14 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v14);
    WdLogGlobalForLineNumber = 4949;
  }
  if ( v8 && *((_DWORD *)v8 + 12) != v10 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v8 + 12), v10, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  if ( v13 == -1073741823
    || v13 == -1073741811
    || v13 == -1073741637
    || v13
    && (WdLogSingleEntry1(2LL),
        WdLogGlobalForLineNumber = 4951,
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL),
        v13 < 0) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4960;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The driver failed DxgkDdiDsiTransmission. Status: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)v13;
}
