/*
 * XREFs of KscpSetUserMemorySmap @ 0x140C64DA0
 * Callers:
 *     <none>
 * Callees:
 *     KscpSetUserMemory @ 0x140C64C80 (KscpSetUserMemory.c)
 */

__int64 __fastcall KscpSetUserMemorySmap(unsigned __int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  __asm { stac }
  result = KscpSetUserMemory(a1, a2, a3);
  __asm { clac }
  return result;
}
