/*
 * XREFs of RtlEqualString @ 0x180079AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x18007A160 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  SIZE_T Length; // rax
  SIZE_T v5; // rbx
  char *Buffer; // rsi
  char *v7; // rdi
  int v8; // r14d
  char *v9; // rbp
  SIZE_T v10; // rax
  int v11; // ebx
  CHAR v12; // r15
  int v13; // r12d
  unsigned __int8 v14; // al

  Length = String1->Length;
  if ( (_WORD)Length != String2->Length )
    return 0;
  v5 = String1->Length;
  Buffer = String2->Buffer;
  v7 = String1->Buffer;
  v8 = String2->Length;
  v9 = &v7[Length];
  if ( CaseInSensitive )
  {
    while ( v7 < v9 )
    {
      v12 = *Buffer;
      if ( *v7 != *Buffer )
      {
        v13 = (unsigned __int8)RtlUpperChar(*v7);
        v14 = RtlUpperChar(v12);
        if ( (_BYTE)v13 != v14 )
        {
          v11 = v13 - v14;
          return v11 == 0;
        }
      }
      ++v7;
      ++Buffer;
    }
  }
  else
  {
    v10 = RtlCompareMemory(v7, Buffer, Length);
    if ( v10 < v5 )
    {
      v11 = (unsigned __int8)v7[v10] - (unsigned __int8)Buffer[v10];
      return v11 == 0;
    }
  }
  v11 = v5 - v8;
  return v11 == 0;
}
