/*
 * XREFs of LdrpLoadForwardedDll @ 0x18003A500
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800C57B0 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v9; // r15
  int v10; // ebx
  int Length; // eax
  char *Buffer; // r9
  int v13; // edx
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v17; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rsi
  unsigned __int64 ActiveFrame; // rbx
  __int64 v22; // rcx
  void *v23; // r15
  void *Atom; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-3C8h] BYREF
  int v26; // [rsp+50h] [rbp-378h] BYREF
  _DWORD v27[3]; // [rsp+54h] [rbp-374h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-368h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-358h] BYREF
  __int128 v30; // [rsp+80h] [rbp-348h] BYREF
  __int128 v31; // [rsp+90h] [rbp-338h]
  __int128 v32; // [rsp+A0h] [rbp-328h]
  __int64 v33; // [rsp+B0h] [rbp-318h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+C0h] [rbp-308h] BYREF
  _DWORD v35[2]; // [rsp+160h] [rbp-268h] BYREF
  void *Src; // [rsp+168h] [rbp-260h]
  __int16 v37; // [rsp+170h] [rbp-258h] BYREF
  _BYTE v38[254]; // [rsp+172h] [rbp-256h] BYREF
  char ArgList[4]; // [rsp+270h] [rbp-158h] BYREF
  int v40; // [rsp+274h] [rbp-154h]
  __int16 *v41; // [rsp+278h] [rbp-150h]
  __int16 v42; // [rsp+280h] [rbp-148h] BYREF
  _BYTE v43[254]; // [rsp+282h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+3C8h] [rbp+0h]

  v9 = a6;
  *(_QWORD *)&v27[1] = a6;
  v40 = 0;
  memset_thunk_772440563353939046(v43, 0, 0xFEuLL);
  v27[0] = 0;
  v35[1] = 0;
  memset_thunk_772440563353939046(v38, 0, 0xFEuLL);
  v41 = &v42;
  *(_DWORD *)ArgList = 0x1000000;
  v42 = 0;
  Src = &v37;
  v35[0] = 0x1000000;
  v37 = 0;
  DestinationString = 0LL;
  v10 = 0;
  Length = SourceString->Length;
  if ( !(_WORD)Length )
    goto LABEL_9;
  v26 = 0;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v25, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v26, (_DWORD)Buffer, Length);
    v13 = v26;
  }
  else
  {
    _InterlockedOr(v25, 0);
    v13 = 0;
    if ( word_1801C5F9C )
    {
      while ( Length-- )
      {
        v22 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C6020 + 2 * v22) )
        {
          if ( !Length )
          {
            v13 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v13 += 2;
      }
    }
    else
    {
      v13 = 2 * Length;
    }
  }
  v14 = v35[0];
  v15 = v13 + (unsigned int)LOWORD(v35[0]) + 2;
  LOWORD(v16) = HIWORD(v35[0]);
  if ( (unsigned int)v15 > HIWORD(v35[0]) )
  {
    if ( (unsigned int)v15 > 0xFFFE )
    {
      v10 = -1073741562;
      goto LABEL_7;
    }
    v16 = (v15 + 63) & 0xFFFFFFC0;
    if ( v16 > 0xFFFE )
      v16 = 65534;
    if ( Src == &v37 )
    {
      Atom = (void *)RtlpAllocateAtom(v16);
      v23 = Atom;
      if ( Atom )
      {
        v14 = v35[0];
        if ( !LOWORD(v35[0]) )
          goto LABEL_42;
        memmove(Atom, Src, LOWORD(v35[0]));
      }
    }
    else
    {
      v23 = (void *)NtdllpReallocateStringRoutine(v16, Src, v15, Buffer);
    }
    v14 = v35[0];
LABEL_42:
    if ( v23 )
    {
      Src = v23;
      HIWORD(v35[0]) = v16;
    }
    else
    {
      v10 = -1073741801;
      LOWORD(v16) = HIWORD(v35[0]);
    }
    v9 = *(_QWORD *)&v27[1];
  }
LABEL_7:
  if ( v10 >= 0 )
  {
    DestinationString.Buffer = (wchar_t *)((char *)Src + v14);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v16 - v14;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v35[0]) += DestinationString.Length;
  }
LABEL_9:
  v27[0] = v10;
  if ( v10 < 0 )
    goto LABEL_21;
  v29[0] = 72LL;
  v29[1] = 1LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v17 = *(_QWORD *)(a4 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
  if ( v29[0] >= 0x48uLL )
  {
    *((_QWORD *)&v31 + 1) = ~ActiveFrame;
    *(_QWORD *)&v32 = ~v17;
    *((_QWORD *)&v32 + 1) = retaddr;
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
  *(_QWORD *)&v30 = ActiveFrame;
  *((_QWORD *)&v30 + 1) = v17;
  LODWORD(v31) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v17 )
      goto LABEL_17;
LABEL_33:
    ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v30;
    goto LABEL_18;
  }
  if ( v17 )
    goto LABEL_33;
LABEL_17:
  LODWORD(v31) = 48;
LABEL_18:
  v26 = 0;
  v27[0] = LdrpPreprocessDllName((char)v35);
  if ( v27[0] >= 0 )
    LdrpLoadDllInternal((char)ArgList, a4, a3, v9, (__int64)v27, 0LL, 0);
  RtlDeactivateActivationContextUnsafeFast(v29);
LABEL_21:
  if ( &v37 != Src )
    RtlpSysVolFree((__int64)Src);
  Src = &v37;
  v35[0] = 0x1000000;
  v37 = 0;
  if ( &v42 != v41 )
    RtlpSysVolFree((__int64)v41);
  return v27[0];
}
