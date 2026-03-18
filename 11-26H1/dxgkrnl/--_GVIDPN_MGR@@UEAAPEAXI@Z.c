/*
 * XREFs of ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1400963A0
 * Callers:
 *     ??_EVIDPN_MGR@@WBA@EAAPEAXI@Z @ 0x140095F40 (--_EVIDPN_MGR@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x140095A48 (--1VIDPN_MGR@@UEAA@XZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::`scalar deleting destructor'(VIDPN_MGR *this, char a2)
{
  VIDPN_MGR::~VIDPN_MGR(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
