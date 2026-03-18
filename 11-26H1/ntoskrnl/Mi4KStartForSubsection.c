/*
 * XREFs of Mi4KStartForSubsection @ 0x1404937B0
 * Callers:
 *     MiCreatePagingFileControlArea @ 0x1409B8144 (MiCreatePagingFileControlArea.c)
 *     MiCreateDataFileMap @ 0x140A565D8 (MiCreateDataFileMap.c)
 *     MiAllocateExtendSubsections @ 0x140A58514 (MiAllocateExtendSubsections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mi4KStartForSubsection(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 36) = a2;
  result = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = (WORD2(a2) << 6) ^ (result ^ (WORD2(a2) << 6)) & 0xFFFF003F;
  return result;
}
