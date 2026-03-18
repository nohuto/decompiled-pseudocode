/*
 * XREFs of ?ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z @ 0x140152B4C
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x140152920 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResolveApiSetFunction(struct _Win32kApiSetFunction *a1, char *a2, char *a3, int a4, void *a5)
{
  __int64 ExportedRoutineByName; // rdi
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rax

  ExportedRoutineByName = RtlFindExportedRoutineByName(a5, a2);
  if ( !ExportedRoutineByName || *(_DWORD *)RtlFindExportedRoutineByName(a5, a3) != a4 )
    return 3221225524LL;
  v10 = 0;
  v11 = ExportedRoutineByName - (_QWORD)a1;
  while ( v10 < a4 )
  {
    v12 = *(_QWORD *)((char *)a1 + v11);
    *(_QWORD *)a1 = v12;
    if ( !v12 )
      return 3221225524LL;
    ++v10;
    a1 = (struct _Win32kApiSetFunction *)((char *)a1 + 8);
  }
  return 0LL;
}
