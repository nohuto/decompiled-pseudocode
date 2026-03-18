/*
 * XREFs of ?DestroyHandleTableObjects@@YAXXZ @ 0x14013ADE0
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyHandleTableObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rsi
  void (*v5)(void); // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 19888) )
  {
    v5 = (void (*)(void))DestroyHandleFirstPass;
    *(_DWORD *)(W32GetUserSessionState(v3, v2) + 19760) = 1;
    while ( 1 )
    {
      v8 = 0;
      W32GetUserSessionState(v7, v6);
      do
      {
        v9 = *(_QWORD *)(UserSessionState + 19888) + 32LL * v8;
        if ( *(_BYTE *)(v9 + 24) )
          v5();
        ++v8;
      }
      while ( v8 <= *(_DWORD *)(W32GetUserSessionState(v9, v6) + 19816) );
      if ( (char *)v5 != (char *)DestroyHandleFirstPass )
        break;
      v5 = (void (*)(void))DestroyHandleSecondPass;
    }
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 19760) = 0;
  }
}
