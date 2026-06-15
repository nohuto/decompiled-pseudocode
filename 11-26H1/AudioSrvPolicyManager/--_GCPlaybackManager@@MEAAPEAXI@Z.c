/*
 * XREFs of ??_GCPlaybackManager@@MEAAPEAXI@Z @ 0x180041330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPlaybackManager *__fastcall CPlaybackManager::`scalar deleting destructor'(CPlaybackManager *this, char a2)
{
  *((_BYTE *)this + 16) = 1;
  *(_QWORD *)this = &CPlaybackManager::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
