/*
 * XREFs of ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x140080C9C
 * Callers:
 *     ??1DXGDODPRESENT@@QEAA@XZ @ 0x1402822A4 (--1DXGDODPRESENT@@QEAA@XZ.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED754 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x140282270 (--1BLTQUEUE@@QEAA@XZ.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::`scalar deleting destructor'(BLTQUEUE *this, char a2)
{
  BLTQUEUE::~BLTQUEUE(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
