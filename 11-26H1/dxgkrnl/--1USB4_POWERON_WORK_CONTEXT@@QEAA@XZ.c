/*
 * XREFs of ??1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ @ 0x140098AAC
 * Callers:
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x140098B18 (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140061264 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 */

void __fastcall USB4_POWERON_WORK_CONTEXT::~USB4_POWERON_WORK_CONTEXT(USB4_POWERON_WORK_CONTEXT *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)this + 1);
}
