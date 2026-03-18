/*
 * XREFs of ?PresentNeeded@COverlayContext@@QEBA_NXZ @ 0x1801928C0
 * Callers:
 *     ?PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ @ 0x180192858 (-PresentNeeded@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ @ 0x18019288C (-PresentNeeded@CLegacyRenderTarget@@IEBA_NXZ.c)
 * Callees:
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801B529C (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 */

bool __fastcall COverlayContext::PresentNeeded(COverlayContext *this)
{
  __int64 v1; // rax
  CDirectFlipInfo *v2; // rcx

  if ( *((_BYTE *)this + 19052) != *((_BYTE *)this + 19124) )
    return 1;
  if ( *((_DWORD *)this + 4762) != *((_DWORD *)this + 4780) )
    return 1;
  v1 = *((_QWORD *)this + 1586);
  if ( 0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 1587) - v1) >> 3) != *((_DWORD *)this + 4782) )
    return 1;
  while ( v1 != *((_QWORD *)this + 1587) )
  {
    if ( *(_BYTE *)(v1 + 366) )
      return 1;
    v1 += 392LL;
  }
  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 2411);
  return v2 && CDirectFlipInfo::PresentNeeded(v2);
}
