/*
 * XREFs of ?GetMetricsForCaptionBarEx@CWindowData@@QEBAHH_N@Z @ 0x180021844
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x18002165C (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowData::GetMetricsForCaptionBarEx(CWindowData *this, unsigned int a2, char a3)
{
  __int64 v4; // rdx

  if ( a3 )
    v4 = *((unsigned int *)this + 82);
  else
    v4 = *((unsigned int *)this + 87);
  return GetSystemMetricsForDpi(a2, v4);
}
