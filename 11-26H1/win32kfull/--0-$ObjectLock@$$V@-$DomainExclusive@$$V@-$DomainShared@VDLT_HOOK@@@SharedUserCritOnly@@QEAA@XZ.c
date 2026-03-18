/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x140039FC0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  int v9; // esi
  __int64 v10; // rdi
  tagDomLock *v11; // rcx

  DLT = DLT_HOOK::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 0;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42384;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v7, v6) == 1 )
  {
    v8 = *(_BYTE *)(a1 + 40) == 0;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v8 )
    {
      v9 = 0;
      v10 = a1;
      do
      {
        v11 = *(tagDomLock **)v10;
        if ( *(_QWORD *)v10 )
        {
          if ( *(_BYTE *)(v10 + 8) )
            tagDomLock::LockExclusive(v11);
          else
            tagDomLock::LockShared(v11);
        }
        ++v9;
        v10 += 16LL;
      }
      while ( !v9 );
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  return a1;
}
