/*
 * XREFs of DxgkSessionConnected @ 0x1403B4AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403B4FCC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x140409050 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1)
{
  unsigned int v1; // ebx
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rbx
  DXGGLOBAL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11[2]; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+70h] [rbp-10h]

  v1 = (unsigned __int8)a1;
  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2196;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2196);
  DxgkLogCodePointPacket(0x6Du, 4u, v1, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 123), 1u);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76306) )
    {
      LOBYTE(v11[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v11, 0LL, 0x3Fu, 0);
      v3 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v11[1], 0x200000000uLL);
      if ( v3 < 0 )
      {
        v4 = v3;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5118;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76306) = 0;
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v11);
    }
  }
  v5 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v5, v6, v7, v8);
  if ( SessionData )
    *((_BYTE *)SessionData + 18496) = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  }
}
