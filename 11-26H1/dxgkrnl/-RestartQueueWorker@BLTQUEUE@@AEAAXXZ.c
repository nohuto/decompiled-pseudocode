/*
 * XREFs of ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140446740
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402830B8 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::RestartQueueWorker(BLTQUEUE *this)
{
  struct _KMUTANT *v2; // rdi

  v2 = (struct _KMUTANT *)((char *)this + 600);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    KeReleaseMutex(v2, 0);
  }
  BLTQUEUE::DiscardPendingPresent(this);
  *(_QWORD *)((char *)this + 516) = 0LL;
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~0x80u;
    KeReleaseMutex(v2, 0);
  }
  else
  {
    *((_BYTE *)this + 663) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
}
