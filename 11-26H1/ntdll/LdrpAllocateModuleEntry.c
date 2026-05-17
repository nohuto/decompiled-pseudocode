/*
 * XREFs of LdrpAllocateModuleEntry @ 0x1800D1C60
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpAllocatePlaceHolder @ 0x1800D1A80 (LdrpAllocatePlaceHolder.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800126B0 (RtlAddRefActivationContext.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAllocateModuleEntry(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 Heap_0; // rax
  __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // rdi
  _QWORD *v8; // r15
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rcx
  unsigned __int64 ActiveFrame; // rdi
  int v11; // edx
  volatile signed __int32 *v12; // rdi
  bool v13; // zf
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-69h] BYREF

  result = RtlAllocateHeap_0();
  v3 = result;
  if ( result )
  {
    Heap_0 = RtlAllocateHeap_0();
    v5 = Heap_0;
    if ( Heap_0 )
    {
      v6 = 0;
      *(_QWORD *)(v3 + 152) = Heap_0;
      if ( a1 )
      {
        *(_QWORD *)(v3 + 176) = a1;
        *(_DWORD *)(v3 + 272) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v6 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = v3;
        v7 = *(_QWORD *)(a1 + 48);
        if ( v7 )
        {
          v12 = *(volatile signed __int32 **)(v7 + 136);
          if ( v12 )
          {
            RtlAddRefActivationContext(v12);
            *(_QWORD *)(v3 + 136) = v12;
          }
        }
        else
        {
          v8 = (_QWORD *)(v3 + 136);
          ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          if ( v3 != -136 )
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
                  RtlAddRefActivationContext(*(volatile signed __int32 **)(ActiveFrame + 8));
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
          *(_DWORD *)(v3 + 268) = 4;
        }
      }
      v13 = LdrInitState == 1;
      *(_QWORD *)(v3 + 120) = v3 + 112;
      *(_QWORD *)(v3 + 112) = v3 + 112;
      *(_QWORD *)(v3 + 160) = v5;
      *(_QWORD *)(v3 + 168) = v5;
      *(_QWORD *)v5 = v3 + 160;
      *(_QWORD *)(v5 + 8) = v3 + 160;
      *(_QWORD *)(v3 + 144) = 0LL;
      *(_DWORD *)(v5 + 24) = 1;
      *(_DWORD *)(v3 + 276) = 2;
      if ( v13 && (void *)qword_1801C5930 != NtCurrentTeb()->ClientId.UniqueThread )
        *(_DWORD *)(v3 + 104) |= 0x20u;
      if ( (v6 & 4) != 0 )
        *(_DWORD *)(v3 + 104) |= 0x10000000u;
      if ( (v6 & 0x40) == 0 )
        *(_DWORD *)(v3 + 104) |= 4u;
      if ( (v6 & 0x8000000) != 0 )
        *(_DWORD *)(v3 + 104) |= 0x4000000u;
      *(_WORD *)(v3 + 108) = 6;
      return v3;
    }
    else
    {
      RtlFreeHeap_0();
      return 0LL;
    }
  }
  return result;
}
