/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU@@UEAAPEAXI@Z @ 0x140083880
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

DXGK_VIRTUAL_GPU *__fastcall DXGK_VIRTUAL_GPU::`vector deleting destructor'(DXGK_VIRTUAL_GPU *this, char a2)
{
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
