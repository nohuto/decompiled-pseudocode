/*
 * XREFs of RtlFindExportedRoutineByName @ 0x18010E870
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  _DWORD *v4; // r8
  PVOID result; // rax
  int v6; // edi
  char *v7; // rsi
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  ULONG v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v4 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &v11);
  result = 0LL;
  if ( v4 )
  {
    v6 = 0;
    v8 = v4[6] - 1;
    while ( v8 >= v6 )
    {
      v9 = (v6 + v8) >> 1;
      v10 = strcmp(
              RoutineName,
              (const char *)BaseOfImage + *(unsigned int *)((char *)BaseOfImage + 4 * v9 + (unsigned int)v4[8]));
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
        {
          v7 = (char *)BaseOfImage + (unsigned int)v4[9];
          if ( (unsigned int)*(unsigned __int16 *)&v7[2 * v9] < v4[5] )
          {
            result = (char *)BaseOfImage
                   + *(unsigned int *)((char *)BaseOfImage + 4 * *(unsigned __int16 *)&v7[2 * v9] + (unsigned int)v4[7]);
            if ( result > v4 && result < (char *)v4 + v11 )
              return 0LL;
          }
          return result;
        }
        v6 = v9 + 1;
      }
      else
      {
        if ( !v9 )
          return result;
        v8 = v9 - 1;
      }
    }
  }
  return result;
}
