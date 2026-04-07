/*
 * XREFs of ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180067B30
 * Callers:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180067AA0 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180067C80 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::SetThemeAttributesAttribute(CWindowList *this, HWND a2, int a3)
{
  unsigned int v4; // ebx
  CWindowData *v5; // rcx
  int v7; // eax
  struct CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v8);
  v5 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)v8 + 103) != a3 )
    {
      *((_DWORD *)v8 + 103) = a3;
      v7 = CWindowData::OnWindowStyleUpdated(v5);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1642u, 0LL);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
