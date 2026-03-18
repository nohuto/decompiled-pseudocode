/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x14026C5E0
 * Callers:
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     IopFreeBandwidthContract @ 0x140B6E8DC (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x14027006C (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL); !result; result = IopAllocateIrpExReturn(a1, v2, 0LL) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
