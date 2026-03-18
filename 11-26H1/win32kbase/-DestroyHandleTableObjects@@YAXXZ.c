/*
 * XREFs of ?DestroyHandleTableObjects@@YAXXZ @ 0x1401745F4
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyHandleTableObjects(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  __int64 UserSessionState; // rsi
  int v6; // r8d
  void (*v7)(void); // rdi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // ebx
  __int64 v12; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(UserSessionState + 19920) )
  {
    v7 = (void (*)(void))DestroyHandleFirstPass;
    *(_DWORD *)(W32GetUserSessionState(v4, v3, v6) + 19792) = 1;
    while ( 1 )
    {
      v11 = 0;
      W32GetUserSessionState(v9, v8, v10);
      do
      {
        v12 = *(_QWORD *)(UserSessionState + 19920) + 32LL * v11;
        if ( *(_BYTE *)(v12 + 24) )
          v7();
        ++v11;
      }
      while ( v11 <= *(_DWORD *)(W32GetUserSessionState(v12, v8, v10) + 19848) );
      if ( (char *)v7 != (char *)DestroyHandleFirstPass )
        break;
      v7 = (void (*)(void))DestroyHandleSecondPass;
    }
    *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 19792) = 0;
  }
}
