/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140040AD0
 * Callers:
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1400F1384 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     RIMGetCurrentPowerInputMode @ 0x14012E11C (RIMGetCurrentPowerInputMode.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140184450 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140040C50 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BAED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

__int64 __fastcall DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  int v6; // esi
  tagDomLock *v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(13LL);
  *(_BYTE *)(a1 + 8) = 0;
  UserSessionState = W32GetUserSessionState(v3, v2);
  *(_BYTE *)(a1 + 24) = 0;
  v5 = a1;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42360;
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v7 = *(tagDomLock **)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        tagDomLock::LockExclusive(v7);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v7);
    }
    ++v6;
    v5 += 16LL;
  }
  while ( !v6 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
