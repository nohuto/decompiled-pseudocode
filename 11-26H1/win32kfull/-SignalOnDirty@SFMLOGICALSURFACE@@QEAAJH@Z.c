/*
 * XREFs of ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1400A191C
 * Callers:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x14009FE38 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 * Callees:
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::SignalOnDirty(SFMLOGICALSURFACE *this, int a2)
{
  int v2; // esi
  struct SfmTokenArray *v4; // rdi
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  unsigned __int64 v6; // rax

  v2 = 0;
  *((_DWORD *)this + 61) = *((_DWORD *)this + 61) & 0xFFFFFFFD | (a2 != 0 ? 2 : 0);
  if ( a2 )
  {
    v4 = (SFMLOGICALSURFACE *)((char *)this + 216);
    if ( *((_DWORD *)this + 57) )
    {
      v5 = Gre::Base::Globals(this);
      v2 = SfmTokenArray::TransferTokens((SfmTokenArray *)(*((_QWORD *)v5 + 543) + 8LL), v4);
      if ( v2 >= 0 )
        SfmSignalTokenEvent();
    }
  }
  v6 = SFMLOGICALSURFACE::uiCookie(this);
  EtwLogicalSurfEnableDirtyNotificationEvent(*(_QWORD *)this, v6);
  return (unsigned int)v2;
}
