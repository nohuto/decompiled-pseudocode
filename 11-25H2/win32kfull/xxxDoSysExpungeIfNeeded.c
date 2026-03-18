/*
 * XREFs of xxxDoSysExpungeIfNeeded @ 0x14001F490
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxDoSysExpunge @ 0x14017B8FC (xxxDoSysExpunge.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxDoSysExpungeIfNeeded(__int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rbx
  __int64 v6; // rdx
  int v7; // edi
  tagDomLock *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+28h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+48h] [rbp-20h]

  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v14 = 1;
  v16 = 0;
  v5 = &v14;
  v15 = W32GetUserSessionState(v4, v3) + 42360;
  v17 = 0LL;
  v7 = 0;
  v18 = 0;
  do
  {
    v8 = (tagDomLock *)*((_QWORD *)v5 - 1);
    if ( v8 )
    {
      if ( *v5 )
        tagDomLock::LockExclusive(v8);
      else
        tagDomLock::LockShared(v8);
    }
    ++v7;
    v5 += 16;
  }
  while ( !v7 );
  v18 = 1;
  v10 = *(unsigned int *)(W32GetUserSessionState(v8, v6) + 41316);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 464) + 384LL) != (_DWORD)v10 )
  {
    v11 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 41316);
    *(_DWORD *)(*(_QWORD *)(a1 + 464) + 384LL) = v11;
    if ( (*(_DWORD *)(W32GetUserSessionState(v12, v11) + 41312) & *(_DWORD *)(*(_QWORD *)(a1 + 464) + 388LL)) != 0 )
      xxxDoSysExpunge(a1);
  }
  if ( v18 && DomainLockRef )
  {
    if ( v14 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
