/*
 * XREFs of ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x140058DF8
 * Callers:
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402288E0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403704B0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

void *__fastcall DXGPROCESS::GetKmdProcessHandle(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rdi
  DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( (unsigned int)v2 >= DXGGLOBAL::GetMaximumGlobalAdapterCount(Global)
    || !*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2) )
  {
    return 0LL;
  }
  _mm_lfence();
  return *(void **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2) + 48LL);
}
