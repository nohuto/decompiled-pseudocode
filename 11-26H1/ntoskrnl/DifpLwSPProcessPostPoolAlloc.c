/*
 * XREFs of DifpLwSPProcessPostPoolAlloc @ 0x140C491EC
 * Callers:
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140C49190 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140C491B0 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140C491D0 (DifpExFreePool_LwSP_Enter.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14047E9E4 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall DifpLwSPProcessPostPoolAlloc(ULONG_PTR a1)
{
  __int64 result; // rax

  result = ExIsSpecialPoolAddress(a1);
  if ( (_DWORD)result )
    _InterlockedIncrement64((volatile signed __int64 *)&stru_140F06A28.CurrentRunTime);
  DifpSpecialPoolEnabled = 0;
  return result;
}
