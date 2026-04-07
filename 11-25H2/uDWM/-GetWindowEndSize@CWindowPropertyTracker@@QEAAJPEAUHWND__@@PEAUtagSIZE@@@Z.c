/*
 * XREFs of ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180044954
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x1800C8D88 (-_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CAB00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD310 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndSize(CWindowPropertyTracker *this, HWND a2, struct tagSIZE *a3)
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
    if ( (*(_BYTE *)(v8 + 40) & 2) != 0 )
    {
      v6 = 0;
      *a3 = *(struct tagSIZE *)(v8 + 112);
    }
  }
  return v6;
}
