/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1401D3EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14025AE74 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(void *Src)
{
  __int64 v2; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r14
  __int64 v4; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *Current; // rdi
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  struct DXGADAPTER *v14; // rdi
  unsigned int v15; // r9d
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int active; // esi
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // [rsp+28h] [rbp-140h]
  int v25; // [rsp+50h] [rbp-118h] BYREF
  __int64 v26; // [rsp+58h] [rbp-110h]
  char v27; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v28; // [rsp+68h] [rbp-100h] BYREF
  DXGADAPTER *v29[2]; // [rsp+70h] [rbp-F8h] BYREF
  void *Srca[2]; // [rsp+80h] [rbp-E8h] BYREF
  size_t Size; // [rsp+90h] [rbp-D8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32[3]; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v33[144]; // [rsp+B0h] [rbp-B8h] BYREF

  LOBYTE(v32[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v32, 0LL, 0x2Cu, 0);
  v3 = v32[1];
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2037);
  Current = DXGPROCESS::GetCurrent();
  v32[2] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 6820;
    v8 = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v8,
      0LL,
      0LL,
      0LL);
LABEL_17:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    v13 = -1073741811;
LABEL_26:
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v32);
    return (unsigned int)v13;
  }
  *(_OWORD *)Srca = 0LL;
  Size = 0LL;
  RtlCopyFromUser(Srca, Src, 0x18uLL);
  v28 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v29,
    (unsigned int)Srca[0],
    (struct _KTHREAD **)Current,
    &v28,
    1);
  v9 = (int *)v28;
  if ( !v28 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, Current, LODWORD(Srca[0]));
    WdLogGlobalForLineNumber = 6845;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x DXGPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      (__int64)Current,
      LODWORD(Srca[0]),
      0LL,
      0LL);
LABEL_16:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v29, v10);
    goto LABEL_17;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v28, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
  if ( v13 < 0 )
  {
LABEL_23:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v29, v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    goto LABEL_26;
  }
  if ( v9[761] > 1000 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = v9;
    WdLogGlobalForLineNumber = 6866;
LABEL_15:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    goto LABEL_16;
  }
  v14 = 0LL;
  v15 = Size;
  if ( (_DWORD)Size )
  {
    if ( !Srca[1] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 6878;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver data size is not zero for a NULL driver data buffer.",
        6878LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_15;
    }
    v17 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, 256LL);
    v14 = v17;
    v28 = v17;
    if ( !v17 )
    {
      v13 = -1073741801;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 6892;
      goto LABEL_23;
    }
    RtlCopyFromUser(v17, Srca[1], (unsigned int)Size);
    v15 = Size;
  }
  active = DmmInvalidateActiveVidPn((DXGADAPTER *)v9, DXGK_AVIR_USERMODE, v14, v15, v3, v24);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v29, v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v32);
  return active;
}
