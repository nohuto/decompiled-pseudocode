/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140283A74
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x140193088 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14041C384 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  struct DXGSWAPCHAIN **v2; // rcx
  int v3; // eax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
  v2 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( v2 )
  {
    v3 = SwapChainAbandonInternal(*v2);
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(3LL, **((_QWORD **)this + 354), v3);
      WdLogGlobalForLineNumber = 2991;
    }
    ObfDereferenceObject(*((PVOID *)this + 354));
    *((_QWORD *)this + 354) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2840), 0);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~2u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_BYTE *)this + 657) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
}
