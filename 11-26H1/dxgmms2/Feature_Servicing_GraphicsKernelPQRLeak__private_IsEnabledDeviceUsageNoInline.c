/*
 * XREFs of Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x140054528
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1400090D0 (VidSchSubmitWaitToHwQueue.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x14002E4FC (VidSchiFreeQueuePacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14004C728 (--1CVidSchSubmitData@@QEAA@XZ.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback @ 0x140054564 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernelPQRLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernelPQRLeak__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernelPQRLeak__private_featureState,
             3LL);
}
