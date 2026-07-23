/*
 * XREFs of RtlpHpLfhSlotActiveSubsegmentReset @ 0x180063AC0
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLfhSlotActiveSubsegmentReset(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  int v4; // edx

  v1 = 0LL;
  v2 = _InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  result = v2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v2 & 0xFFF) != 0 )
    v1 = v2 & 0xFFFFFFFFFFFFF000uLL;
  v4 = v2 & 0xFFF;
  if ( v4 )
    *(_WORD *)(v1 + 32) += v4;
  return result;
}
