/*
 * XREFs of MiReleasePteCopyList @ 0x1404E03EC
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, *(unsigned __int64 **)(a1 + 16), v1);
  return result;
}
