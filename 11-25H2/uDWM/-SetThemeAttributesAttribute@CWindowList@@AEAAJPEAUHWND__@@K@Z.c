/*
 * XREFs of ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180092E60
 * Callers:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18007C6F0 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180055740 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::SetThemeAttributesAttribute(CWindowList *this, HWND a2, int a3)
{
  unsigned int v4; // ebx
  CWindowData *v5; // rcx
  int v6; // eax
  CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v8);
  v5 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)v8 + 103) != a3 )
    {
      *((_DWORD *)v8 + 103) = a3;
      v6 = CWindowData::OnWindowStyleUpdated(v5);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1521u, 0LL);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
