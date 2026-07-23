/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x180099E48
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18002CB70 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18009B9D0 (RtlExpandEnvironmentStrings_U.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, _UNICODE_STRING *a2, _UNICODE_STRING *a3)
{
  NTSTATUS v5; // ebx
  SIZE_T v6; // r8
  unsigned __int16 *p_Length; // rbx
  SIZE_T v9; // r8
  _UNICODE_STRING *v10; // rbx
  wchar_t *v11; // rcx
  unsigned __int16 Length; // cx
  unsigned __int64 v13; // rcx
  _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF
  ULONG ReturnedLength; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v16 = HIDWORD(a1);
  ReturnedLength = 0;
  if ( a2 && a3 && a2 != a3 )
  {
    if ( a2->Length )
    {
      Destination = 0LL;
      RtlEnterCriticalSection(&FastPebLock);
      v5 = RtlExpandEnvironmentStrings_U(0LL, a2, &Destination, &ReturnedLength);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741789 )
      {
        if ( ReturnedLength > 0xFFFE || (v6 = ReturnedLength + 4LL, v6 > 0xFFFE) )
        {
          v5 = -1073741562;
        }
        else
        {
          p_Length = &a3[2].Length;
          if ( (a3 == (_UNICODE_STRING *)-16LL || v6 > *(_QWORD *)p_Length)
            && (int)RtlpEnsureBufferSize(0, (__int64)&a3[1], v6) < 0 )
          {
            v5 = -1073741801;
          }
          else
          {
            a3->Buffer = *(wchar_t **)&a3[1].Length;
            a3->MaximumLength = *p_Length;
            v5 = RtlExpandEnvironmentStrings_U(0LL, a2, a3, 0LL);
            if ( v5 >= 0 )
              v5 = 0;
          }
        }
      }
      RtlLeaveCriticalSection(&FastPebLock);
    }
    else
    {
      a3->Length = 0;
      v9 = a2->Length + 2LL;
      if ( v9 <= 0xFFFE )
      {
        v10 = a3 + 1;
        if ( (a3 == (_UNICODE_STRING *)-16LL || v9 > *(_QWORD *)&a3[2].Length)
          && (int)RtlpEnsureBufferSize(0, (__int64)&a3[1], v9) < 0 )
        {
          return (unsigned int)-1073741801;
        }
        else
        {
          v11 = *(wchar_t **)&v10->Length;
          a3->Buffer = *(wchar_t **)&v10->Length;
          memmove(&v11[(unsigned __int64)a3->Length >> 1], a2->Buffer, a2->Length);
          Length = a3->Length;
          a3->MaximumLength = a2->Length + a3->Length + 2;
          v13 = (unsigned __int16)(a2->Length + Length);
          a3->Length = v13;
          a3->Buffer[v13 >> 1] = 0;
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
