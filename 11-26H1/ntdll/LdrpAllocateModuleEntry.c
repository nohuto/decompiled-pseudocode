/*
 * XREFs of LdrpAllocateModuleEntry @ 0x1800CF3D0
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpAllocatePlaceHolder @ 0x1800CF1F0 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAddRefActivationContext @ 0x18005DDE0 (RtlAddRefActivationContext.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

_QWORD *__fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *Heap_0; // rax
  _QWORD *v5; // rsi
  int v6; // r14d
  __int64 v7; // rdi
  _QWORD *v8; // r15
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rcx
  unsigned __int64 ActiveFrame; // rdi
  int v11; // edx
  _ACTIVATION_CONTEXT *v12; // rdi
  bool v13; // zf
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-69h] BYREF

  result = RtlAllocateHeap_0(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x138uLL);
  v3 = result;
  if ( result )
  {
    Heap_0 = RtlAllocateHeap_0(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x50uLL);
    v5 = Heap_0;
    if ( Heap_0 )
    {
      v6 = 0;
      v3[19] = Heap_0;
      if ( a1 )
      {
        v3[22] = a1;
        *((_DWORD *)v3 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v6 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = v3;
        v7 = *(_QWORD *)(a1 + 48);
        if ( v7 )
        {
          v12 = *(_ACTIVATION_CONTEXT **)(v7 + 136);
          if ( v12 )
          {
            RtlAddRefActivationContext(v12);
            v3[17] = v12;
          }
        }
        else
        {
          v8 = v3 + 17;
          ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          if ( v3 != (_QWORD *)-136LL )
          {
            *v8 = 0LL;
            if ( ActivationContextStackPointer )
            {
              ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
              if ( ActivationContextStackPointer->ActiveFrame )
              {
                v11 = *(_DWORD *)(ActiveFrame + 16);
                if ( (v11 & 0x70) == 0x20
                  && ((v11 & 8) != 0
                   || *(_QWORD *)(ActiveFrame - 16) < 0x48uLL
                   || *(_QWORD *)(ActiveFrame + 24) == ~*(_QWORD *)ActiveFrame
                   && *(_QWORD *)(ActiveFrame + 32) == ~*(_QWORD *)(ActiveFrame + 8)) )
                {
                  RtlAddRefActivationContext(*(PACTIVATION_CONTEXT *)(ActiveFrame + 8));
                  *v8 = *(_QWORD *)(ActiveFrame + 8);
                }
                else
                {
                  ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
                  ExceptionRecord.NumberParameters = 4;
                  ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
                  ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
                  ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
                  ExceptionRecord.ExceptionCode = -1072365548;
                  ExceptionRecord.ExceptionFlags = 1;
                  RtlRaiseException(&ExceptionRecord);
                }
              }
            }
          }
          *((_DWORD *)v3 + 67) = 4;
        }
      }
      v13 = LdrInitState == 1;
      v3[15] = v3 + 14;
      v3[14] = v3 + 14;
      v3[20] = v5;
      v3[21] = v5;
      *v5 = v3 + 20;
      v5[1] = v3 + 20;
      v3[18] = 0LL;
      *((_DWORD *)v5 + 6) = 1;
      *((_DWORD *)v3 + 69) = 2;
      if ( v13 && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
        *((_DWORD *)v3 + 26) |= 0x20u;
      if ( (v6 & 4) != 0 )
        *((_DWORD *)v3 + 26) |= 0x10000000u;
      if ( (v6 & 0x40) == 0 )
        *((_DWORD *)v3 + 26) |= 4u;
      if ( (v6 & 0x8000000) != 0 )
        *((_DWORD *)v3 + 26) |= 0x4000000u;
      *((_WORD *)v3 + 54) = 6;
      return v3;
    }
    else
    {
      RtlFreeHeap_0(LdrpHeap, 0, v3);
      return 0LL;
    }
  }
  return result;
}
