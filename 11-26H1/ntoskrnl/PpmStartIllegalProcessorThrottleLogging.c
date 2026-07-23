/*
 * XREFs of PpmStartIllegalProcessorThrottleLogging @ 0x1404F9540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmStartIllegalProcessorThrottleLogging(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 35144) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 35152) = 0;
  return result;
}
