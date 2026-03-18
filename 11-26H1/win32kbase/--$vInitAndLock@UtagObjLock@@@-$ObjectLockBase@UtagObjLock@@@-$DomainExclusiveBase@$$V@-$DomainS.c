/*
 * XREFs of ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x1400DE0EC
 * Callers:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400DE084 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401EA218 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1400DE460 (-LockExclusive@tagObjLock@@QEBAXXZ.c)
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2,
        int a3)
{
  tagObjLock **v4; // rdi
  __int64 UserSessionState; // rax
  tagObjLock *v7; // r8
  bool v8; // zf
  int v9; // ebx

  v4 = (tagObjLock **)(a1 + 16);
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v7 = 0LL;
  if ( a2 != (tagObjLock *)(UserSessionState + 42480) )
    v7 = a2;
  v8 = *(_BYTE *)(a1 + 32) == 0;
  *v4 = v7;
  if ( v8 )
  {
    v9 = 0;
    do
    {
      if ( *v4 )
        tagObjLock::LockExclusive(*v4);
      ++v9;
      ++v4;
    }
    while ( !v9 );
    *(_BYTE *)(a1 + 32) = 1;
  }
}
