/*
 * XREFs of ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18002839C
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::AddCategoryOverrideToProcesses(__int64 a1, int a2, int a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  _QWORD *v9; // r10
  _DWORD *v10; // rcx
  _DWORD *v11; // rax

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v9 = *(_QWORD **)(a1 + 72);
  while ( v9 )
  {
    v10 = (_DWORD *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( !v10[104] )
    {
      v11 = v10 + 120;
      if ( (a4 || !*v11) && v10[119] != a2 )
      {
        v10[119] = a2;
        *v11 = 1;
        v10[121] = a3;
      }
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
