/*
 * XREFs of MiReleasePteCopyList @ 0x1404D9ACC
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, *(unsigned __int64 **)(a1 + 16), v1);
  return result;
}
