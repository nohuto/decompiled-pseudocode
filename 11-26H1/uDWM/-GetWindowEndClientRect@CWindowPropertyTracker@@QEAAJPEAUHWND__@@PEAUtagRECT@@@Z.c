/*
 * XREFs of ?GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180018E2C
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180018EC0 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndClientRect(
        CWindowPropertyTracker *this,
        HWND a2,
        struct tagRECT *a3)
{
  int Record; // eax
  _QWORD *v4; // rcx
  unsigned int v5; // r10d
  _OWORD *v6; // r11
  __int64 v8; // rcx

  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(*v4 + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v8 + 40) & 8) != 0 )
    {
      v5 = 0;
      *v6 = *(_OWORD *)(v8 + 120);
    }
  }
  return v5;
}
