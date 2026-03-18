/*
 * XREFs of ApiSetEditionCreateDefaultWindowStation @ 0x140194E2C
 * Callers:
 *     InitCreateObjectDirectory @ 0x1402EB048 (InitCreateObjectDirectory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionCreateDefaultWindowStation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (*v6)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2136LL);
  if ( v3 && v3() >= 0 )
  {
    v6 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 2144LL);
    if ( v6 )
      return v6();
    else
      return (unsigned int)-1073741637;
  }
  return v2;
}
