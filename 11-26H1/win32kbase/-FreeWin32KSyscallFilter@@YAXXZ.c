/*
 * XREFs of ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1401984DC
 * Callers:
 *     InitializeWin32KSyscallFilter @ 0x140141B80 (InitializeWin32KSyscallFilter.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWin32KSyscallFilter(int a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // edx
  void **v5; // rbx
  int v6; // r8d
  void *v7; // rcx
  __int64 UserSessionState; // rbx
  void *v9; // rcx
  void *v10; // rcx

  v3 = 7LL;
  v5 = (void **)(W32GetUserSessionState(a1, a2, a3) + 70712);
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      ExFreePoolWithTag(v7, 0);
      *v5 = 0LL;
    }
    ++v5;
    --v3;
  }
  while ( v3 );
  UserSessionState = W32GetUserSessionState((_DWORD)v7, v4, v6);
  v9 = *(void **)(UserSessionState + 70880);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(UserSessionState + 70880) = 0LL;
  }
  v10 = *(void **)(UserSessionState + 70888);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(UserSessionState + 70888) = 0LL;
  }
}
