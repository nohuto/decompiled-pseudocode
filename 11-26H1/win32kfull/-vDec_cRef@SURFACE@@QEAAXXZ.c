/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400766D8
 * Callers:
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x140076628 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  v2 = Gre::Base::Globals(this);
  DEC_SHARE_REF_CNT(v2, this);
  if ( (*((_DWORD *)this + 42))-- == 1 )
    *((_QWORD *)this + 20) = 0LL;
}
