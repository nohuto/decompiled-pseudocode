/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x18010DA90
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x180147590 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180034070 (RtlUnicodeToMultiByteSize.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18003B340 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800A00B0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800A0124 (RtlpDidUnicodeToOemWork.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToCountedOemString(__int64 a1, PWCH *a2, char a3)
{
  __int64 result; // rax
  __int64 *v7; // rsi
  int v8; // ebx
  ULONG v9; // [rsp+88h] [rbp+10h] BYREF
  char v10; // [rsp+90h] [rbp+18h]

  v10 = a3;
  v9 = 0;
  RtlUnicodeToMultiByteSize(&v9, a2[1], *(unsigned __int16 *)a2);
  if ( v9 )
  {
    if ( v9 <= 0xFFFF )
    {
      v7 = (__int64 *)(a1 + 8);
      result = AllocateOrValidateCharStringBuffer(a3, v9, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
      if ( (int)result >= 0 )
      {
        v8 = RtlUpcaseUnicodeToOemN();
        if ( v8 >= 0 )
        {
          *(_WORD *)a1 = v9;
          if ( !RtlpDidUnicodeToOemWork(a1, (__int64)a2) )
            v8 = -1073741470;
        }
        if ( v8 < 0 )
        {
          if ( a3 )
          {
            RtlpSysVolFree(*v7);
            *v7 = 0LL;
            *(_WORD *)(a1 + 2) = 0;
          }
        }
        return (unsigned int)v8;
      }
    }
    else
    {
      return 3221225712LL;
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  return result;
}
