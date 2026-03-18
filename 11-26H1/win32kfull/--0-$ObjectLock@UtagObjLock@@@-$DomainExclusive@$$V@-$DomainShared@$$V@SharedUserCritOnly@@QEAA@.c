/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14003A9E0
 * Callers:
 *     _BuildPropList @ 0x1401565B8 (_BuildPropList.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2)
{
  __int64 UserSessionState; // rax
  tagObjLock **v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  tagObjLock *v12; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_BYTE *)(a1 + 8) = 0;
  v5 = (tagObjLock **)(a1 + 16);
  *(_QWORD *)a1 = UserSessionState + 42384;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v7, v6) != 1 )
    return a1;
  *(_BYTE *)(a1 + 40) = 1;
  v10 = W32GetUserSessionState(v9, v8);
  v11 = 0;
  v12 = 0LL;
  if ( a2 != (tagObjLock *)(v10 + 42480) )
    v12 = a2;
  *v5 = v12;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    do
    {
      if ( *v5 )
        tagObjLock::LockExclusive(*v5);
      ++v11;
      ++v5;
    }
    while ( !v11 );
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
