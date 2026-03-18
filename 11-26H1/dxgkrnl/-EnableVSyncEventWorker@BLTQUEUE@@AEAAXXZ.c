/*
 * XREFs of ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140446010
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14004D29C (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140283D74 (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventWorker(BLTQUEUE *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 103) + 1;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 103) = v1;
  BLTQUEUE::StartVSync((__int64)this, 0, 5);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~8u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else if ( !(unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
  {
    *((_BYTE *)this + 659) = 0;
  }
}
