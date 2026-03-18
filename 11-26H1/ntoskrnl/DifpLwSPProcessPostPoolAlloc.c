/*
 * XREFs of DifpLwSPProcessPostPoolAlloc @ 0x140C431DC
 * Callers:
 *     DifpExAllocatePoolWithQuota_LwSP_Exit @ 0x140C43180 (DifpExAllocatePoolWithQuota_LwSP_Exit.c)
 *     DifpExFreePoolWithTag_LwSP_Enter @ 0x140C431A0 (DifpExFreePoolWithTag_LwSP_Enter.c)
 *     DifpExFreePool_LwSP_Enter @ 0x140C431C0 (DifpExFreePool_LwSP_Enter.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x140485074 (ExIsSpecialPoolAddress.c)
 */

__int64 __fastcall DifpLwSPProcessPostPoolAlloc(ULONG_PTR a1)
{
  __int64 result; // rax

  result = ExIsSpecialPoolAddress(a1);
  if ( (_DWORD)result )
    _InterlockedIncrement64((volatile signed __int64 *)&stru_140F066E8.CycleTime);
  DifpSpecialPoolEnabled = 0;
  return result;
}
