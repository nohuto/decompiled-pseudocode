/*
 * XREFs of sub_14003E994 @ 0x14003E994
 * Callers:
 *     sub_140015D9C @ 0x140015D9C (sub_140015D9C.c)
 *     sub_1400165C0 @ 0x1400165C0 (sub_1400165C0.c)
 *     sub_1400168CC @ 0x1400168CC (sub_1400168CC.c)
 *     sub_140075610 @ 0x140075610 (sub_140075610.c)
 *     sub_1400756AC @ 0x1400756AC (sub_1400756AC.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_14003E994(__int64 a1)
{
  HANDLE CurrentProcess; // rax
  int InformationProcess; // eax
  signed int LastError; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  HANDLE v9; // rax
  SIZE_T v10; // rdi
  ULONG_PTR v11; // rbx
  HANDLE v12; // rax
  __int64 v14; // [rsp+48h] [rbp-59h]
  DWORD Flags; // [rsp+68h] [rbp-39h] BYREF
  ULONG_PTR MaximumWorkingSetSize; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR MinimumWorkingSetSize[2]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD ProcessInformation[12]; // [rsp+88h] [rbp-19h] BYREF

  MinimumWorkingSetSize[0] = 0LL;
  MaximumWorkingSetSize = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  Flags = 0;
  CurrentProcess = GetCurrentProcess();
  InformationProcess = NtQueryInformationProcess(CurrentProcess, ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  if ( InformationProcess >= 0 )
  {
    v9 = GetCurrentProcess();
    if ( GetProcessWorkingSetSizeEx(v9, MinimumWorkingSetSize, &MaximumWorkingSetSize, &Flags) )
    {
      v11 = ((a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL) + ProcessInformation[4];
      MaximumWorkingSetSize += ProcessInformation[4]
                             + ((a1 + 0x4000) & 0xFFFFFFFFFFFFE000uLL)
                             - MinimumWorkingSetSize[0];
      v10 = MaximumWorkingSetSize;
      MinimumWorkingSetSize[0] = v11;
      v12 = GetCurrentProcess();
      if ( SetProcessWorkingSetSizeEx(v12, v11, v10, 0) )
      {
        v8 = 0;
        goto LABEL_9;
      }
    }
    LastError = GetLastError();
  }
  else
  {
    LastError = RtlNtStatusToDosError(InformationProcess);
  }
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v6, v5, v7, 14, 0, 0, 0, 0, v14, a1, v8);
  return v8;
}
