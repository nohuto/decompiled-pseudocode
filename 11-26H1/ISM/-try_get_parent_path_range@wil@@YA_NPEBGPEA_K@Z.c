/*
 * XREFs of ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800D8E08
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5064 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::try_get_parent_path_range(LPCWSTR lpStringSource, unsigned __int16 *a2, unsigned __int64 *a3)
{
  char v3; // bl
  __int64 v6; // r8
  const WCHAR *v7; // rbx
  int StringOrdinal; // eax
  __int64 v9; // rbx
  PCWSTR v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *(_QWORD *)a2 = 0LL;
  v11 = 0LL;
  if ( PathCchSkipRoot(lpStringSource, &v11) >= 0 && *v11 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( lpStringSource[v6] );
    v7 = &lpStringSource[v6];
    if ( v6 && *(v7 - 1) == 92 )
      LODWORD(v6) = v6 - 1;
    StringOrdinal = FindStringOrdinal(0x800000u, lpStringSource, v6, L"\\", 1, 1);
    if ( StringOrdinal != -1 )
      v7 = &lpStringSource[StringOrdinal + 1];
    v9 = v7 - lpStringSource;
    *(_QWORD *)a2 = v9;
    return v9 != 0;
  }
  return v3;
}
