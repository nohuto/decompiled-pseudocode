/*
 * XREFs of ?GetDigitalVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x140280D00
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x14009DCD0 (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetDigitalVideoInputParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  unsigned __int8 *v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int8 *v5; // rcx

  v2 = 0LL;
  v3 = **((_QWORD **)this + 3);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = (unsigned __int8 *)(v3 + 24);
  if ( v4 >= 0x80 )
    v2 = v5;
  return EDIDV1_ObtainMonitorDigitalVideoInputParams(v2, a2);
}
