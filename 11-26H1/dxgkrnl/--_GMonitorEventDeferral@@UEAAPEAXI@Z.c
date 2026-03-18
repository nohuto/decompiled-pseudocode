/*
 * XREFs of ??_GMonitorEventDeferral@@UEAAPEAXI@Z @ 0x1400987C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x14041BAA8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

MonitorEventDeferral *__fastcall MonitorEventDeferral::`scalar deleting destructor'(
        MonitorEventDeferral *this,
        char a2)
{
  MonitorEventDeferral::~MonitorEventDeferral(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
