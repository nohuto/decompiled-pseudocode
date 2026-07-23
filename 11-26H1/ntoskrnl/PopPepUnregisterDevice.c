/*
 * XREFs of PopPepUnregisterDevice @ 0x140B08930
 * Callers:
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1404EE33C (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x14052FF40 (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *P)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rax
  int v7; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(P + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)P);
  PopPepRemoveDevice(P, v3, v4, v5);
  v6 = *((int *)P + 42);
  v7 = 0;
  if ( (_DWORD)v6 != 4 )
    v7 = *((_DWORD *)P + v6 + 35);
  PopPepUpdateIdleStateRefCount(v7, 0, 0, (__int64)P, 0xFFFFFFFF);
  if ( *((_DWORD *)P + 45) )
  {
    do
    {
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(P[26 * v2 + 49] + 16), 0, 0, (__int64)P, v2);
      ++v2;
    }
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
