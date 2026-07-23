/*
 * XREFs of WmipFirmwareTableHandler @ 0x1406C7240
 * Callers:
 *     <none>
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall WmipFirmwareTableHandler(_DWORD *a1)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v4; // eax
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v9; // edx
  unsigned int i; // r8d
  unsigned int v11; // r10d
  unsigned int v12; // eax
  size_t v13; // rsi
  const void *v14; // rax
  unsigned __int64 v15; // rbp

  v1 = 0;
  if ( !a1 )
    return 3221225711LL;
  v3 = a1[1];
  if ( !v3 )
  {
    v4 = a1[3];
    a1[3] = 8;
    if ( v4 >= 8 )
    {
      v5 = a1 + 4;
      v6 = 2LL;
      do
      {
        v7 = v1;
        v1 += 2;
        *v5++ = *((_DWORD *)WmipFirmwareTableArray + v7);
        --v6;
      }
      while ( v6 );
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v3 != 1 )
    return 3221225711LL;
  v9 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( LODWORD(WmipFirmwareTableArray[v9]) == a1[2] )
    {
      v11 = HIDWORD(WmipFirmwareTableArray[v9]);
      v12 = a1[3];
      a1[3] = v11;
      if ( v12 < v11 )
        return 3221225507LL;
      goto LABEL_15;
    }
    ++v9;
  }
  v9 = 1;
  v11 = 0;
  if ( i == 2 )
    return 3221225711LL;
LABEL_15:
  v13 = v11;
  v14 = (const void *)MmMapIoSpaceEx(LODWORD(WmipFirmwareTableArray[v9]), v11, 0x204u);
  v15 = (unsigned __int64)v14;
  if ( v14 )
  {
    memmove(a1 + 4, v14, v13);
    MiUnmapContiguousMemory(v15, v13, 1);
    return 0LL;
  }
  return 3221226021LL;
}
