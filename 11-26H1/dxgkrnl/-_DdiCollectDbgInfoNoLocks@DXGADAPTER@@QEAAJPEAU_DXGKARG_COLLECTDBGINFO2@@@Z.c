/*
 * XREFs of ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z @ 0x14038A744
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
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

__int64 __fastcall DXGADAPTER::_DdiCollectDbgInfoNoLocks(DXGADAPTER *this, struct _DXGKARG_COLLECTDBGINFO2 *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rsi
  struct DXGTHREAD *Current; // rax
  int v9; // ebp
  __int64 (__fastcall *v10)(_QWORD, struct _DXGKARG_COLLECTDBGINFO2 *); // rax
  unsigned int v11; // edi
  KIRQL v12; // al
  __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+58h] [rbp-80h]
  char v16; // [rsp+60h] [rbp-78h]
  _BYTE v17[56]; // [rsp+68h] [rbp-70h] BYREF

  if ( !*((_QWORD *)this + 75) && !*((_QWORD *)this + 214) )
    return 3221225474LL;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 5023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 5023);
  _InterlockedIncrement((volatile signed __int32 *)this + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v17, this);
  v10 = (__int64 (__fastcall *)(_QWORD, struct _DXGKARG_COLLECTDBGINFO2 *))*((_QWORD *)this + 214);
  if ( !v10 )
    v10 = (__int64 (__fastcall *)(_QWORD, struct _DXGKARG_COLLECTDBGINFO2 *))*((_QWORD *)this + 75);
  v11 = v10(*((_QWORD *)this + 36), a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v17);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v12 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v12);
    WdLogGlobalForLineNumber = 2718;
  }
  if ( v7 && *((_DWORD *)v7 + 12) != v9 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v9, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1213);
  WdLogSingleEntry5(
    4LL,
    (int)v11,
    *((_QWORD *)this + 36),
    *(unsigned int *)a2,
    *((_QWORD *)a2 + 1),
    *((_QWORD *)a2 + 2));
  WdLogGlobalForLineNumber = 2725;
  if ( v11 != -1073741823 && v11 != -1073741801 && v11 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2727;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      (int)v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  }
  return v11;
}
