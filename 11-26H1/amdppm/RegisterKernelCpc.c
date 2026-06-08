/*
 * XREFs of RegisterKernelCpc @ 0x1400356E0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
