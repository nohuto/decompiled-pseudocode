/*
 * XREFs of DxgkSetPresenterViewMode @ 0x140413F50
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x140011108 (McTemplateK0tt_EtwWriteTransfer.c)
 */

bool __fastcall DxgkSetPresenterViewMode(char a1, char a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  bool v4; // bl

  if ( a2 )
    v2 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 342) == 0;
  else
    v2 = _InterlockedExchange((volatile __int32 *)DXGGLOBAL::GetGlobal() + 342, a1 != 0) == 0;
  v4 = !v2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0tt_EtwWriteTransfer(v3, (__int64)&EventDxgkSetPresenterViewMode);
  return v4;
}
