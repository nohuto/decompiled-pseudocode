/*
 * XREFs of ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x18015FEEC
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18015FA8C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802912E8 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x1802915FC (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CCursorState::EnsureHardwareOverlayCleared(CCursorState *this, struct CCursorState::MonitorData *a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+34h] [rbp-14h]

  if ( *((_BYTE *)a2 + 124) )
  {
    v3 = *(_QWORD *)a2;
    v4 = *((_DWORD *)a2 + 2);
    v5 = 0LL;
    v6 = 0;
    NtHWCursorUpdatePointer(&v3, 0LL);
    *((_BYTE *)a2 + 124) = 0;
  }
}
