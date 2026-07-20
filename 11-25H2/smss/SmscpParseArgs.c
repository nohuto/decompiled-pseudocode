/*
 * XREFs of SmscpParseArgs @ 0x140001FE0
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 * Callees:
 *     SmpGetFirstSessionId @ 0x140003A88 (SmpGetFirstSessionId.c)
 *     SmscpIsDebuggerPresent @ 0x1400197E4 (SmscpIsDebuggerPresent.c)
 */

NTSTATUS __fastcall SmscpParseArgs(unsigned int a1, __int64 a2, int *a3, struct _UNICODE_STRING *a4)
{
  UNICODE_STRING *v8; // r12
  NTSTATUS result; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int FirstSessionId; // eax
  int v13; // edx
  unsigned int v14; // edx
  SIZE_T v15; // r8
  char v16; // cl
  _QWORD *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  WCHAR *Heap; // rax
  int v22; // eax
  NTSTATUS v23; // eax
  ULONG v24; // ebx
  unsigned __int64 v25; // rcx
  WCHAR *v26; // rax
  __int64 v27; // rax
  PCWSTR *v28; // rbx
  __int64 v29; // rdi
  int v30; // eax
  int Length; // r8d
  ULONG v32; // r8d
  int v33; // eax
  int SystemInformation; // [rsp+50h] [rbp-20h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG RetunedLength; // [rsp+A0h] [rbp+30h] BYREF

  SystemInformation = 0;
  RetunedLength = 0;
  v8 = 0LL;
  if ( a1 <= 2 )
    return -1073741585;
  *a3 = 0;
  v10 = wcstoul(*(const wchar_t **)(a2 + 8), 0LL, 16);
  v11 = wcstoul(*(const wchar_t **)(a2 + 16), 0LL, 16);
  SectionOffset.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  result = NtMapViewOfSection(
             (HANDLE)v11,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &SmpMappedView,
             0LL,
             0LL,
             &SectionOffset,
             ViewSize,
             ViewUnmap,
             0,
             2u);
  if ( result >= 0 )
  {
    SectionOffset.QuadPart = 0LL;
    ViewSize[0] = 0LL;
    result = NtMapViewOfSection(
               (HANDLE)v10,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &SmscpSharedWindow,
               0LL,
               0LL,
               &SectionOffset,
               ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result >= 0 )
    {
      SmpDefaultLibPath.Buffer = (PWSTR)((char *)SmpMappedView + *((_QWORD *)SmpMappedView + 1));
      SmpDefaultLibPath.Length = *((_WORD *)SmpMappedView + 8);
      SmpDefaultLibPath.MaximumLength = SmpDefaultLibPath.Length + 2;
      SmpS0InitCmd.Buffer = (PWSTR)((char *)SmpMappedView + *((_QWORD *)SmpMappedView + 3));
      SmpS0InitCmd.Length = *((_WORD *)SmpMappedView + 16);
      SmpS0InitCmd.MaximumLength = SmpS0InitCmd.Length + 2;
      SmscpInitExecuteCmd.Buffer = (PWSTR)((char *)SmpMappedView + *((_QWORD *)SmpMappedView + 5));
      SmscpInitExecuteCmd.Length = *((_WORD *)SmpMappedView + 24);
      SmscpInitExecuteCmd.MaximumLength = SmscpInitExecuteCmd.Length + 2;
      SmscpSubsystemRegistered = (HANDLE)*((_QWORD *)SmscpSharedWindow + 1);
      FirstSessionId = SmpGetFirstSessionId();
      v13 = 0;
      if ( *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL) == FirstSessionId )
        v13 = 8;
      v14 = *a3 & 0xFFFFFFF7 | v13;
      LODWORD(v15) = 0;
      *a3 = v14;
      v16 = v14 ^ (4 * *(_DWORD *)SmpMappedView);
      RetunedLength = 0;
      *a3 = v14 ^ v16 & 4;
      if ( a1 > 3 )
      {
        v17 = (_QWORD *)(a2 + 24);
        v18 = a1 - 3;
        do
        {
          v19 = -1LL;
          while ( *(_WORD *)(*v17 + 2 * v19++ + 2) != 0 )
            ;
          ++v17;
          v15 = (unsigned int)(v15 + 2 * v19 + 2);
          RetunedLength = v15;
          --v18;
        }
        while ( v18 );
        if ( (_DWORD)v15 )
        {
LABEL_13:
          Heap = (WCHAR *)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            SmBaseTag + 786432,
                            v15);
          a4->Buffer = Heap;
          if ( !Heap )
            return -1073741801;
          a4->MaximumLength = RetunedLength;
          a4->Length = 0;
          *Heap = 0;
          v22 = *a3;
          if ( (*a3 & 2) == 0 )
          {
            v27 = a1 - 1;
            if ( (unsigned int)v27 > 3 )
            {
              v28 = (PCWSTR *)(a2 + 24);
              v29 = a1 - 4;
              do
              {
                RtlAppendUnicodeToString(a4, *v28);
                RtlAppendUnicodeToString(a4, L" ");
                ++v28;
                --v29;
              }
              while ( v29 );
              v27 = a1 - 1;
            }
            RtlAppendUnicodeToString(a4, *(PCWSTR *)(a2 + 8 * v27));
            return 0;
          }
          if ( (v22 & 1) == 0 )
          {
            if ( (v22 & 8) != 0 )
              RtlAppendUnicodeStringToString(a4, &SmpS0InitCmd);
            else
              RtlAppendUnicodeStringToString(a4, &SmscpInitExecuteCmd);
            return 0;
          }
          v23 = LdrQueryImageFileExecutionOptions(v8, L"Debugger", 1u, a4->Buffer, 0x30u, &RetunedLength);
          if ( v23 == -2147483643 )
          {
            v24 = RetunedLength;
            v25 = RetunedLength + v8->MaximumLength + 2LL;
            if ( v25 <= RetunedLength || v25 > 0xFFFE )
              goto LABEL_43;
            RetunedLength += v8->MaximumLength + 2;
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, a4->Buffer);
            v26 = (WCHAR *)RtlAllocateHeap(
                             *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                             SmBaseTag + 786432,
                             RetunedLength);
            a4->Buffer = v26;
            if ( !v26 )
              return -1073741801;
            a4->MaximumLength = RetunedLength;
            v23 = LdrQueryImageFileExecutionOptions(v8, L"Debugger", 1u, v26, v24, &RetunedLength);
          }
          if ( v23 >= 0 )
          {
            v32 = RetunedLength & 0xFFFFFFFE;
            RetunedLength = v32;
            if ( v32 > 2 && !a4->Buffer[((unsigned __int64)v32 >> 1) - 1] )
            {
              v32 -= 2;
              RetunedLength = v32;
            }
            a4->Length = v32;
            RtlAppendUnicodeToString(a4, L" ");
LABEL_42:
            RtlAppendUnicodeStringToString(a4, v8);
            return 0;
          }
LABEL_43:
          if ( (*(_BYTE *)a3 & 8) != 0
            && NtQuerySystemInformation(SystemFlagsInformation, &SystemInformation, 4u, 0LL) >= 0
            && (SystemInformation & 0x4000004) != 0
            && (int)SmscpIsDebuggerPresent() >= 0 )
          {
            RtlAppendUnicodeStringToString(a4, &stru_140021BA8);
            v33 = SystemInformation;
            if ( (SystemInformation & 0x20000) != 0 )
            {
              RtlAppendUnicodeStringToString(a4, &stru_140021B98);
              v33 = SystemInformation;
            }
            if ( (v33 & 0x4000000) != 0 )
              RtlAppendUnicodeStringToString(a4, &stru_140021B88);
          }
          goto LABEL_42;
        }
      }
      v30 = *a3;
      if ( (*a3 & 8) != 0 )
      {
        Length = SmpS0InitCmd.Length;
        if ( (v30 & 4) == 0 )
        {
          Length = SmpS0InitCmd.Length + 50;
          v8 = &SmpS0InitCmd;
LABEL_34:
          v30 |= 1u;
        }
      }
      else
      {
        if ( !SmscpInitExecuteCmd.Length )
        {
          Length = 74;
          v8 = (UNICODE_STRING *)&SmscpDefaultCmd;
          goto LABEL_34;
        }
        Length = SmscpInitExecuteCmd.Length;
      }
      v15 = (unsigned int)(Length + 2);
      *a3 = v30 | 2;
      RetunedLength = v15;
      goto LABEL_13;
    }
  }
  return result;
}
