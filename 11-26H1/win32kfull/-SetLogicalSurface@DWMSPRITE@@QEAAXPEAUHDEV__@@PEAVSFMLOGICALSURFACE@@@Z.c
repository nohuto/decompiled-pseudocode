/*
 * XREFs of ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A3ED4
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14009D340 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  __int64 v3; // rax
  char v6; // bp
  char v7; // si
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  struct Gre::Base::SESSION_GLOBALS *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = *((_QWORD *)this + 18);
  if ( v3 || !a3 )
  {
    v6 = 0;
    if ( v3 && !a3 )
    {
      v7 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = 1;
  }
  v7 = 0;
LABEL_8:
  if ( *((_DWORD *)this + 29) == 3 )
    *((_DWORD *)this + 29) = 1;
  v8 = Gre::Base::Globals(this);
  v9 = v8;
  if ( v7 )
  {
    v10 = *((_QWORD *)this + 18);
    *(_DWORD *)(v10 + 244) &= ~4u;
    *(_QWORD *)(v10 + 296) = 0LL;
    DEC_SHARE_REF_CNT(v8, *((_QWORD *)this + 18));
    EtwDwmSpriteLogicalSurfUnBindEvent(*(_QWORD *)this, **((_QWORD **)this + 18));
  }
  *((_QWORD *)this + 18) = a3;
  if ( v6 )
  {
    INC_SHARE_REF_CNT(v9, a3);
    v11 = *(_QWORD *)this;
    *((_DWORD *)a3 + 61) |= 4u;
    *((_QWORD *)a3 + 37) = v11;
    EtwDwmSpriteLogicalSurfBindEvent(*(_QWORD *)this, *(_QWORD *)a3);
  }
}
