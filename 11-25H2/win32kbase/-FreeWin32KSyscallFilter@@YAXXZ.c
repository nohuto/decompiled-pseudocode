/*
 * XREFs of ?FreeWin32KSyscallFilter@@YAXXZ @ 0x140158F5C
 * Callers:
 *     InitializeWin32KSyscallFilter @ 0x140100E20 (InitializeWin32KSyscallFilter.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWin32KSyscallFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  void **v4; // rbx
  void *v5; // rcx
  __int64 v6; // rbx
  void *v7; // rcx

  v2 = 7LL;
  v4 = (void **)(W32GetUserSessionState(a1, a2) + 70728);
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      ExFreePoolWithTag(v5, 0);
      *v4 = 0LL;
    }
    ++v4;
    --v2;
  }
  while ( v2 );
  v6 = W32GetUserSessionState(v5, v3) + 70896;
  if ( *(_QWORD *)v6 )
  {
    ExFreePoolWithTag(*(PVOID *)v6, 0);
    *(_QWORD *)v6 = 0LL;
  }
  v7 = *(void **)(v6 + 8);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v6 + 8) = 0LL;
  }
}
