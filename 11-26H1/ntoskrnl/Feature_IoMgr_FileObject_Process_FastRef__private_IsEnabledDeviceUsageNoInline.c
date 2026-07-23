/*
 * XREFs of Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x1404EDE04
 * Callers:
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback @ 0x140535398 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback.c)
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
