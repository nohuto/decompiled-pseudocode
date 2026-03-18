/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14000AB78
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetVidPnSourceAddress @ 0x14000AEE0 (ADAPTER_DISPLAY_DdiSetVidPnSourceAddress.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        struct DXGADAPTER **this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  char v5; // r13
  struct DXGADAPTER *v6; // rcx
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rdi
  int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v19; // al
  unsigned int v20; // [rsp+50h] [rbp-39h] BYREF
  __int64 v21; // [rsp+58h] [rbp-31h]
  char v22; // [rsp+60h] [rbp-29h]
  _BYTE v23[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5010LL);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 5010);
  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(this[2], 1LL);
    v5 = 1;
  }
  v6 = this[2];
  if ( *((int *)v6 + 761) < 1105 )
  {
    v11 = (*((__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))v6 + 80))(
            *((_QWORD *)v6 + 36),
            a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 1213);
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 12);
    else
      v10 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v23, this[2]);
    v11 = (*((__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))this[2] + 80))(
            *((_QWORD *)this[2] + 36),
            a2);
    if ( v23[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v19 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v19);
      WdLogGlobalForLineNumber = 956;
    }
    if ( v9 )
    {
      v13 = *((int *)v9 + 12);
      if ( (_DWORD)v13 != v10 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v9 + 12), v10, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
  v14[3] = (int)v11;
  v14[4] = a2->VidPnSourceId;
  v14[5] = a2->PrimarySegment;
  v14[6] = a2->PrimaryAddress.QuadPart;
  v14[7] = a2->hAllocation;
  WdLogGlobalForLineNumber = 979;
  if ( v11 != -1073741811 && v11 != -1073741801 && v11 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 981;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      (int)v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 )
    DXGADAPTER::ReleaseDdiSync(this[2]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v20);
  return v11;
}
