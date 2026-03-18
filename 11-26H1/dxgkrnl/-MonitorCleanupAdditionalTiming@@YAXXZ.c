/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x140275ACC
 * Callers:
 *     ?MonitorCleanupGlobal@@YAJXZ @ 0x140005854 (-MonitorCleanupGlobal@@YAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_140169578;
    if ( !qword_140169578 )
      break;
    qword_140169578 = *(void **)qword_140169578;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
  }
}
