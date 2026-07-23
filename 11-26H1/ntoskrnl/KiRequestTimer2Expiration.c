/*
 * XREFs of KiRequestTimer2Expiration @ 0x1404475C4
 * Callers:
 *     KiAdjustTimer2DueTimes @ 0x140339568 (KiAdjustTimer2DueTimes.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiSetDpcRequestFlag @ 0x140447660 (KiSetDpcRequestFlag.c)
 */

__int64 KiRequestTimer2Expiration()
{
  int v0; // edi
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+2Ch] [rbp-1Ch]

  v0 = KiClockTimerOwner;
  v1 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  result = KiSetDpcRequestFlag(v1 + 14524, 8LL);
  if ( (result & 0xA9) == 0 )
  {
    result = (__int64)KeGetCurrentPrcb();
    if ( result == v1 )
    {
      if ( *(_BYTE *)(v1 + 32) )
      {
        *(_BYTE *)(v1 + 6) = 1;
      }
      else
      {
        LOBYTE(v4) = 2;
        return HalRequestSoftwareInterrupt(v4, v3);
      }
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = 6LL;
      v7 = v0;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v8 = 0LL;
      return HalpInterruptSendIpi((unsigned int *)&v6, 0x2Fu);
    }
  }
  return result;
}
