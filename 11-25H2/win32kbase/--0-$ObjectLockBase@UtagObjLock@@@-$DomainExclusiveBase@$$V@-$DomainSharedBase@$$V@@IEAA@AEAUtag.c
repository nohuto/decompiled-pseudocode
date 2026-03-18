/*
 * XREFs of ??0?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAA@AEAUtagObjLock@@@Z @ 0x14010F360
 * Callers:
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401C167C (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::ObjectLockBase<tagObjLock>(
        __int64 a1,
        __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = UserSessionState + 42360;
  result = a1;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  return result;
}
