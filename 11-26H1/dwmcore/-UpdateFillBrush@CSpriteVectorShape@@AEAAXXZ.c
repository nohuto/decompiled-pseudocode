/*
 * XREFs of ?UpdateFillBrush@CSpriteVectorShape@@AEAAXXZ @ 0x180282C68
 * Callers:
 *     ?ProcessSetFillBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETFILLBRUSH@@@Z @ 0x180282984 (-ProcessSetFillBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAP.c)
 *     ?ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY@@@Z @ 0x180282A44 (-ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpriteVectorShape::UpdateFillBrush(CSpriteVectorShape *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 14);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 16);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 79LL) )
        v1 = 0LL;
    }
  }
  *((_QWORD *)this + 13) = v1;
}
