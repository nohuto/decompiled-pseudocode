/*
 * XREFs of FreeWin32kApiSetTable @ 0x1401A0514
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWin32kApiSetTable(PVOID **a1)
{
  PVOID *v1; // rbx
  PVOID v2; // rax
  __int64 v3; // rdi
  PVOID *v4; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    v2 = v1[1];
    if ( v2 )
    {
      v3 = 0LL;
      v4 = v1;
      do
      {
        ExFreePoolWithTag(v2, 0);
        if ( *v4 )
          ExFreePoolWithTag(*v4, 0);
        ++v3;
        v4 = &v1[3 * v3];
        v2 = v4[1];
      }
      while ( v2 );
    }
    ExFreePoolWithTag(v1, 0);
  }
}
