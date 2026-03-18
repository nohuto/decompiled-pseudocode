/*
 * XREFs of ?DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@@Z @ 0x140009EB8
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId @ 0x140009EA0 (ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetInterruptTargetPresentId(
        struct DXGADAPTER **this,
        struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *a2,
        __int64 a3)
{
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v6; // rbx
  int v7; // eax
  KIRQL CurrentIrql; // al
  __int64 v9; // r14
  struct DXGTHREAD *v10; // rbx
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGTHREAD *v16; // rax
  KIRQL v17; // al
  __int64 v18; // [rsp+30h] [rbp-49h]
  unsigned int v19; // [rsp+50h] [rbp-29h] BYREF
  struct DXGTHREAD *v20; // [rsp+58h] [rbp-21h]
  char v21; // [rsp+60h] [rbp-19h]
  _BYTE v22[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5155LL);
  }
  else
  {
    v21 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v20 = Current;
    v6 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v7 = *((_DWORD *)v6 + 13);
      if ( !v7 )
        *((_DWORD *)v6 + 14) = 5155;
      *((_DWORD *)v6 + 13) = v7 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v10 = v16) != 0LL) )
    v11 = *((_DWORD *)v16 + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22, this[2]);
  v12 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *))this[2] + 179))(
          *((_QWORD *)this[2] + 36),
          a2);
  if ( v22[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v17, v18);
    WdLogGlobalForLineNumber = 1172;
  }
  if ( v10 && *((_DWORD *)v10 + 12) != v11 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v11, 0LL, v18);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1213);
  if ( (_DWORD)v12 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1175;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v19);
  return (unsigned int)v12;
}
