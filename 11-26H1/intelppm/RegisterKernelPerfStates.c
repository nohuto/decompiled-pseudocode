/*
 * XREFs of RegisterKernelPerfStates @ 0x140039860
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x140037F74 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
