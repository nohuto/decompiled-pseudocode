/*
 * XREFs of HalpKdSetupDebuggingDevice @ 0x140C187C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpFindDevice @ 0x140C18214 (HalpFindDevice.c)
 *     HalpAllocateScratchMemory @ 0x140C182E8 (HalpAllocateScratchMemory.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140C18590 (HalpKdEnumerateDebuggingDevices.c)
 *     HalpRegisterDeviceInUse @ 0x140C189D4 (HalpRegisterDeviceInUse.c)
 */

__int64 __fastcall HalpKdSetupDebuggingDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // edi
  struct _KTHREAD *Device; // rax
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *Flink; // rcx

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 18) )
    return 0LL;
  v5 = *(_OWORD *)(a2 + 168);
  v6 = *(_OWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 19) || (result = HalpKdEnumerateDebuggingDevices(0LL, a2), (int)result >= 0) )
  {
    if ( *(_QWORD *)(a2 + 184)
      || (*(_OWORD *)(a2 + 168) = v5,
          *(_OWORD *)(a2 + 184) = v6,
          result = HalpAllocateScratchMemory(a1, a2),
          (int)result >= 0) )
    {
      *(_BYTE *)(a2 + 18) = 1;
      v7 = HalpRegisterDeviceInUse(a2);
      if ( v7 < 0 )
      {
        if ( *(_DWORD *)(a2 + 220) != 3 )
        {
          Device = HalpFindDevice(a2);
          if ( Device )
          {
            v9 = *(struct _LIST_ENTRY **)&Device->Header.Lock;
            if ( *(struct _KTHREAD **)(*(_QWORD *)&Device->Header.Lock + 8LL) != Device
              || (Flink = Device->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != Device) )
            {
              __fastfail(3u);
            }
            Flink->Flink = v9;
            v9->Blink = Flink;
            --*(_DWORD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[32];
          }
        }
        *(_BYTE *)(a2 + 18) = 0;
      }
      return (unsigned int)v7;
    }
  }
  return result;
}
