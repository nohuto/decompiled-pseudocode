/*
 * XREFs of ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1400A1FFC
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x14009CA18 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400A1B40 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1400A3968 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall hspGetNeighborSprite(Gre::Base *a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  __int64 v8; // rbx
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  Gre::Base *v12; // rcx
  Gre::Base *v13; // rdx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int64 v16; // r8
  __int64 v17; // rax

  v4 = a2;
  v6 = 0LL;
  v7 = Gre::Base::Globals(a1);
  v8 = 0LL;
  v10 = Gre::Base::Globals(v9);
  if ( a1 )
  {
    LOBYTE(v11) = 15;
    v8 = HmgShareLock(v10, a1, v11, 0LL);
  }
  if ( v8 )
  {
    v12 = *(Gre::Base **)(v8 + 8 * (v4 ^ 1) + 24);
    v13 = v12;
    if ( !a3 || (v16 = *((_QWORD *)v7 + 28) + 80LL, v12 == (Gre::Base *)v16) )
    {
LABEL_5:
      if ( v13 == (Gre::Base *)(*((_QWORD *)v7 + 28) + 80LL) )
      {
LABEL_7:
        v14 = Gre::Base::Globals(v12);
        DEC_SHARE_REF_CNT(v14, v8);
        return v6;
      }
    }
    else
    {
      v12 = *(Gre::Base **)(v8 + 48);
      while ( 1 )
      {
        v17 = (__int64)v13 + 24;
        if ( !v13 )
          v17 = 48LL;
        if ( v12 == *(Gre::Base **)v17 )
          break;
        if ( !(_BYTE)v4 )
          v13 = (Gre::Base *)((char *)v13 + 8);
        v13 = *(Gre::Base **)v13;
        if ( v13 == (Gre::Base *)v16 )
          goto LABEL_5;
      }
    }
    v12 = (Gre::Base *)((char *)v13 - 24);
    v6 = *(_QWORD *)(((unsigned __int64)v13 - 24) & -(__int64)(v13 != 0LL));
    goto LABEL_7;
  }
  return v6;
}
