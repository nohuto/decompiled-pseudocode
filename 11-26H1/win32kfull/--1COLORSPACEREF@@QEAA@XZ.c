/*
 * XREFs of ??1COLORSPACEREF@@QEAA@XZ @ 0x140243FF4
 * Callers:
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140243F08 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     NtGdiSetColorSpace @ 0x140331020 (NtGdiSetColorSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall COLORSPACEREF::~COLORSPACEREF(COLORSPACEREF *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *((_QWORD *)this + 4) )
  {
    v2 = Gre::Base::Globals(this);
    DEC_SHARE_REF_CNT(v2, *((_QWORD *)this + 4));
  }
  PopThreadGuardedObject(this);
}
