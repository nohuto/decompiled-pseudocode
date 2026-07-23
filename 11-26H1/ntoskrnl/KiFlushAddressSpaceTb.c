/*
 * XREFs of KiFlushAddressSpaceTb @ 0x140251858
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushProcessTb @ 0x14047DA1C (KeFlushProcessTb.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     KeFlushEntireTb @ 0x1405F3530 (KeFlushEntireTb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140252764 (HvlpFastFlushAddressSpaceTb.c)
 *     KxSetTimeStampBusy @ 0x140252AF4 (KxSetTimeStampBusy.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140252B78 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402F3498 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1402F38FC (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404629F0 (HvlpSlowFlushAddressSpaceTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // r10
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // r8

  v4 = a3;
  v5 = a1;
  if ( a1 )
  {
    if ( a2 )
      goto LABEL_3;
LABEL_4:
    if ( (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTb(v5, a2, a3);
    else
      return HvlpFastFlushAddressSpaceTb(v5, a2, a3);
  }
  if ( !a2 )
  {
    if ( (_BYTE)a4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 12 )
        __writecr8(0xCuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
      }
      if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
      {
        LOBYTE(v8) = v4;
        if ( (HvlEnlightenments & 0x80u) == 0 )
          HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v8);
        else
          HvlpFastFlushAddressSpaceTb(0LL, 0LL, v8);
        _InterlockedIncrement(&KiTbFlushTimeStamp);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    goto LABEL_4;
  }
LABEL_3:
  if ( !(unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a4) )
    goto LABEL_4;
  if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowFlushAddressSpaceTbEx(v5);
  else
    return HvlpFastFlushAddressSpaceTbEx(v5);
}
