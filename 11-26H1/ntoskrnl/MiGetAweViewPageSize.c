/*
 * XREFs of MiGetAweViewPageSize @ 0x14047165C
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14047137C (MiDeleteVadAwePtes.c)
 *     MiWriteAwePtesPrepare @ 0x140471C9C (MiWriteAwePtesPrepare.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 *     MiGetAweVadPageSize @ 0x140B4CA44 (MiGetAweVadPageSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweViewPageSize(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 56) & 3;
  if ( v1 == 1 )
    return 16LL;
  if ( v1 == 2 )
    return 512LL;
  result = 0LL;
  if ( v1 == 3 )
    return 0x40000LL;
  return result;
}
