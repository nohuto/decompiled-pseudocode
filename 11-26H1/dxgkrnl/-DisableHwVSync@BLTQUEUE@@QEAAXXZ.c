/*
 * XREFs of ?DisableHwVSync@BLTQUEUE@@QEAAXXZ @ 0x140282FA4
 * Callers:
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1402837AC (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall BLTQUEUE::DisableHwVSync(BLTQUEUE *this)
{
  if ( *((_QWORD *)this + 89) )
  {
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)this + 167);
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 167);
    }
  }
}
