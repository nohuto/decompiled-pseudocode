/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800BF100
 * Callers:
 *     <none>
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  unsigned int v1; // eax
  int v2; // edx
  char *v3; // r9
  __int64 v6; // rcx
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v8 = 0;
  _InterlockedOr(v7, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( v1 )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &v8, v3, v1);
      return (unsigned int)(v8 + 2);
    }
  }
  else
  {
    _InterlockedOr(v7, 0);
    if ( !word_1801C5F9C )
      return 2 * v1 + 2;
    while ( v1-- )
    {
      v6 = (unsigned __int8)*v3++;
      if ( *(_WORD *)(qword_1801C6020 + 2 * v6) )
      {
        if ( !v1 )
        {
          v2 += 2;
          return (unsigned int)(v2 + 2);
        }
        --v1;
        ++v3;
      }
      v2 += 2;
    }
  }
  return (unsigned int)(v2 + 2);
}
