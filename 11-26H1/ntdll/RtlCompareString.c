/*
 * XREFs of RtlCompareString @ 0x180082830
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180082DC0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rsi
  SIZE_T v8; // rdi
  unsigned __int8 *v9; // r15
  SIZE_T v10; // rax
  __int64 v12; // rcx
  unsigned __int8 v13; // di
  int v14; // r12d
  unsigned __int8 v15; // al

  v3 = *a1;
  v4 = *a2;
  v5 = *a1;
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v7 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v8 = (unsigned int)v5;
  v9 = &v6[v5];
  if ( a3 )
  {
    while ( v6 < v9 )
    {
      v12 = *v6;
      v13 = *v7;
      if ( (_BYTE)v12 != *v7 )
      {
        v14 = (unsigned __int8)RtlUpperChar(v12);
        v15 = RtlUpperChar(v13);
        if ( (_BYTE)v14 != v15 )
          return v14 - (unsigned int)v15;
      }
      ++v6;
      ++v7;
    }
    return v3 - v4;
  }
  v10 = RtlCompareMemory(*((const void **)a1 + 1), *((const void **)a2 + 1), (unsigned int)v5);
  if ( v10 >= v8 )
    return v3 - v4;
  return v6[v10] - (unsigned int)v7[v10];
}
