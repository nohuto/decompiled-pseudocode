/*
 * XREFs of RtlpIsQualifiedLanguage @ 0x18004D550
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpCalcAllocSize @ 0x18004D51C (LdrpCalcAllocSize.c)
 *     RtlpTraverseParents @ 0x18004E7C0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x18004ED90 (RtlpFreeTraverseNodes.c)
 */

__int64 __fastcall RtlpIsQualifiedLanguage(__int64 a1, __int16 *a2, char a3)
{
  int v5; // ebx
  SIZE_T v6; // rax
  char *Heap_0; // rax
  char *v8; // rsi
  unsigned __int16 v9; // di
  unsigned int v10; // ebx
  char *v12; // rax
  __int64 v13; // r8
  __int16 v14; // cx
  __int16 v15; // cx

  v5 = a1;
  if ( a1 && a2 )
  {
    v6 = LdrpCalcAllocSize(0x2Au, 8uLL);
    if ( v6 )
    {
      Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v6);
      v8 = Heap_0;
      if ( Heap_0 )
      {
        v9 = 0;
        v10 = (unsigned __int8)RtlpTraverseParents((_DWORD)a2, (_DWORD)Heap_0, v5, 0, 0, 42) == 0 ? 0xC0000001 : 0;
        do
        {
          if ( v9 && *(_DWORD *)&v8[8 * v9 + 4] )
          {
            v12 = v8 + 2;
            v13 = v9;
            do
            {
              if ( *(_DWORD *)(v12 + 2) )
              {
                v14 = *((_WORD *)v12 - 1);
                if ( v14 && *(_WORD *)&v8[8 * v9] && v14 == *(_WORD *)&v8[8 * v9] )
                  v10 = -1073741823;
                if ( *(__int16 *)v12 > 0 )
                {
                  v15 = *(_WORD *)&v8[8 * v9 + 2];
                  if ( v15 > 0 && *(_WORD *)v12 == v15 )
                    v10 = -1073741823;
                }
              }
              v12 += 8;
              --v13;
            }
            while ( v13 );
          }
          ++v9;
        }
        while ( (__int16)v9 < 42 );
        if ( a3 == 1 && *a2 < 0 )
          v10 = -1073741823;
        RtlpFreeTraverseNodes(v8);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
