/*
 * XREFs of sub_140048650 @ 0x140048650
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140048650(__int64 a1)
{
  __int64 result; // rax
  HANDLE CurrentProcess; // rax
  __int64 v4; // rdx
  _OWORD *v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _BYTE v14[280]; // [rsp+30h] [rbp-118h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 272), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, 0LL, 0);
    NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
    memset(v14, 0, 0x108uLL);
    v4 = 2LL;
    v5 = (_OWORD *)(a1 + 280);
    v6 = v14;
    do
    {
      v7 = v6[1];
      *v5 = *v6;
      v8 = v6[2];
      v5[1] = v7;
      v9 = v6[3];
      v5[2] = v8;
      v10 = v6[4];
      v5[3] = v9;
      v11 = v6[5];
      v5[4] = v10;
      v12 = v6[6];
      v5[5] = v11;
      v13 = v6[7];
      v6 += 8;
      v5[6] = v12;
      v5 += 8;
      *(v5 - 1) = v13;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)v5 = *(_QWORD *)v6;
    *(_OWORD *)(a1 + 544) = 0LL;
    *(_DWORD *)(a1 + 560) = -1;
    return RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, a1 + 560, 4LL, 0LL);
  }
  return result;
}
