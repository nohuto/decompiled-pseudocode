/*
 * XREFs of ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x140095D60
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14005B174 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1401735A8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14017B158 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  __int64 v3; // rax
  char v6; // si
  char v7; // cl
  __int64 v8; // rax

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
  if ( v7 )
  {
    *(_DWORD *)(v3 + 244) &= ~4u;
    *(_QWORD *)(v3 + 296) = 0LL;
    DEC_SHARE_REF_CNT(*((_QWORD *)this + 18));
    EtwDwmSpriteLogicalSurfUnBindEvent(*(_QWORD *)this, **((_QWORD **)this + 18));
  }
  *((_QWORD *)this + 18) = a3;
  if ( v6 )
  {
    INC_SHARE_REF_CNT(a3);
    v8 = *(_QWORD *)this;
    *((_DWORD *)a3 + 61) |= 4u;
    *((_QWORD *)a3 + 37) = v8;
    EtwDwmSpriteLogicalSurfBindEvent(*(_QWORD *)this, *(_QWORD *)a3);
  }
}
