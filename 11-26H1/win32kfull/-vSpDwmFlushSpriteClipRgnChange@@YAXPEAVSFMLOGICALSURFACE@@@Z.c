/*
 * XREFs of ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x14009FF5C
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x14014CB00 (GreUpdateSpriteClipRgn.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400A153C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 */

void __fastcall vSpDwmFlushSpriteClipRgnChange(struct SFMLOGICALSURFACE *a1)
{
  int v1; // eax
  unsigned __int64 v3; // rax
  HSPRITE *v4; // rcx

  v1 = *((_DWORD *)a1 + 63);
  if ( (v1 & 0x20) != 0 )
  {
    if ( (v1 & 4) != 0 )
    {
      v3 = SFMLOGICALSURFACE::uiCookie(a1);
      bSpDwmNotifyDirty(v4[37], (struct SFMLOGICALSURFACE *)v4, 2u, v3);
    }
    *((_DWORD *)a1 + 63) &= ~0x20u;
  }
}
