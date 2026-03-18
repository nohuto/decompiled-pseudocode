/*
 * XREFs of ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x140008998
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140008F8C (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall UNDOGRETHREADPIDLOCKS::vUndo(UNDOGRETHREADPIDLOCKS *this)
{
  struct _GRETHREAD *CurrentThread; // rdi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  Gre::Base *v5; // rcx
  __int64 v6; // rsi
  Gre::Base *v7; // rcx
  __int64 v8; // rdi

  CurrentThread = GreGetCurrentThread();
  v4 = Gre::Base::Globals(v3);
  if ( CurrentThread && !GrepIsLockOwnedByCurrentThread((HSEMAPHORE)(*(_QWORD *)v4 + 1040LL)) )
  {
    *(_QWORD *)this = *((_QWORD *)CurrentThread + 37);
    *((_QWORD *)this + 1) = *((_QWORD *)CurrentThread + 38);
    Gre::Base::Globals(v5);
    v6 = *(_QWORD *)this;
    Gre::Base::Globals(v7);
    *((_WORD *)this + 8) = 0;
    v8 = *((_QWORD *)this + 1);
    if ( v6 && (*(_DWORD *)(v6 + 36) & 0x4000) != 0 )
    {
      SURFACE::bUnMap(*(SURFACE **)(v6 + 496));
      *((_BYTE *)this + 16) = 1;
    }
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
      {
        SURFACE::bUnMap(*(SURFACE **)(v8 + 496));
        *((_BYTE *)this + 17) = 1;
      }
    }
  }
}
