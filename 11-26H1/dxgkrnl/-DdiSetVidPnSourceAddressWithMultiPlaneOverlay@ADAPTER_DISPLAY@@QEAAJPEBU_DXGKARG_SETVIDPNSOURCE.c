/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY@@@Z @ 0x14000B310
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay @ 0x14000B670 (ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  struct DXGTHREAD *Current; // rax
  KIRQL v17; // al
  __int64 v18; // [rsp+60h] [rbp-29h] BYREF
  __int64 v19; // [rsp+68h] [rbp-21h]
  char v20; // [rsp+70h] [rbp-19h]
  _BYTE v21[8]; // [rsp+78h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-9h] BYREF

  LODWORD(v18) = -1;
  v19 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v20 = 1;
    LODWORD(v18) = 5120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5120LL);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 5120);
  if ( KeGetCurrentIrql() <= 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1019;
    DxgkLogInternalTriageEvent(
      0,
      262146,
      -1,
      (unsigned int)L"KeGetCurrentIrql() > DISPATCH_LEVEL",
      1019LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( KeGetCurrentIrql() >= 0xFu )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1020;
    DxgkLogInternalTriageEvent(
      0,
      262146,
      -1,
      (unsigned int)L"KeGetCurrentIrql() < PROFILE_LEVEL",
      1020LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 12);
  else
    v8 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v21, this[2]);
  v9 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *))this[2] + 109))(
         *((_QWORD *)this[2] + 36),
         a2);
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v17);
    WdLogGlobalForLineNumber = 1030;
  }
  if ( v7 && *((_DWORD *)v7 + 12) != v8 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v8, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  if ( (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1033;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v14,
          v13,
          v15,
          0,
          0,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          v18,
          v19);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, (unsigned int)v18);
  return (unsigned int)v9;
}
