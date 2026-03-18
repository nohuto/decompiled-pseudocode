/*
 * XREFs of ??_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z @ 0x1400838B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1402142B8 (-DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 */

DXGVIRTUALGPUMANAGER *__fastcall DXGVIRTUALGPUMANAGER::`scalar deleting destructor'(
        DXGVIRTUALGPUMANAGER *this,
        char a2)
{
  *(_QWORD *)this = &DXGVIRTUALGPUMANAGER::`vftable';
  DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
