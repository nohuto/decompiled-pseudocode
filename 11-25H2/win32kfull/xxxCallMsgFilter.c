/*
 * XREFs of xxxCallMsgFilter @ 0x14001FA20
 * Callers:
 *     NtUserCallMsgFilter @ 0x1400207A0 (NtUserCallMsgFilter.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v8; // ebx
  unsigned int DLT; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  char *v13; // rbx
  tagDomLock *v14; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-40h]
  char v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  char v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  char v20; // [rsp+48h] [rbp-18h]
  char v21; // [rsp+50h] [rbp-10h]

  v2 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 576 || ((v6 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  DLT = DLT_HOOK::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v16 = 0;
  v18 = 0;
  v17 = W32GetUserSessionState(v11, v10) + 42360;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v21 = 1;
    v12 = 0;
    v13 = &v16;
    do
    {
      v14 = (tagDomLock *)*((_QWORD *)v13 - 1);
      if ( v14 )
      {
        if ( *v13 )
          tagDomLock::LockExclusive(v14);
        else
          tagDomLock::LockShared(v14);
      }
      ++v12;
      v13 += 16;
    }
    while ( !v12 );
    v20 = 1;
  }
  if ( ((*(_BYTE *)(v5 + 720) | *(_BYTE *)(**(_QWORD **)(v5 + 504) + 16LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(v2, 0LL, a1, 6) )
  {
    if ( v21 && v20 && DomainLockRef )
    {
      if ( v16 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return 1LL;
  }
  else
  {
    if ( ((*(_BYTE *)(v5 + 720) | *(_BYTE *)(**(_QWORD **)(v5 + 504) + 16LL)) & 1) == 0 )
    {
      if ( v21 && v20 && DomainLockRef )
      {
        if ( v16 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
      return 0LL;
    }
    v8 = xxxCallHook(v2, 0LL, a1, -1);
    if ( v21 && v20 && DomainLockRef )
    {
      if ( v16 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return v8;
  }
}
