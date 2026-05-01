/*
 * XREFs of AslpFileQuery16BitDescription @ 0x18009DC9C
 * Callers:
 *     AslpFileGet16BitDescription @ 0x18009B3C4 (AslpFileGet16BitDescription.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall AslpFileQuery16BitDescription(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  size_t v9; // rsi
  __int64 v10; // r8

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 < v5 + 64 || (v7 = *(int *)(v4 + v5 + 44), v6 < v7 + 1) )
    {
      v10 = 4585LL;
    }
    else
    {
      v8 = *(unsigned __int8 *)(v4 + v7);
      if ( *(_BYTE *)(v4 + v7) && (unsigned int)(v8 + 1) <= 0x100 )
      {
        v9 = *(unsigned __int8 *)(v4 + v7);
        if ( v6 >= v8 + v7 + 1 )
        {
          memcpy_0(a1, (const void *)(v7 + v4 + 1), v9);
          a1[v9] = 0;
          return v3;
        }
        v10 = 4600LL;
      }
      else
      {
        v10 = 4594LL;
      }
    }
    v3 = -1073741701;
    AslLogCallPrintf(1LL, "AslpFileQuery16BitDescription", v10, "File mapping invalid");
    return v3;
  }
  return (unsigned int)-1073741637;
}
