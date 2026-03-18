/*
 * XREFs of ?DxgkGetFeatureDescriptor@@YAPEBUDXGK_FEATURE_DESC@@W4_DXGK_FEATURE_ID@@@Z @ 0x14028930C
 * Callers:
 *     ?VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227C60 (-VmBusIsFeatureEnabled@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227D00 (-VmBusIsFeatureEnabled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetFeatureDescriptor(unsigned int a1)
{
  if ( (a1 & 0xFFFFFFF) >= *((_DWORD *)&g_FeatureDescriptorTables + 4 * ((unsigned __int64)a1 >> 28) + 2) )
    return 0LL;
  else
    return *((_QWORD *)&g_FeatureDescriptorTables + 2 * ((unsigned __int64)a1 >> 28)) + 6LL * (a1 & 0xFFFFFFF);
}
