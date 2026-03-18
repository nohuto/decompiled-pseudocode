/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x14047FC40
 * Callers:
 *     MiModwriterConfirmMdl @ 0x140408738 (MiModwriterConfirmMdl.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePagefilePeakUsage(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)a1 - ((*(_BYTE *)(a1 + 172) & 0x40) != 0 ? 5 : 2) - *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 16) < (unsigned int)result )
    *(_DWORD *)(a1 + 16) = result;
  return result;
}
