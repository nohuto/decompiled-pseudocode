/*
 * XREFs of ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1401D7660
 * Callers:
 *     ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226F50 (-VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CDriverStoreCopy::GetNextHardLink(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *a2)
{
  char *v2; // rcx
  char *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r11d

  v2 = (char *)this + 1608;
  v4 = *(char **)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
    __fastfail(3u);
  *(_QWORD *)v2 = v5;
  *(_QWORD *)(v5 + 8) = v2;
  if ( v4 == v2 )
  {
    *(_DWORD *)a2 = -2147483642;
  }
  else
  {
    RtlStringCbCopyW((char *)a2 + 532, 0x208uLL, v4 + 36);
    RtlStringCbCopyW((char *)a2 + 12, v6, *((char **)v4 + 3));
    *((_DWORD *)a2 + 1) = *((_DWORD *)v4 + 4);
    *((_DWORD *)a2 + 2) = *((_DWORD *)v4 + 5);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    *(_DWORD *)a2 = 0;
  }
}
