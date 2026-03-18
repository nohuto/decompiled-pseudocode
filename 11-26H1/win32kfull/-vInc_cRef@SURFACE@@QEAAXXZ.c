/*
 * XREFs of ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x14007733C
 * Callers:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vInc_cRef(SURFACE *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  v2 = Gre::Base::Globals(this);
  INC_SHARE_REF_CNT(v2, this);
  ++*((_DWORD *)this + 42);
}
