/*
 * XREFs of ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401AB7B0
 * Callers:
 *     ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1401C8EDC (-AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
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

__int64 __fastcall DXGADAPTER::DdiCollectDiagnosticInfo(DXGADAPTER *this, struct _DXGKARG_COLLECTDIAGNOSTICINFO *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r14
  struct DXGTHREAD *v7; // rdi
  struct DXGTHREAD *Current; // rax
  int v9; // ebp
  __int64 v10; // rsi
  KIRQL v11; // al
  __int64 v12; // rcx
  int v13; // [rsp+50h] [rbp-88h] BYREF
  __int64 v14; // [rsp+58h] [rbp-80h]
  char v15; // [rsp+60h] [rbp-78h]
  _BYTE v16[56]; // [rsp+68h] [rbp-70h] BYREF

  if ( !*((_QWORD *)this + 174) )
    return 3221225474LL;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 5141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 5141);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1213);
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v16, this);
  v10 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_COLLECTDIAGNOSTICINFO *))this + 174))(
          *((_QWORD *)this + 27),
          a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v16);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v11 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v11);
    WdLogGlobalForLineNumber = 4862;
  }
  if ( v7 && *((_DWORD *)v7 + 12) != v9 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v9, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1213);
  WdLogSingleEntry5(
    4LL,
    v10,
    *((_QWORD *)this + 27),
    *((_QWORD *)this + 36),
    *((int *)a2 + 2),
    *((unsigned int *)a2 + 55));
  WdLogGlobalForLineNumber = 4869;
  if ( (_DWORD)v10 != -1073741823 && (_DWORD)v10 != -1073741801 && (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4871;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  }
  return (unsigned int)v10;
}
