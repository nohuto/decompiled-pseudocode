/*
 * XREFs of ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800C584C
 * Callers:
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800CA568 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowBeginPosition(
        CWindowPropertyTracker *this,
        HWND a2,
        struct tagPOINT *a3)
{
  int Record; // eax
  _QWORD *v5; // rcx
  unsigned int v6; // r11d
  __int64 v7; // rax

  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v7 = *(_QWORD *)(*v5 + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v7 + 40) & 4) != 0 )
    {
      v6 = 0;
      *a3 = *(struct tagPOINT *)(v7 + 48);
    }
  }
  return v6;
}
