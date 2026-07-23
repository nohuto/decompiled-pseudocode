/*
 * XREFs of RtlpInsertInvertedFunctionTableEntry @ 0x14042A070
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140429FF4 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlpInsertInvertedFunctionTableEntry(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rdx
  __int64 v11; // rcx

  result = (unsigned int)PsInvertedFunctionTable[0];
  if ( PsInvertedFunctionTable[0] == dword_141200024 )
  {
    byte_14120002C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_141200028);
    v9 = 1;
    if ( PsInvertedFunctionTable[0] != 1 )
    {
      if ( PsInvertedFunctionTable[0] > 1u )
      {
        v10 = (unsigned __int64 *)&unk_141200050;
        while ( a2 >= *v10 )
        {
          ++v9;
          v10 += 3;
          if ( v9 >= PsInvertedFunctionTable[0] )
          {
            if ( v9 != PsInvertedFunctionTable[0] )
              break;
            goto LABEL_9;
          }
        }
      }
      memmove(
        &PsInvertedFunctionTable[4 * v9 + 10 + 2 * v9],
        &PsInvertedFunctionTable[4 * v9 + 4 + 2 * v9],
        24LL * (PsInvertedFunctionTable[0] - v9));
    }
LABEL_9:
    v11 = 3LL * v9;
    result = a5;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v11 + 4] = a3;
    *(_QWORD *)&PsInvertedFunctionTable[2 * v11 + 6] = a2;
    PsInvertedFunctionTable[2 * v11 + 8] = a4;
    PsInvertedFunctionTable[2 * v11 + 9] = a5;
    ++PsInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_141200028);
  }
  return result;
}
