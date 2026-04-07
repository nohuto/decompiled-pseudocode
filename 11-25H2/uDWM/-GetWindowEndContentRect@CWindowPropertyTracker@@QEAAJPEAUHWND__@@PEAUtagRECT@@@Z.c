/*
 * XREFs of ?GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180044A2C
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndContentRect(
        CWindowPropertyTracker *this,
        HWND a2,
        struct tagRECT *a3)
{
  int Record; // eax
  _QWORD *v5; // rcx
  unsigned int v6; // r11d
  __int64 v8; // rcx

  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(*v5 + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v8 + 40) & 0x10) != 0 )
    {
      v6 = 0;
      *a3 = *(struct tagRECT *)(v8 + 136);
    }
  }
  return v6;
}
