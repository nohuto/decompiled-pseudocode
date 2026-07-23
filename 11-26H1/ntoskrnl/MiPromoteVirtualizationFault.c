/*
 * XREFs of MiPromoteVirtualizationFault @ 0x1407044DC
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14038DDEC (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 */

unsigned __int64 __fastcall MiPromoteVirtualizationFault(
        signed __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx

  v5 = a5;
  if ( _bittest((const signed __int32 *)(a2 + 56), 9u)
    && (a5 & 0x40) == 0
    && (a5 & 2) == 0
    && (a5 & 0x200) == 0
    && (a5 & 0x800) != 0
    && MiOkToSetPteDirtyForNotValidFault(a5, a3) )
  {
    MiValidWriteFaultProcess(a1, a5);
    v5 = a5 | 0x42;
    if ( a3 == (__int64)(a4 << 25) >> 16 )
      MiWriteValidPteNewProtection((__int64 *)a4, v5);
    else
      MiRewritePteWithLockBit(a1, 0, a4, v5);
  }
  return v5;
}
