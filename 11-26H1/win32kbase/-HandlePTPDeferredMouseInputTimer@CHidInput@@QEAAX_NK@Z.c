/*
 * XREFs of ?HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1402195A0
 * Callers:
 *     ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1401B05BC (-UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x140135A68 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandlePTPDeferredMouseInputTimer(CHidInput *this, __int64 a2, int a3)
{
  __int64 v3; // rbx
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0x11u, 1);
  DueTime.QuadPart = -10000 * v3;
  ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
}
