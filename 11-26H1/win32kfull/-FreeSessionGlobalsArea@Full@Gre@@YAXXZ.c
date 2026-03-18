/*
 * XREFs of ?FreeSessionGlobalsArea@Full@Gre@@YAXXZ @ 0x14030A6A0
 * Callers:
 *     FreeEditionSessionGlobalsArea @ 0x14030A7C0 (FreeEditionSessionGlobalsArea.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x14034E42C (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall Gre::Full::FreeSessionGlobalsArea(Gre::Full *this, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 SessionState; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx

  SessionState = W32GetSessionState((_DWORD)this, a2);
  if ( *(_QWORD *)(SessionState + 96) )
  {
    v5 = *(_QWORD *)(W32GetSessionState(v3, v2) + 96);
    v6 = *(void **)(v5 + 4832);
    if ( v6 )
    {
      NSInstrumentation::CPointerHashTable::Destroy(v6);
      *(_QWORD *)(v5 + 4832) = 0LL;
    }
    v7 = *(void **)(v5 + 4856);
    if ( v7 )
    {
      Win32FreePool(v7);
      *(_QWORD *)(v5 + 4856) = 0LL;
    }
    Win32FreePool(*(void **)(SessionState + 96));
    *(_QWORD *)(SessionState + 96) = 0LL;
  }
}
