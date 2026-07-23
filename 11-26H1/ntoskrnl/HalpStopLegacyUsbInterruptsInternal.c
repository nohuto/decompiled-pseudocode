/*
 * XREFs of HalpStopLegacyUsbInterruptsInternal @ 0x140BF4CEC
 * Callers:
 *     HalpStopLegacyUsbInterrupts @ 0x140C0EA70 (HalpStopLegacyUsbInterrupts.c)
 * Callees:
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14059CD08 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14059CE3C (HalpUsbLegacyStopUhciInterrupt.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall HalpStopLegacyUsbInterruptsInternal(int a1)
{
  int v2; // eax
  struct _KTHREAD *Flink; // rdi
  struct _KTHREAD *v4; // rbx
  _WORD v6[32]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v2) = (unsigned __int8)memset_0(v6, 0, sizeof(v6));
  if ( a1 < 5 )
  {
    Flink = (struct _KTHREAD *)IommuInterfaceStateChangeCallbackPushLock.WaitListEntry.Flink;
    while ( Flink != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.216 )
    {
      v4 = Flink;
      Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
      if ( !LOBYTE(v4->SListFaultAddress) && BYTE2(v4->SListFaultAddress) < 0x20u )
      {
        v2 = guard_dispatch_icall_no_overrides(
               LODWORD(v4->Header.WaitListHead.Blink),
               HIDWORD(v4->Header.WaitListHead.Blink));
        if ( v2 )
        {
          LOBYTE(v2) = LOBYTE(v6[0]) - 1;
          if ( (unsigned __int16)(v6[0] - 1) <= 0xFFFDu )
          {
            LOBYTE(v2) = BYTE2(v4->SListFaultAddress);
            if ( (_BYTE)v2 )
            {
              if ( (_BYTE)v2 == 16 )
                LOBYTE(v2) = HalpUsbLegacyStopOhciInterrupt(
                               65533LL,
                               (unsigned int)v4->Header.WaitListHead.Blink,
                               HIDWORD(v4->Header.WaitListHead.Blink));
              else
                LOBYTE(v4->SListFaultAddress) = 1;
            }
            else
            {
              LOBYTE(v2) = HalpUsbLegacyStopUhciInterrupt(
                             65533LL,
                             (unsigned int)v4->Header.WaitListHead.Blink,
                             HIDWORD(v4->Header.WaitListHead.Blink),
                             BYTE1(v4->SListFaultAddress));
            }
          }
        }
      }
    }
  }
  return v2;
}
