/*
 * XREFs of Mi4KStartForSubsection @ 0x14048D2FC
 * Callers:
 *     MiCreatePagingFileControlArea @ 0x140989124 (MiCreatePagingFileControlArea.c)
 *     MiCreateDataFileMap @ 0x140A63B60 (MiCreateDataFileMap.c)
 *     MiAllocateExtendSubsections @ 0x140A65A94 (MiAllocateExtendSubsections.c)
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
