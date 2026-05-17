/*
 * XREFs of RtlEqualString @ 0x180082740
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180082DC0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

bool __fastcall RtlEqualString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  SIZE_T v3; // rax
  SIZE_T v5; // rbx
  unsigned __int8 *v6; // rsi
  _BYTE *v7; // rdi
  int v8; // r14d
  _BYTE *v9; // rbp
  SIZE_T v10; // rax
  int v11; // ebx
  unsigned __int8 v12; // r15
  int v13; // r12d
  unsigned __int8 v14; // al

  v3 = *a1;
  if ( (_WORD)v3 != *a2 )
    return 0;
  v5 = *a1;
  v6 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v7 = (_BYTE *)*((_QWORD *)a1 + 1);
  v8 = *a2;
  v9 = &v7[v3];
  if ( a3 )
  {
    while ( v7 < v9 )
    {
      v12 = *v6;
      if ( *v7 != *v6 )
      {
        v13 = (unsigned __int8)((__int64 (*)(void))RtlUpperChar)();
        v14 = RtlUpperChar(v12);
        if ( (_BYTE)v13 != v14 )
        {
          v11 = v13 - v14;
          return v11 == 0;
        }
      }
      ++v7;
      ++v6;
    }
  }
  else
  {
    v10 = RtlCompareMemory(v7, v6, v3);
    if ( v10 < v5 )
    {
      v11 = (unsigned __int8)v7[v10] - v6[v10];
      return v11 == 0;
    }
  }
  v11 = v5 - v8;
  return v11 == 0;
}
