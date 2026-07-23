/*
 * XREFs of HalpRegisterUsbController @ 0x14059C9B4
 * Callers:
 *     HalpUsbLegacyDeviceHandoff @ 0x14059CA40 (HalpUsbLegacyDeviceHandoff.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpRegisterUsbController(__int64 a1, int a2, char a3, char a4)
{
  int v7; // ebp
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v7 = a1;
  result = HalpMmAllocCtxAlloc(a1, 32LL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 16) = v7;
    *(_DWORD *)(result + 20) = a2;
    *(_BYTE *)(result + 26) = a3;
    *(_BYTE *)(result + 25) = a4;
    Blink = IommuInterfaceStateChangeCallbackPushLock.WaitListEntry.Blink;
    if ( IommuInterfaceStateChangeCallbackPushLock.WaitListEntry.Blink->Flink != (struct _LIST_ENTRY *)&IommuInterfaceStateChangeCallbackPushLock.216 )
      __fastfail(3u);
    *(_QWORD *)result = &IommuInterfaceStateChangeCallbackPushLock.216;
    *(_QWORD *)(result + 8) = Blink;
    Blink->Flink = (struct _LIST_ENTRY *)result;
    IommuInterfaceStateChangeCallbackPushLock.WaitListEntry.Blink = (struct _LIST_ENTRY *)result;
  }
  return result;
}
