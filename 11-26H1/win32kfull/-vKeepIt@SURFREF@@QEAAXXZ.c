/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1401F66A8
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1400151B0 (GreSelectRedirectionBitmap.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vKeepIt(SURFREF *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  v2 = Gre::Base::Globals(this);
  INC_SHARE_REF_CNT(v2, *((_QWORD *)this + 4));
}
