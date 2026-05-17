/*
 * XREFs of RtlFindExportedRoutineByName @ 0x18010ECE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(unsigned __int64 a1, const char *a2)
{
  _DWORD *v4; // r8
  unsigned __int64 result; // rax
  int v6; // edi
  unsigned __int64 v7; // rsi
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v4 = RtlImageDirectoryEntryToData(a1, 1, 0, &v11);
  result = 0LL;
  if ( v4 )
  {
    v6 = 0;
    v8 = v4[6] - 1;
    while ( v8 >= v6 )
    {
      v9 = (v6 + v8) >> 1;
      v10 = strcmp(a2, (const char *)(a1 + *(unsigned int *)(a1 + (unsigned int)v4[8] + 4LL * v9)));
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
        {
          v7 = a1 + (unsigned int)v4[9];
          if ( (unsigned int)*(unsigned __int16 *)(v7 + 2LL * v9) < v4[5] )
          {
            result = a1 + *(unsigned int *)(a1 + (unsigned int)v4[7] + 4LL * *(unsigned __int16 *)(v7 + 2LL * v9));
            if ( result > (unsigned __int64)v4 && result < (unsigned __int64)v4 + v11 )
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
