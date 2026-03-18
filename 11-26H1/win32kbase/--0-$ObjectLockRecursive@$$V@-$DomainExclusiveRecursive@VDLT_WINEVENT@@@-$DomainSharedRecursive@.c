/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400EADEC
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1400EAD40 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1400EAE4C (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursi.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = UserSessionState + 42344;
  v8 = W32GetUserSessionState(v6, v5, v7);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v8 + 42384;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::lock(a1);
  return a1;
}
