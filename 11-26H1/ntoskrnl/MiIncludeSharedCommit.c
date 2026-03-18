/*
 * XREFs of MiIncludeSharedCommit @ 0x14044F630
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1404808D0 (MiReleaseControlAreaCharges.c)
 *     MiVadHasSharedCommit @ 0x140961F50 (MiVadHasSharedCommit.c)
 *     MiInsertSharedCommitNode @ 0x1409C6360 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1409C9EE8 (MiUpdateProcessSharedCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) == 0 )
  {
    if ( (v1 & 0x400) != 0 )
      return 0LL;
    if ( (struct _KTHREAD *)a1 == stru_140E2D150.WaitBlock[0].Thread )
      return 0LL;
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
      return 0LL;
    while ( !(_DWORD)v2 )
    {
      if ( (void *)a1 == stru_140E2D150.Teb )
        return 0LL;
      LODWORD(v2) = 1;
    }
  }
  return 1LL;
}
