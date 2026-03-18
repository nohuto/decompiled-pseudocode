/*
 * XREFs of ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1403ADF00
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

MONITORSCOUNT_CALLBACK_CONTEXT *__fastcall MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT(
        MONITORSCOUNT_CALLBACK_CONTEXT *this)
{
  char v1; // di
  DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGSESSIONDATA *SessionData; // rax

  v1 = 0;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = -1;
  *(_DWORD *)((char *)this + 25) = 257;
  *(_WORD *)((char *)this + 29) = 0;
  *((_BYTE *)this + 31) = 0;
  *((_DWORD *)this + 8) = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v4, v5, v6);
  if ( !SessionData || !*((_BYTE *)SessionData + 18499) )
    v1 = 1;
  *((_BYTE *)this + 24) = v1;
  return this;
}
