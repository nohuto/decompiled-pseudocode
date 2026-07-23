/*
 * XREFs of FsRtlRemoveDotsFromPath @ 0x140935790
 * Callers:
 *     IopReplaceSymlinkPath @ 0x140935534 (IopReplaceSymlinkPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  unsigned __int16 v3; // r10
  __int16 v6; // r9
  unsigned __int16 v7; // ax
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  WCHAR v12; // cx
  __int64 v13; // rcx
  __int64 v14; // rcx
  WCHAR *v15; // rdi
  int v16; // r11d
  bool v17; // sf

  v3 = PathLength >> 1;
  v6 = 0;
  if ( PathLength >> 1 == 3 )
  {
    if ( *OriginalString == 92 )
    {
      if ( OriginalString[1] != 46 || OriginalString[2] != 46 )
        goto LABEL_5;
      return -1073741192;
    }
    goto LABEL_4;
  }
  if ( v3 == 2 )
  {
    if ( *OriginalString != 46 || OriginalString[1] != 46 )
      goto LABEL_5;
    return -1073741192;
  }
  if ( v3 > 2u )
  {
LABEL_4:
    if ( *OriginalString != 46 || OriginalString[1] != 46 || OriginalString[2] != 92 )
      goto LABEL_5;
    return -1073741192;
  }
LABEL_5:
  v7 = 0;
  while ( v7 < v3 )
  {
    if ( !v7 )
    {
      v9 = 0LL;
LABEL_11:
      v10 = v6++;
      OriginalString[v10] = OriginalString[v9];
      goto LABEL_12;
    }
    v8 = v3 - 1;
    if ( v7 < v8 && OriginalString[v7] == 92 && OriginalString[v7 + 1] == 92 )
    {
LABEL_12:
      ++v7;
    }
    else
    {
      v9 = v7;
      if ( OriginalString[v7] != 46 )
        goto LABEL_11;
      if ( v7 == v8 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          if ( v6 > 1 )
            --v6;
          goto LABEL_12;
        }
LABEL_21:
        v13 = v6++;
        ++v7;
        OriginalString[v13] = 46;
      }
      else
      {
        v12 = OriginalString[v7 + 1];
        if ( v12 == 92 )
        {
          if ( OriginalString[v7 - 1] == 92 )
          {
            ++v7;
            goto LABEL_12;
          }
          goto LABEL_21;
        }
        if ( v12 != 46 )
          goto LABEL_21;
        if ( OriginalString[v7 - 1] != 92 )
          goto LABEL_21;
        v16 = v3 - 2;
        if ( v7 != v16 && OriginalString[v7 + 2] != 92 )
          goto LABEL_21;
        v6 -= 2;
        v17 = v6 < 0;
        if ( v6 <= 0 )
        {
LABEL_42:
          if ( v17 )
            return -1073741192;
        }
        else
        {
          while ( OriginalString[(unsigned __int16)v6] != 92 )
          {
            v17 = --v6 < 0;
            if ( v6 <= 0 )
              goto LABEL_42;
          }
        }
        if ( OriginalString[(unsigned __int16)v6] != 92 )
          return -1073741192;
        if ( !v6 )
          v6 = v7 == v16;
        v7 += 2;
      }
    }
  }
  *NewLength = 2 * v6;
  if ( v6 < (int)v3 )
  {
    v14 = (__int16)(v3 - v6);
    v15 = &OriginalString[v6];
    while ( v14 )
    {
      *v15++ = 0;
      --v14;
    }
  }
  return 0;
}
