/*
 * XREFs of ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18004489C
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180042DD0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800437FC (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18004485C (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndCloak(CWindowPropertyTracker *this, HWND a2, bool *a3)
{
  int Record; // eax
  _QWORD *v5; // rcx
  unsigned int v6; // r11d
  __int64 v8; // rax

  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(*v5 + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v8 + 40) & 1) != 0 )
    {
      v6 = 0;
      *a3 = *(_BYTE *)(v8 + 100);
    }
  }
  return v6;
}
