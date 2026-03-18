/*
 * XREFs of ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1402254F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14018FE24 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x140225430 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 */

char __fastcall CKernelSensorThread::DeactivateInputProcessing(CKernelSensorThread *this)
{
  char v2; // bl

  v2 = CInputThreadBase::DeactivateInputProcessing(this);
  if ( v2 )
    CKernelSensorThread::DestroyEventHandles(this);
  return v2;
}
