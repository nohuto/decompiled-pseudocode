/*
 * XREFs of RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsCurrentProcess @ 0x1800D8950 (RtlIsCurrentProcess.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 */

int __fastcall RtlOpenCrossProcessEmulatorWorkConnection(HANDLE ProcessHandle, HANDLE *a2, _QWORD *a3)
{
  int result; // eax
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  __int128 v8; // [rsp+58h] [rbp-28h] BYREF
  __int128 v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+40h] BYREF
  __int64 ProcessInformation; // [rsp+C8h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = RtlIsCurrentProcess();
  if ( !(_BYTE)result )
  {
    ProcessInformation = 0LL;
    result = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 8u, 0LL);
    if ( result >= 0 )
    {
      if ( ProcessInformation )
      {
        result = ZwReadVirtualMemory(ProcessHandle, ProcessInformation + 1160, &v8, 40LL, 0LL);
        if ( result >= 0 && (BYTE4(v8) & 2) != 0 && (_QWORD)v9 )
        {
          Handle = 0LL;
          v12 = 0LL;
          v7 = 0LL;
          result = ZwDuplicateObject(ProcessHandle, v9, -1LL, &Handle, 0, 0, 6);
          if ( result < 0
            || (result = ZwMapViewOfSection(Handle, -1LL, &v12, 0LL, 0LL, 0LL, &v7, 2, 0x100000, 4), result < 0) )
          {
            if ( v12 )
              result = NtUnmapViewOfSection(-1LL, v12);
            if ( Handle )
              return NtClose(Handle);
          }
          else
          {
            *a2 = Handle;
            result = v12;
            *a3 = v12;
          }
        }
      }
    }
  }
  return result;
}
