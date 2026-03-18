/*
 * XREFs of ?RestorePendingDisplayChangeInfoOld@CInterceptWindowProp@@SAXPEAUtagWND@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CC6C8
 * Callers:
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402CB58C (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

void __fastcall CInterceptWindowProp::RestorePendingDisplayChangeInfoOld(
        struct tagWND *a1,
        struct AdvancedWindowPos::WindowAction *a2)
{
  struct CInterceptWindowProp *v3; // rax
  int v4; // edx
  _OWORD *v5; // rcx
  _DWORD *v6; // r8
  __int64 v7; // r9

  v3 = CInterceptWindowProp::GetOrCreate(a1);
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 56) )
      *((_DWORD *)a2 + 1) |= 0x1000u;
    if ( !IsRectEmptyInl((const struct tagRECT *)((char *)v3 + 72)) )
    {
      *v6 |= 0x4000u;
      *(_OWORD *)((char *)a2 + 76) = *v5;
    }
    if ( *(_DWORD *)(v7 + 88) != v4 )
    {
      *v6 |= 0x8000u;
      *((_DWORD *)a2 + 23) = *(_DWORD *)(v7 + 88);
    }
    *(_BYTE *)(v7 + 56) = v4;
    *v5 = 0LL;
    *(_DWORD *)(v7 + 88) = v4;
  }
}
