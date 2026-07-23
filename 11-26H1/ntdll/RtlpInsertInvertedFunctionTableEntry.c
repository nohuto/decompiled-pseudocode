/*
 * XREFs of RtlpInsertInvertedFunctionTableEntry @ 0x180079470
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

void __fastcall RtlpInsertInvertedFunctionTableEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx

  if ( LdrpInvertedFunctionTables[0] == dword_1801DF444 )
  {
    byte_1801DF44C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_1801DF448);
    v8 = 1;
    if ( LdrpInvertedFunctionTables[0] != 1 )
    {
      if ( LdrpInvertedFunctionTables[0] > 1u )
      {
        v9 = (unsigned __int64 *)&unk_1801DF470;
        while ( a2 >= *v9 )
        {
          ++v8;
          v9 += 3;
          if ( v8 >= LdrpInvertedFunctionTables[0] )
          {
            if ( v8 == LdrpInvertedFunctionTables[0] )
              goto LABEL_9;
            break;
          }
        }
      }
      memmove(
        &LdrpInvertedFunctionTables[4 * v8 + 10 + 2 * v8],
        &LdrpInvertedFunctionTables[4 * v8 + 4 + 2 * v8],
        24LL * (LdrpInvertedFunctionTables[0] - v8));
    }
LABEL_9:
    v10 = 3LL * v8;
    *(_QWORD *)&LdrpInvertedFunctionTables[2 * v10 + 4] = a3;
    *(_QWORD *)&LdrpInvertedFunctionTables[2 * v10 + 6] = a2;
    LdrpInvertedFunctionTables[2 * v10 + 8] = a4;
    LdrpInvertedFunctionTables[2 * v10 + 9] = a5;
    ++LdrpInvertedFunctionTables[0];
    _InterlockedIncrement(&dword_1801DF448);
  }
}
