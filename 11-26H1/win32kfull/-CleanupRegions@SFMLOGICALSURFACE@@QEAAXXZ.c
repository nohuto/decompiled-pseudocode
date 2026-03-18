/*
 * XREFs of ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x14009E8E4
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14009E81C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::CleanupRegions(SFMLOGICALSURFACE *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 11);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  v3 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  v2 = *(_QWORD *)this;
  *((_QWORD *)this + 10) = 0LL;
  EtwTraceLifetimeAccum(v2, 1LL);
  v3 = *((_QWORD *)this + 16);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  *((_QWORD *)this + 16) = 0LL;
  if ( *((_QWORD *)this + 18) )
  {
    v3 = *((_QWORD *)this + 18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v3 = *((_QWORD *)this + 17);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v3 = *((_QWORD *)this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  }
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 42) = 0;
}
