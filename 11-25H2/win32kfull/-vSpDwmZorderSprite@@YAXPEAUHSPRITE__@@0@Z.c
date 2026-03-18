/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x140091F8C
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 * Callees:
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400920E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x140092120 (DwmAsyncZorderSprite.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  Gre::Base *v3; // rcx
  Gre::Base *v4; // rdx
  Gre::Base **v5; // rax
  struct Gre::Base::SESSION_GLOBALS *v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _BYTE v14[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  _BYTE v16[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+68h] [rbp-10h]

  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v14, a1);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v16, a2);
  if ( v15 )
  {
    v3 = (Gre::Base *)((v15 + 24) & -(__int64)(v15 != 0));
    v4 = *(Gre::Base **)v3;
    if ( *(Gre::Base **)(*(_QWORD *)v3 + 8LL) == v3 )
    {
      v5 = *(Gre::Base ***)(((v15 + 24) & -(__int64)(v15 != 0)) + 8);
      if ( *v5 == v3 )
      {
        *v5 = v4;
        *((_QWORD *)v4 + 1) = v5;
        v6 = Gre::Base::Globals(v3);
        v7 = v15 + 24;
        if ( v17 )
        {
          v8 = (_QWORD *)(v7 & -(__int64)(v15 != 0));
          v9 = (_QWORD *)((v17 + 24) & -(__int64)(v17 != 0));
          v10 = *v9;
          if ( *(_QWORD **)(*v9 + 8LL) == v9 )
          {
            *v8 = v10;
            v8[1] = v9;
            *(_QWORD *)(v10 + 8) = v8;
            *v9 = v8;
LABEL_7:
            v11 = (void *)UserReferenceDwmApiPort(v9);
            DwmAsyncZorderSprite(v11);
            goto LABEL_8;
          }
        }
        else
        {
          v12 = *((_QWORD *)v6 + 17) + 80LL;
          v13 = (_QWORD *)(v7 & -(__int64)(v15 != 0));
          v9 = *(_QWORD **)v12;
          if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 )
          {
            *v13 = v9;
            v13[1] = v12;
            v9[1] = v13;
            *(_QWORD *)v12 = v13;
            goto LABEL_7;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_8:
  DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v16);
  DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v14);
}
