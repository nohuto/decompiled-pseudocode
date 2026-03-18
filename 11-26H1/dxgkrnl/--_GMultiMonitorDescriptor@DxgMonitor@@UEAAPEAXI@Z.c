/*
 * XREFs of ??_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140098FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140098F80 (--1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::MultiMonitorDescriptor *__fastcall DxgMonitor::MultiMonitorDescriptor::`scalar deleting destructor'(
        DxgMonitor::MultiMonitorDescriptor *this,
        char a2)
{
  DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
