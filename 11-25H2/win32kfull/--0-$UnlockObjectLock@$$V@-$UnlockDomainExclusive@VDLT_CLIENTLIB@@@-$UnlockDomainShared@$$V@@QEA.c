/*
 * XREFs of ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14017BB84
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x14017B8FC (xxxDoSysExpunge.c)
 * Callees:
 *     ??0?$UnlockObjectLockBase@$$V@?$UnlockDomainExclusiveBase@VDLT_CLIENTLIB@@@?$UnlockDomainSharedBase@$$V@@IEAA@XZ @ 0x14017BBD0 (--0-$UnlockObjectLockBase@$$V@-$UnlockDomainExclusiveBase@VDLT_CLIENTLIB@@@-$UnlockDomainSharedB.c)
 */

__int64 __fastcall UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(
        __int64 a1)
{
  tagDomLock *v2; // rcx

  UnlockDomainSharedBase<>::UnlockDomainExclusiveBase<DLT_CLIENTLIB>::UnlockObjectLockBase<>::UnlockObjectLockBase<>();
  v2 = *(tagDomLock **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      tagDomLock::UnLockExclusive(v2);
    else
      tagDomLock::UnLockShared(v2);
  }
  *(_BYTE *)(a1 + 40) = 1;
  return a1;
}
