/*
 * XREFs of KiEnclsDebugRead @ 0x140727FF0
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x140B47438 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
