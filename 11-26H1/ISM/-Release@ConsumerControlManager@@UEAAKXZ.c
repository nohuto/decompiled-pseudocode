/*
 * XREFs of ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E5790
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E336C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ??1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ @ 0x1800E4FF4 (--1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E51E4 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800E52B8 (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E5698 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800E5920 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Shutdown@ConsumerControlManager@@AEAAXXZ @ 0x1800E57C8 (-Shutdown@ConsumerControlManager@@AEAAXXZ.c)
 */

__int64 __fastcall ConsumerControlManager::Release(InputContext *dwData)
{
  unsigned int v2; // ebx

  v2 = InputContext::Release(dwData);
  if ( v2 == 1 )
    ConsumerControlManager::Shutdown((ULONG_PTR)dwData);
  return v2;
}
