/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1400EB264
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1400EB12C (RIMGetCurrentPowerInputMode.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x140136574 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1401AF7C0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400EAFD0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

__int64 __fastcall DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  PERESOURCE *v11; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = UserSessionState + 42376;
  v8 = W32GetUserSessionState(v6, v5, v7);
  *(_BYTE *)(a1 + 24) = 0;
  v9 = a1;
  *(_QWORD *)(a1 + 16) = v8 + 42384;
  *(_QWORD *)(a1 + 32) = 0LL;
  v10 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v11 = *(PERESOURCE **)v9;
    if ( *(_QWORD *)v9 )
    {
      if ( *(_BYTE *)(v9 + 8) )
        tagDomLock::LockExclusive(v11);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*v11);
    }
    ++v10;
    v9 += 16LL;
  }
  while ( !v10 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
