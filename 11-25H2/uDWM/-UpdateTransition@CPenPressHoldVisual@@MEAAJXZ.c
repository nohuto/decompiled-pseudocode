/*
 * XREFs of ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BC700
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180094424 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800BC6A0 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::UpdateTransition(CPenPressHoldVisual *this)
{
  int v2; // ecx
  unsigned int v3; // eax

  v2 = *((_DWORD *)this + 78);
  v3 = (int)(float)((float)*(double *)(*((_QWORD *)this + 33) + 48LL) * (float)v2);
  if ( v3 >= v2 )
    v3 = v2 - 1;
  CImage::SetBitmapSource(*((CImage **)this + 34), *(struct CBitmapSource **)(*((_QWORD *)this + 36) + 8LL * v3));
  if ( *(_BYTE *)(*((_QWORD *)this + 33) + 72LL) )
    CPenPressHoldVisual::StopTimer((CTimelineBase **)this);
  return 0LL;
}
