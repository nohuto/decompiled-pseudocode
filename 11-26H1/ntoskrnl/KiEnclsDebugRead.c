/*
 * XREFs of KiEnclsDebugRead @ 0x14072CBC0
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x140B49468 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
