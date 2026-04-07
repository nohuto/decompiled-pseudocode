/*
 * XREFs of ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800ADEF8
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180025DF0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::SetSourceRect(CDCompDesktopThumbnailCVI *this, const struct tagRECT *a2)
{
  HMONITOR v3; // rax
  unsigned int v4; // ebx

  v3 = MonitorFromRect(a2, 0);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = v3;
    return 0;
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x21Eu, 0LL);
  }
  return v4;
}
