/*
 * XREFs of ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1401D150C
 * Callers:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1401D1464 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401D14AC (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITEREF::LockSpriteObj(DWMSPRITEREF *this, HSPRITE a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8

  v4 = Gre::Base::Globals(this);
  if ( a2 )
  {
    LOBYTE(v5) = 15;
    *((_QWORD *)this + 4) = HmgLock(v4, a2, v5, 0LL);
  }
}
