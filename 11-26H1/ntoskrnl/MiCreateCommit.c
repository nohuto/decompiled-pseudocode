/*
 * XREFs of MiCreateCommit @ 0x1404C9260
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIssuePageExtendRequest @ 0x14049E560 (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x1404B61B4 (MiCauseOverCommitPopup.c)
 */

__int64 __fastcall MiCreateCommit(__int64 a1, unsigned __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  volatile LONG *v7; // rbx
  volatile LONG *v10; // rcx
  KIRQL v11; // si
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // ebp
  int v16; // eax

  v7 = (volatile LONG *)(a1 + 17272);
  v10 = (volatile LONG *)(a1 + 17272);
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockShared(v10);
  }
  v12 = *(_QWORD *)(a1 + 23104);
  v13 = *(_QWORD *)(a1 + 23448);
  v14 = a2 + v12;
  if ( a2 + v12 <= v12 || v14 + a6 < v14 || v14 + a6 <= v13 )
  {
    if ( v11 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v7);
    else
      ExReleaseSpinLockShared(v7, v11);
  }
  else
  {
    if ( (a3 & 2) != 0 )
    {
      if ( v11 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(v7);
      else
        ExReleaseSpinLockShared(v7, v11);
      return 3221225773LL;
    }
    if ( v13 == *(_QWORD *)(a1 + 17224) )
    {
      if ( v11 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(v7);
      else
        ExReleaseSpinLockShared(v7, v11);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 23540));
      if ( (ULONG *)a1 != &MiSystemPartition )
        return 3221225773LL;
      v15 = a3 & 1;
      v16 = MiIssuePageExtendRequest(a1, a2, 2 * (unsigned __int8)v15 + 8, 0);
      if ( v15 )
        return 3221225773LL;
      if ( v16 )
        return 0LL;
      goto LABEL_19;
    }
    if ( v11 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v7);
    else
      ExReleaseSpinLockShared(v7, v11);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 23544));
      MiIssuePageExtendRequest(a1, 0x1000uLL, 2, 0);
      return 3221225773LL;
    }
    if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0, 0xFFu) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 23536));
LABEL_19:
      MiCauseOverCommitPopup(a1);
      return 3221225773LL;
    }
  }
  return 3221226029LL;
}
