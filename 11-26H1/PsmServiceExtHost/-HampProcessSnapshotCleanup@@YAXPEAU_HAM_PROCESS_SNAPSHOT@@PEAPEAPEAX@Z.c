/*
 * XREFs of ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x180055AB0
 * Callers:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x180066340 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall HampProcessSnapshotCleanup(struct _HAM_PROCESS_SNAPSHOT *a1, void ***a2)
{
  __int64 i; // rbx
  void *v5; // r8

  if ( a2 && *((_DWORD *)a1 + 4) )
  {
    *a2 = *(void ***)a1;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 4); i = (unsigned int)(i + 1) )
      NtClose(*(HANDLE *)(*(_QWORD *)a1 + 8 * i));
    if ( *(_QWORD *)a1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)a1);
    if ( a2 )
      *a2 = 0LL;
  }
  v5 = (void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
}
