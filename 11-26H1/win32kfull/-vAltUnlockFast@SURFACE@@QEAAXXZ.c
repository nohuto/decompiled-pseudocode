/*
 * XREFs of ?vAltUnlockFast@SURFACE@@QEAAXXZ @ 0x14023A214
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E398 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E808 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAltUnlockFast(SURFACE *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( this )
  {
    v2 = Gre::Base::Globals(this);
    DEC_SHARE_REF_CNT(v2, this);
  }
}
