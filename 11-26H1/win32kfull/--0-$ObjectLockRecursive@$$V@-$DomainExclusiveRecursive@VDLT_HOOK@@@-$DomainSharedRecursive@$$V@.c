/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x140026BC8
 * Callers:
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x140026CF4 (-zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z.c)
 * Callees:
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x140026C30 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  DLT = DLT_HOOK::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42384;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::lock(a1);
  return a1;
}
