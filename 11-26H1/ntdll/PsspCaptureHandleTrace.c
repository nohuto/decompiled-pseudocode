/*
 * XREFs of PsspCaptureHandleTrace @ 0x1800B703C
 * Callers:
 *     PsspCaptureProcessInformation @ 0x1800B53C8 (PsspCaptureProcessInformation.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

int __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  int result; // eax
  unsigned __int64 v5; // rcx
  int v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v8; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v13; // [rsp+88h] [rbp-78h]

  ReturnLength = 0;
  Handle = 0LL;
  memset_thunk_772440563353939046(ProcessInformation, 0, 0xB0uLL);
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * v13;
    if ( v5 > 0xFFFFFFFF || (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      ProcessInformationLength[0] = v5 + 176;
      ProcessInformationLength[1] = 0;
      result = NtCreateSection(&Handle, 983047LL, L"0", ProcessInformationLength, 4, 0x8000000, 0LL);
      if ( result >= 0 )
      {
        v8 = 0LL;
        v11 = 0LL;
        v6 = ZwMapViewOfSection(Handle, -1LL, &v8, 0LL, 0LL, 0LL, &v11, 1, 0, 4);
        if ( v6 >= 0 )
        {
          memset_thunk_772440563353939046(v8, 0, 0xB0uLL);
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, v8, ProcessInformationLength[0], &ReturnLength) >= 0 )
          {
            NtUnmapViewOfSection(-1LL, v8);
            *(_DWORD *)(a1 + 936) = ReturnLength;
            *(_QWORD *)(a1 + 944) = Handle;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            NtUnmapViewOfSection(-1LL, v8);
            return NtClose(Handle);
          }
        }
        else
        {
          NtClose(Handle);
          return v6;
        }
      }
    }
  }
  return result;
}
