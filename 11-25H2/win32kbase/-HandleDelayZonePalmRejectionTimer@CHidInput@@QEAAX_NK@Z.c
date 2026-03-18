/*
 * XREFs of ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x140212790
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C3C98 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14014CE10 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA790 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandleDelayZonePalmRejectionTimer(CHidInput *this, char a2, int a3)
{
  __int64 v4; // rdi
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 6u, 1);
  if ( a2 )
  {
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000 * v4;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
  }
}
