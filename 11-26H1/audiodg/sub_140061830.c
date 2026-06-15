/*
 * XREFs of sub_140061830 @ 0x140061830
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140061830(__int64 a1, void *a2, HANDLE *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HANDLE v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  NTSTATUS v14; // ebx
  HANDLE TargetHandle[36]; // [rsp+40h] [rbp-C0h] BYREF

  TargetHandle[0] = 0LL;
  memset(&TargetHandle[2], 0, 0x108uLL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, TargetHandle, 0x2000u, 0, 0) )
  {
    v10 = *(unsigned __int16 *)(a1 + 544);
    v11 = TargetHandle[0];
    TargetHandle[v10 + 3] = (HANDLE)(*(_QWORD *)(a1 + 552) | (unsigned __int64)TargetHandle[v10 + 3]);
    v12 = (unsigned int)TargetHandle[2];
    v13 = v10 + 1;
    if ( LODWORD(TargetHandle[2]) <= v13 )
      v12 = v13;
    LODWORD(TargetHandle[2]) = v12;
    v14 = NtSetInformationProcess(v11, ProcessVmCounters|0x40, &TargetHandle[3], 8 * v12);
    if ( v14 >= 0 )
    {
      v14 = RtlPublishWnfStateData(0x2821B2CA3BC08B5LL, 0LL, a1 + 544, 16LL, TargetHandle[0]);
      if ( v14 >= 0 )
      {
        v14 = RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, a1 + 560, 4LL, 0LL);
        if ( v14 >= 0 )
        {
          v9 = 0;
          *a3 = TargetHandle[0];
          return v9;
        }
      }
      NtSetInformationProcess(TargetHandle[0], ProcessVmCounters|0x40, 0LL, 0);
      RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, a1 + 560, 4LL, 0LL);
    }
    v9 = v14 | 0x10000000;
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle[0] )
    CloseHandle(TargetHandle[0]);
  return v9;
}
