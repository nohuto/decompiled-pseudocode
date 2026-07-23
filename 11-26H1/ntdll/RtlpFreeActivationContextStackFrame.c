/*
 * XREFs of RtlpFreeActivationContextStackFrame @ 0x180080370
 * Callers:
 *     RtlFreeActivationContextStack @ 0x180080030 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180080110 (RtlDeactivateActivationContext.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpFreeActivationContextStackFrame(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  _QWORD *i; // r14
  _QWORD *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  result = (unsigned __int64)memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( a2 && (*(_BYTE *)(a2 + 16) & 4) == 0 )
  {
    v5 = a1 + 8;
    for ( i = *(_QWORD **)(a1 + 8); i != (_QWORD *)v5; i = (_QWORD *)*i )
    {
      v7 = i - 1;
      if ( *((_DWORD *)i - 2) != 1953721414 )
      {
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1LL;
        ExceptionRecord.ExceptionInformation[1] = 1LL;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(i - 1);
        ExceptionRecord.ExceptionCode = -1072365547;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( *((_DWORD *)v7 + 7) != ~*((_DWORD *)v7 + 1) )
      {
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = 1LL;
        ExceptionRecord.ExceptionInformation[1] = 2LL;
        ExceptionRecord.ExceptionInformation[2] = v5;
        ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(i - 1);
        ExceptionRecord.ExceptionCode = -1072365547;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
      result = (unsigned __int64)(v7 + 4);
      if ( a2 >= (unsigned __int64)(v7 + 4) )
      {
        result = (unsigned __int64)(i + 387);
        if ( a2 < (unsigned __int64)(i + 387) )
        {
          result = (unsigned __int64)&v7[12 * (unsigned int)(((int)a2 - (int)v7 - 32) / 96) + 4];
          if ( a2 == result )
          {
            result = *((unsigned int *)v7 + 1);
            if ( (_DWORD)result )
            {
              v8 = result - 1;
              *((_DWORD *)v7 + 1) = v8;
              result = (unsigned int)~v8;
              *((_DWORD *)v7 + 7) = result;
              *(_DWORD *)(a2 + 16) = 4;
              if ( !*((_DWORD *)v7 + 1) )
              {
                result = i[1];
                if ( result != v5 )
                {
                  do
                  {
                    v9 = *(_QWORD **)(result + 8);
                    if ( !*(_DWORD *)(result - 8 + 4) )
                    {
                      v10 = *(_QWORD *)result;
                      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v9 != result )
                        __fastfail(3u);
                      *v9 = v10;
                      *(_QWORD *)(v10 + 8) = v9;
                      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)(result - 8));
                    }
                    result = (unsigned __int64)v9;
                  }
                  while ( v9 != (_QWORD *)v5 );
                }
              }
            }
          }
          return result;
        }
      }
    }
  }
  return result;
}
