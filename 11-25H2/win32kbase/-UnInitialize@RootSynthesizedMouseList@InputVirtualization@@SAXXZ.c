/*
 * XREFs of ?UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ @ 0x1401A07E4
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 */

void __fastcall InputVirtualization::RootSynthesizedMouseList::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  char **v5; // rdi
  char *v6; // rcx
  __int64 v7; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 19488) )
  {
    if ( isChildPartition(v3, v2) )
    {
      v5 = *(char ***)(UserSessionState + 19488);
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == (char *)v5 )
          break;
        if ( *((char ***)v6 + 1) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = (char *)v7;
        *(_QWORD *)(v7 + 8) = v5;
        GreDeleteFastMutex(v6);
      }
    }
    GreDeleteFastMutex(*(char **)(UserSessionState + 19488));
    *(_QWORD *)(UserSessionState + 19488) = 0LL;
  }
}
