/*
 * XREFs of Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404F4824
 * Callers:
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback @ 0x140532EFC (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback.c)
 */

__int64 Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IoMgr_FileObject_Process_FastRef__private_featureState & 0x10) != 0 )
    return Feature_IoMgr_FileObject_Process_FastRef__private_featureState & 1;
  else
    return Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback(
             (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_featureState,
             3LL);
}
