/*
 * XREFs of ?GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x140280A60
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x14009DB94 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetAnalogVideoInputParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
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
  return EDIDV1_ObtainMonitorAnalogVideoInputParams(v2, a2);
}
