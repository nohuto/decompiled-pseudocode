/*
 * XREFs of ?vAltUnlockFast@SURFACE@@QEAAXXZ @ 0x1401E4DB8
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140306E18 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140307288 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vAltUnlockFast(SURFACE *this)
{
  if ( this )
    DEC_SHARE_REF_CNT(this);
}
