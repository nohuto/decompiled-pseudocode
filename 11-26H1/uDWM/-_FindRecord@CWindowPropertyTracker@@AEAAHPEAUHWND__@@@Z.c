/*
 * XREFs of ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180018EC0
 * Callers:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180017A20 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180018470 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180018DA4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180018DE8 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180018E2C (-GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180018E74 (-GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x1800604B0 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800BEF6C (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z @ 0x1800BEFB0 (-GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowPropertyTracker::_FindRecord(CWindowPropertyTracker *this, HWND a2)
{
  __int64 result; // rax

  for ( result = 0LL; (unsigned int)result < *((_DWORD *)this + 6); result = (unsigned int)(result + 1) )
  {
    if ( **(HWND **)(*(_QWORD *)this + 8 * result) == a2 )
      return result;
  }
  return 0xFFFFFFFFLL;
}
