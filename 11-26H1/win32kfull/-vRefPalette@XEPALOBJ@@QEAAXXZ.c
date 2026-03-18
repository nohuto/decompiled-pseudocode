/*
 * XREFs of ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x140237E98
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vRefPalette(XEPALOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *(_QWORD *)this )
  {
    v2 = Gre::Base::Globals(this);
    INC_SHARE_REF_CNT(v2, *(_QWORD *)this);
  }
}
