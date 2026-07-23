/*
 * XREFs of AslpFileQuery16BitModuleName @ 0x140895264
 * Callers:
 *     AslpFileGet16BitModuleName @ 0x140892744 (AslpFileGet16BitModuleName.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r8d

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 < v5 + 64 || (v7 = *(unsigned __int16 *)(v4 + v5 + 38), v6 < v7 + 1) )
    {
      v9 = 4662;
    }
    else if ( *(_BYTE *)(v4 + v7 + v5) )
    {
      v8 = *(unsigned __int8 *)(v4 + v7 + v5);
      if ( v6 >= v8 + (int)v5 + (int)v7 + 1LL )
      {
        memmove(a1, (const void *)(v5 + 1 + v4 + v7), *(unsigned __int8 *)(v4 + v7 + v5));
        a1[v8] = 0;
        return v3;
      }
      v9 = 4678;
    }
    else
    {
      v9 = 4671;
    }
    v3 = -1073741701;
    AslLogCallPrintf(1, (unsigned int)"AslpFileQuery16BitModuleName", v9, (unsigned int)"File mapping invalid");
    return v3;
  }
  return (unsigned int)-1073741637;
}
