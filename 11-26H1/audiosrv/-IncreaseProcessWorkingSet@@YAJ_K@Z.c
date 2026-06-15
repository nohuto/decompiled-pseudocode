/*
 * XREFs of ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1801622F0
 * Callers:
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180162244 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x1801624DC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall IncreaseProcessWorkingSet(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  HANDLE v10; // rax
  SIZE_T v11; // rdi
  ULONG_PTR v12; // rbx
  HANDLE v13; // rax
  int ReturnLength; // [rsp+28h] [rbp-79h]
  DWORD Flags; // [rsp+68h] [rbp-39h] BYREF
  ULONG_PTR MaximumWorkingSetSize; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR MinimumWorkingSetSize[2]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+7h]

  MinimumWorkingSetSize[0] = 0LL;
  MaximumWorkingSetSize = 0LL;
  memset_0(ProcessInformation, 0, 0x60uLL);
  Flags = 0;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v10 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v10, MinimumWorkingSetSize, &MaximumWorkingSetSize, &Flags) )
    {
      v12 = ((a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL) + v20;
      MaximumWorkingSetSize += v20 + ((a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL) - MinimumWorkingSetSize[0];
      v11 = MaximumWorkingSetSize;
      MinimumWorkingSetSize[0] = v12;
      v13 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v13, v12, v11, 0) )
      {
        v9 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_1801D69C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, v8, ReturnLength);
  return v9;
}
