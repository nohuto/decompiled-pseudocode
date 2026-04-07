/*
 * XREFs of ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78
 * Callers:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180043950 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18004489C (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800448E0 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180044954 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004499C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800449E4 (-GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180044A2C (-GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800C584C (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z @ 0x1800C5890 (-GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowPropertyTracker::_FindRecord(CWindowPropertyTracker *this, HWND a2)
{
  unsigned int v2; // r10d
  __int64 i; // r9

  v2 = -1;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    if ( **(HWND **)(*(_QWORD *)this + 8 * i) == a2 )
      return (unsigned int)i;
  }
  return v2;
}
