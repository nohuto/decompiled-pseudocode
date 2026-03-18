/*
 * XREFs of ??0?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAA@AEAUtagObjLock@@@Z @ 0x14014CA20
 * Callers:
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401EA218 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::ObjectLockBase<tagObjLock>(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = UserSessionState + 42384;
  result = a1;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  return result;
}
