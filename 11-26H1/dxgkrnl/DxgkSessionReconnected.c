/*
 * XREFs of DxgkSessionReconnected @ 0x1403B4E10
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
 *     OutputDuplRemoteSessionReconnected @ 0x140193D34 (OutputDuplRemoteSessionReconnected.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403B4FCC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x140409050 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 v6; // rbx
  DXGGLOBAL *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13[2]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  char v16; // [rsp+70h] [rbp-10h]

  v2 = (unsigned __int8)a1;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2199);
  DxgkLogCodePointPacket(0x6Du, 6u, v2, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 123), 1u);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76306) )
    {
      LOBYTE(v13[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v13, 0LL, 0x3Fu, 0);
      v5 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v13[1], 0x200000000uLL);
      if ( v5 < 0 )
      {
        v6 = v5;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5333;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v6,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76306) = 0;
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v13);
    }
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  v7 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v7, v8, v9, v10);
  if ( SessionData )
    *((_BYTE *)SessionData + 18496) = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  }
}
