/*
 * XREFs of ??0?$UnlockObjectLockBase@$$V@?$UnlockDomainExclusiveBase@VDLT_CLIENTLIB@@@?$UnlockDomainSharedBase@$$V@@IEAA@XZ @ 0x14017BBD0
 * Callers:
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14017BB84 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockDomainSharedBase<>::UnlockDomainExclusiveBase<DLT_CLIENTLIB>::UnlockObjectLockBase<>::UnlockObjectLockBase<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  DLT = DLT_CLIENTLIB::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42360;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  return a1;
}
