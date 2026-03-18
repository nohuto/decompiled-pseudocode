/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14001DD30
 * Callers:
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 *     _BuildPropList @ 0x140143534 (_BuildPropList.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2)
{
  __int64 UserSessionState; // rax
  tagObjLock **v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  tagObjLock *v10; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_BYTE *)(a1 + 8) = 0;
  v5 = (tagObjLock **)(a1 + 16);
  *(_QWORD *)a1 = UserSessionState + 42360;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( !IS_USERCRIT_OWNED_SHAREDONLY() )
    return a1;
  *(_BYTE *)(a1 + 40) = 1;
  v8 = W32GetUserSessionState(v7, v6);
  v9 = 0;
  v10 = 0LL;
  if ( a2 != (tagObjLock *)(v8 + 42456) )
    v10 = a2;
  *v5 = v10;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    do
    {
      if ( *v5 )
        tagObjLock::LockExclusive(*v5);
      ++v9;
      ++v5;
    }
    while ( !v9 );
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
