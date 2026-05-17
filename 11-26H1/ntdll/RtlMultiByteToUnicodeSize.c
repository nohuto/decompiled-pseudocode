/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x18009FBF0
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x18009FB00 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeSize(int *a1, char *a2, unsigned int a3)
{
  int v4; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v8, 0);
  if ( word_1801C5FD0 != -535 && GlobalRtlNlsState != -535 )
  {
    _InterlockedOr(v8, 0);
    v4 = 0;
    if ( word_1801C5F9C )
    {
      while ( a3-- )
      {
        v7 = (unsigned __int8)*a2++;
        if ( *(_WORD *)(qword_1801C6020 + 2 * v7) )
        {
          if ( !a3 )
          {
            *a1 = v4 + 2;
            return 0LL;
          }
          --a3;
          ++a2;
        }
        v4 += 2;
      }
    }
    else
    {
      v4 = 2 * a3;
    }
    *a1 = v4;
    return 0LL;
  }
  if ( a3 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, a1, a2, a3);
    return 0LL;
  }
  result = 0LL;
  *a1 = 0;
  return result;
}
