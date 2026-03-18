/*
 * XREFs of ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402FA8D0
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140295E70 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402F9E60 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
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
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiValidateSubmitCommand(
        ADAPTER_RENDER *this,
        struct _DXGKARG_VALIDATESUBMITCOMMAND *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r14
  struct DXGTHREAD *v6; // rbx
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  KIRQL v14; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-88h] BYREF
  int v16; // [rsp+58h] [rbp-80h] BYREF
  __int64 v17; // [rsp+60h] [rbp-78h]
  char v18; // [rsp+68h] [rbp-70h]
  _BYTE v19[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5136);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v6 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v6 = DxgThread) != 0LL)) )
  {
    v7 = *((_DWORD *)v6 + 12);
  }
  else
  {
    v7 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v19,
    *((struct DXGADAPTER **)this + 2));
  v8 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_VALIDATESUBMITCOMMAND *))(*((_QWORD *)this + 2) + 1360LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
         a2);
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v14 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v14);
    WdLogGlobalForLineNumber = 3338;
  }
  if ( v6 )
  {
    v10 = *((int *)v6 + 12);
    if ( (_DWORD)v10 != v7 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v7, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = v8;
  v11[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
  v11[5] = a2->Commands;
  WdLogGlobalForLineNumber = 3343;
  if ( (_DWORD)v8 != -1073741592 && (_DWORD)v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3345;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}
