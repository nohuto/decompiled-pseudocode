/*
 * XREFs of FreeWin32kApiSetTable @ 0x1401C36A0
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWin32kApiSetTable(PVOID **a1)
{
  PVOID *v1; // rbx
  PVOID v2; // rax
  PVOID *v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = v1[1];
    if ( v2 )
    {
      v3 = v1;
      v4 = 0LL;
      do
      {
        ExFreePoolWithTag(v2, 0);
        if ( *v3 )
          ExFreePoolWithTag(*v3, 0);
        v4 += 3LL;
        v3 = &v1[v4];
        v2 = v1[v4 + 1];
      }
      while ( v2 );
    }
    ExFreePoolWithTag(v1, 0);
  }
}
