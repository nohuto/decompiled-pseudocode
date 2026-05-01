/*
 * XREFs of AslpFileQuery16BitModuleName @ 0x18009DD9C
 * Callers:
 *     AslpFileGet16BitModuleName @ 0x18009B4AC (AslpFileGet16BitModuleName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rsi
  __int64 v9; // r8

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v5 + 64)
      || (v6 = *(unsigned __int16 *)(v4 + v5 + 38), *(_QWORD *)(a2 + 24) < (unsigned __int64)(v6 + 1)) )
    {
      v9 = 4662LL;
    }
    else
    {
      v7 = v4 + v6;
      if ( *(_BYTE *)(v4 + v6 + v5) )
      {
        v8 = *(unsigned __int8 *)(v7 + v5);
        if ( *(_QWORD *)(a2 + 24) >= (unsigned __int64)(*(_DWORD *)(v4 + 60) + (int)v6 + v8 + 1) )
        {
          memcpy_0(a1, (const void *)(v7 + v5 + 1), *(unsigned __int8 *)(v7 + v5));
          a1[v8] = 0;
          return v3;
        }
        v9 = 4678LL;
      }
      else
      {
        v9 = 4671LL;
      }
    }
    v3 = -1073741701;
    AslLogCallPrintf(1LL, "AslpFileQuery16BitModuleName", v9, "File mapping invalid");
    return v3;
  }
  return (unsigned int)-1073741637;
}
