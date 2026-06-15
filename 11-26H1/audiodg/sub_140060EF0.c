/*
 * XREFs of sub_140060EF0 @ 0x140060EF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140061440 @ 0x140061440 (sub_140061440.c)
 */

__int64 __fastcall sub_140060EF0(__int64 a1)
{
  unsigned int v1; // edi
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  HANDLE CurrentProcess; // rax
  _DWORD v9[72]; // [rsp+30h] [rbp-148h] BYREF

  v1 = 0;
  v3 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 272)) != 1 )
  {
LABEL_9:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
    goto LABEL_10;
  }
  memset(&v9[4], 0, 0x108uLL);
  v3 = sub_140061440(a1 + 280, a1 + 544, a1 + 560);
  if ( v3 >= 0 )
  {
    v3 = NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, (PVOID)(a1 + 288), 8 * *(_DWORD *)(a1 + 280));
    if ( v3 >= 0 )
    {
      v4 = *(unsigned __int16 *)(a1 + 544);
      *(_QWORD *)&v9[2 * v4 + 6] |= *(_QWORD *)(a1 + 552);
      v5 = v9[4];
      v6 = v4 + 1;
      if ( v9[4] <= v6 )
        v5 = v6;
      v9[4] = v5;
      CurrentProcess = GetCurrentProcess();
      v3 = NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, &v9[6], 8 * v5);
      if ( v3 < 0 || (v3 = RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, a1 + 560, 4LL, 0LL), v3 < 0) )
      {
        NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
        v9[0] = -1;
        RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, v9, 4LL, 0LL);
        goto LABEL_10;
      }
      goto LABEL_9;
    }
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 272));
  if ( v3 < 0 )
    return v3 | 0x10000000u;
  return v1;
}
