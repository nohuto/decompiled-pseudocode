/*
 * XREFs of SmscpParseArgs @ 0x140002180
 * Callers:
 *     SmscMain @ 0x140001E10 (SmscMain.c)
 * Callees:
 *     SmscpIsDebuggerPresent @ 0x14001943C (SmscpIsDebuggerPresent.c)
 */

NTSTATUS __fastcall SmscpParseArgs(unsigned int a1, __int64 a2, int *a3, struct _UNICODE_STRING *a4)
{
  UNICODE_STRING *v8; // r12
  unsigned int v9; // eax
  const wchar_t *v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  NTSTATUS result; // eax
  int i; // ecx
  int v15; // edx
  unsigned int v16; // edx
  int v17; // ecx
  ULONG v18; // edx
  _QWORD *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  WCHAR *Heap; // rax
  int v24; // eax
  NTSTATUS v25; // eax
  ULONG v26; // ebx
  unsigned __int64 v27; // rcx
  WCHAR *v28; // rax
  ULONG v29; // r8d
  __int64 v30; // rax
  PCWSTR *v31; // rbx
  __int64 v32; // rdi
  int v33; // eax
  int Length; // edx
  int v35; // eax
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
  v9 = wcstoul(*(const wchar_t **)(a2 + 8), 0LL, 16);
  v10 = *(const wchar_t **)(a2 + 16);
  v11 = v9;
  SectionOffset.QuadPart = 0LL;
  ViewSize[0] = 0LL;
  v12 = wcstoul(v10, 0LL, 16);
  result = NtMapViewOfSection(
             (HANDLE)v12,
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
               (HANDLE)v11,
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
      ViewSize[0] = -2500000LL;
      for ( i = RtlGetCurrentServiceSessionId(); i == -1; i = RtlGetCurrentServiceSessionId() )
        NtDelayExecution(0, (LARGE_INTEGER *)ViewSize);
      v15 = 0;
      if ( *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL) == i )
        v15 = 8;
      v16 = *a3 & 0xFFFFFFF7 | v15;
      *a3 = v16;
      v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(4 * *(_DWORD *)SmpMappedView)) & 4;
      v18 = 0;
      RetunedLength = 0;
      *a3 = v17;
      if ( a1 > 3 )
      {
        v19 = (_QWORD *)(a2 + 24);
        v20 = a1 - 3;
        do
        {
          v21 = -1LL;
          while ( *(_WORD *)(*v19 + 2 * v21++ + 2) != 0 )
            ;
          ++v19;
          v18 += 2 * v21 + 2;
          RetunedLength = v18;
          --v20;
        }
        while ( v20 );
        if ( v18 )
        {
LABEL_14:
          Heap = (WCHAR *)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            SmBaseTag + 786432,
                            v18);
          a4->Buffer = Heap;
          if ( !Heap )
            return -1073741801;
          a4->MaximumLength = RetunedLength;
          a4->Length = 0;
          *Heap = 0;
          v24 = *a3;
          if ( (*a3 & 2) == 0 )
          {
            v30 = a1 - 1;
            if ( (unsigned int)v30 > 3 )
            {
              v31 = (PCWSTR *)(a2 + 24);
              v32 = a1 - 4;
              do
              {
                RtlAppendUnicodeToString(a4, *v31);
                RtlAppendUnicodeToString(a4, L" ");
                ++v31;
                --v32;
              }
              while ( v32 );
              v30 = a1 - 1;
            }
            RtlAppendUnicodeToString(a4, *(PCWSTR *)(a2 + 8 * v30));
            return 0;
          }
          if ( (v24 & 1) == 0 )
          {
            if ( (v24 & 8) != 0 )
              RtlAppendUnicodeStringToString(a4, &SmpS0InitCmd);
            else
              RtlAppendUnicodeStringToString(a4, &SmscpInitExecuteCmd);
            return 0;
          }
          v25 = LdrQueryImageFileExecutionOptions(v8, L"Debugger", 1u, a4->Buffer, 0x30u, &RetunedLength);
          if ( v25 == -2147483643 )
          {
            v26 = RetunedLength;
            v27 = RetunedLength + v8->MaximumLength + 2LL;
            if ( v27 <= RetunedLength || v27 > 0xFFFE )
              goto LABEL_45;
            RetunedLength += v8->MaximumLength + 2;
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, a4->Buffer);
            v28 = (WCHAR *)RtlAllocateHeap(
                             *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                             SmBaseTag + 786432,
                             RetunedLength);
            a4->Buffer = v28;
            if ( !v28 )
              return -1073741801;
            a4->MaximumLength = RetunedLength;
            v25 = LdrQueryImageFileExecutionOptions(v8, L"Debugger", 1u, v28, v26, &RetunedLength);
          }
          if ( v25 >= 0 )
          {
            v29 = RetunedLength & 0xFFFFFFFE;
            RetunedLength = v29;
            if ( v29 > 2 && !a4->Buffer[((unsigned __int64)v29 >> 1) - 1] )
            {
              v29 -= 2;
              RetunedLength = v29;
            }
            a4->Length = v29;
            RtlAppendUnicodeToString(a4, L" ");
LABEL_30:
            RtlAppendUnicodeStringToString(a4, v8);
            return 0;
          }
LABEL_45:
          if ( (*(_BYTE *)a3 & 8) != 0
            && NtQuerySystemInformation(SystemFlagsInformation, &SystemInformation, 4u, 0LL) >= 0
            && (SystemInformation & 0x4000004) != 0
            && (int)SmscpIsDebuggerPresent() >= 0 )
          {
            RtlAppendUnicodeStringToString(a4, &stru_140020BA8);
            v35 = SystemInformation;
            if ( (SystemInformation & 0x20000) != 0 )
            {
              RtlAppendUnicodeStringToString(a4, &stru_140020B98);
              v35 = SystemInformation;
            }
            if ( (v35 & 0x4000000) != 0 )
              RtlAppendUnicodeStringToString(a4, &stru_140020B88);
          }
          goto LABEL_30;
        }
      }
      v33 = *a3;
      if ( (*a3 & 8) != 0 )
      {
        Length = SmpS0InitCmd.Length;
        if ( (v33 & 4) == 0 )
        {
          Length = SmpS0InitCmd.Length + 50;
          v8 = &SmpS0InitCmd;
LABEL_43:
          v33 |= 1u;
        }
      }
      else
      {
        if ( !SmscpInitExecuteCmd.Length )
        {
          Length = 74;
          v8 = (UNICODE_STRING *)&SmscpDefaultCmd;
          goto LABEL_43;
        }
        Length = SmscpInitExecuteCmd.Length;
      }
      v18 = Length + 2;
      *a3 = v33 | 2;
      RetunedLength = v18;
      goto LABEL_14;
    }
  }
  return result;
}
