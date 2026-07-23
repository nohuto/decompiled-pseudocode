/*
 * XREFs of HalpKdReleaseDebuggingDevice @ 0x140C18760
 * Callers:
 *     <none>
 * Callees:
 *     HalpFindDevice @ 0x140C18214 (HalpFindDevice.c)
 */

__int64 __fastcall HalpKdReleaseDebuggingDevice(__int64 a1)
{
  struct _KTHREAD *Device; // rax
  struct _LIST_ENTRY *v3; // rdx
  struct _LIST_ENTRY *Flink; // rcx

  if ( *(_DWORD *)(a1 + 220) != 3 )
  {
    Device = HalpFindDevice(a1);
    if ( Device )
    {
      v3 = *(struct _LIST_ENTRY **)&Device->Header.Lock;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&Device->Header.Lock + 8LL) != Device
        || (Flink = Device->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != Device) )
      {
        __fastfail(3u);
      }
      Flink->Flink = v3;
      v3->Blink = Flink;
      --*(_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[32];
    }
  }
  *(_BYTE *)(a1 + 18) = 0;
  return 0LL;
}
