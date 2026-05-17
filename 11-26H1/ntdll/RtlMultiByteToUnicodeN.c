/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x18003B570
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18009F070 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x18012B180 (mbstowcs.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x18013C390 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlMultiByteToUnicodeN(
        _WORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  __int16 v7; // dx
  __int64 *v8; // rdi
  __int16 v9; // cx
  __int64 v10; // rsi
  unsigned int v11; // eax
  _WORD *v12; // rbx
  unsigned int v13; // r10d
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int *v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v22, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    v7 = Utf8TableInfo;
    v8 = (__int64 *)&xmmword_1801C6070;
    v9 = WORD6(Utf8TableInfo);
    v10 = qword_1801C6088;
  }
  else
  {
    _InterlockedOr(v22, 0);
    v7 = GlobalRtlNlsState;
    v8 = &qword_1801C5FB0;
    v9 = word_1801C5F9C;
    v10 = qword_1801C5FC8;
  }
  v11 = a5;
  v12 = a1;
  if ( v7 == -535 )
  {
    v21 = &a5;
    if ( a3 )
      v21 = a3;
    if ( a5 )
    {
      RtlUTF8ToUnicodeN((_DWORD)a1, a2, (_DWORD)v21, (_DWORD)a4, a5);
      return 0LL;
    }
    result = 0LL;
    *v21 = 0;
  }
  else
  {
    v13 = a2 >> 1;
    if ( !v9 )
    {
      if ( v13 < a5 )
        v11 = v13;
      if ( a3 )
        *a3 = 2 * v11;
      v14 = *v8;
      if ( v11 )
      {
        v15 = v11;
        do
        {
          v16 = *a4;
          ++a1;
          ++a4;
          *(a1 - 1) = *(_WORD *)(v14 + 2 * v16);
          --v15;
        }
        while ( v15 );
      }
      return 0LL;
    }
    while ( 1 )
    {
      v18 = (int)v12;
      if ( !v13 || !v11 )
        break;
      --v13;
      --v11;
      v19 = 2LL * *a4;
      v20 = *(unsigned __int16 *)(v19 + v10);
      if ( (_WORD)v20 )
      {
        if ( !v11 )
        {
          v18 = (_DWORD)v12 + 2;
          *v12 = 0;
          break;
        }
        --v11;
        *v12++ = *(_WORD *)(v10 + 2 * (v20 + a4[1]));
        a4 += 2;
      }
      else
      {
        *v12++ = *(_WORD *)(v19 + *v8);
        ++a4;
      }
    }
    if ( !a3 )
      return 0LL;
    *a3 = v18 - (_DWORD)a1;
    return 0LL;
  }
  return result;
}
