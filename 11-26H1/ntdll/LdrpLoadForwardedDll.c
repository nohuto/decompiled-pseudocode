/*
 * XREFs of LdrpLoadForwardedDll @ 0x180024A70
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800C2F70 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(PCANSI_STRING SourceString, int a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 v10; // r15
  int v11; // ebx
  ULONG UTF8StringByteCount; // eax
  char *Buffer; // r9
  ULONG v14; // edx
  unsigned __int16 v15; // cx
  unsigned int v16; // r8d
  unsigned int v17; // edi
  __int64 v18; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rsi
  unsigned __int64 ActiveFrame; // rbx
  __int64 v23; // rcx
  void *v24; // r15
  PVOID Atom; // rax
  signed __int32 v26[8]; // [rsp+0h] [rbp-3C8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+50h] [rbp-378h] BYREF
  _DWORD v28[3]; // [rsp+54h] [rbp-374h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-368h] BYREF
  _QWORD v30[2]; // [rsp+70h] [rbp-358h] BYREF
  __int128 v31; // [rsp+80h] [rbp-348h] BYREF
  __int128 v32; // [rsp+90h] [rbp-338h]
  __int128 v33; // [rsp+A0h] [rbp-328h]
  __int64 v34; // [rsp+B0h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+C0h] [rbp-308h] BYREF
  _DWORD v36[2]; // [rsp+160h] [rbp-268h] BYREF
  void *Src; // [rsp+168h] [rbp-260h]
  __int16 v38; // [rsp+170h] [rbp-258h] BYREF
  _BYTE v39[254]; // [rsp+172h] [rbp-256h] BYREF
  int v40[2]; // [rsp+270h] [rbp-158h] BYREF
  PVOID BaseAddress; // [rsp+278h] [rbp-150h]
  __int16 v42; // [rsp+280h] [rbp-148h] BYREF
  _BYTE v43[254]; // [rsp+282h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+3C8h] [rbp+0h]

  v10 = a6;
  *(_QWORD *)&v28[1] = a6;
  v40[1] = 0;
  memset_thunk_772440563353939046(v43, 0, 0xFEuLL);
  v28[0] = 0;
  v36[1] = 0;
  memset_thunk_772440563353939046(v39, 0, 0xFEuLL);
  BaseAddress = &v42;
  v40[0] = 0x1000000;
  v42 = 0;
  Src = &v38;
  v36[0] = 0x1000000;
  v38 = 0;
  DestinationString = 0LL;
  v11 = 0;
  UTF8StringByteCount = SourceString->Length;
  if ( !(_WORD)UTF8StringByteCount )
    goto LABEL_9;
  UnicodeStringActualByteCount = 0;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v26, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    v14 = UnicodeStringActualByteCount;
  }
  else
  {
    _InterlockedOr(v26, 0);
    v14 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v23 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C5020 + 2 * v23) )
        {
          if ( !UTF8StringByteCount )
          {
            v14 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v14 += 2;
      }
    }
    else
    {
      v14 = 2 * UTF8StringByteCount;
    }
  }
  v15 = v36[0];
  v16 = v14 + LOWORD(v36[0]) + 2;
  LOWORD(v17) = HIWORD(v36[0]);
  if ( v16 > HIWORD(v36[0]) )
  {
    if ( v16 > 0xFFFE )
    {
      v11 = -1073741562;
      goto LABEL_7;
    }
    v17 = (v16 + 63) & 0xFFFFFFC0;
    if ( v17 > 0xFFFE )
      v17 = 65534;
    if ( Src == &v38 )
    {
      Atom = RtlpAllocateAtom(v17);
      v24 = Atom;
      if ( Atom )
      {
        v15 = v36[0];
        if ( !LOWORD(v36[0]) )
          goto LABEL_42;
        memmove(Atom, Src, LOWORD(v36[0]));
      }
    }
    else
    {
      v24 = (void *)NtdllpReallocateStringRoutine(v17, Src);
    }
    v15 = v36[0];
LABEL_42:
    if ( v24 )
    {
      Src = v24;
      HIWORD(v36[0]) = v17;
    }
    else
    {
      v11 = -1073741801;
      LOWORD(v17) = HIWORD(v36[0]);
    }
    v10 = *(_QWORD *)&v28[1];
  }
LABEL_7:
  if ( v11 >= 0 )
  {
    DestinationString.Buffer = (wchar_t *)((char *)Src + v15);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v17 - v15;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v36[0]) += DestinationString.Length;
  }
LABEL_9:
  v28[0] = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  v30[0] = 72LL;
  v30[1] = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v18 = a4[17];
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( v30[0] >= 0x48uLL )
  {
    *((_QWORD *)&v32 + 1) = ~ActiveFrame;
    *(_QWORD *)&v33 = ~v18;
    *((_QWORD *)&v33 + 1) = retaddr;
  }
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    goto LABEL_18;
  }
  *(_QWORD *)&v31 = ActiveFrame;
  *((_QWORD *)&v31 + 1) = v18;
  LODWORD(v32) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v18 )
      goto LABEL_17;
LABEL_33:
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v31;
    goto LABEL_18;
  }
  if ( v18 )
    goto LABEL_33;
LABEL_17:
  LODWORD(v32) = 48;
LABEL_18:
  UnicodeStringActualByteCount = 0;
  v28[0] = LdrpPreprocessDllName(v36, v40, a4, &UnicodeStringActualByteCount);
  if ( v28[0] >= 0 )
    LdrpLoadDllInternal((int)v40, a2, UnicodeStringActualByteCount, a5, a4, a3, v10, (__int64)v28, 0LL, 0);
  RtlDeactivateActivationContextUnsafeFast(v30);
LABEL_21:
  if ( &v38 != Src )
    RtlpSysVolFree(Src);
  Src = &v38;
  v36[0] = 0x1000000;
  v38 = 0;
  if ( &v42 != BaseAddress )
    RtlpSysVolFree(BaseAddress);
  return v28[0];
}
