/*
 * XREFs of ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14028230C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

__int64 __fastcall BLTQUEUE::AcquireOwnershipWorker(BLTQUEUE *this)
{
  struct _KMUTANT *v2; // rdi
  __int64 v3; // rsi

  v2 = (struct _KMUTANT *)((char *)this + 600);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    v3 = *((_QWORD *)this + 86);
    KeReleaseMutex(v2, 0);
  }
  else
  {
    v3 = *((_QWORD *)this + 86);
  }
  KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v3 + 40) + 56LL));
  *((_DWORD *)this + 268) |= 1u;
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~1u;
    KeReleaseMutex(v2, 0);
  }
  else
  {
    *((_BYTE *)this + 656) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
  return 0LL;
}
