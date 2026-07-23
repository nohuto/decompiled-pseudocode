/*
 * XREFs of RtlpLogHeapContractEvent @ 0x180095098
 * Callers:
 *     RtlpDecommitBlock @ 0x180002230 (RtlpDecommitBlock.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800951F0 (RtlpEstimateAllocatedSize.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapContractEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        HANDLE TraceHandle)
{
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r11
  int v15; // r9d
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  int v20; // eax
  _BYTE Fields[6]; // [rsp+20h] [rbp-61h] BYREF
  __int16 v22; // [rsp+26h] [rbp-5Bh]
  __int64 v23; // [rsp+40h] [rbp-41h]
  __int64 v24; // [rsp+48h] [rbp-39h]
  __int64 v25; // [rsp+50h] [rbp-31h]
  __int64 v26; // [rsp+58h] [rbp-29h]
  __int64 v27; // [rsp+60h] [rbp-21h]
  __int64 v28; // [rsp+68h] [rbp-19h]
  int v29; // [rsp+70h] [rbp-11h]
  __int64 v30; // [rsp+74h] [rbp-Dh]

  memset_thunk_772440563353939046(Fields, 0, 0x5CuLL);
  v23 = a1;
  v28 = 0LL;
  v29 = 0;
  v25 = a2;
  v26 = a4;
  v30 = RtlpEstimateAllocatedSize(a1);
  if ( a5 != (_BYTE)v11 )
    a3 -= a6;
  v12 = v28;
  v13 = *(__int64 **)(a1 + 288);
  v14 = v11;
  v24 = a3;
  v15 = v11;
  v29 = v11;
  while ( v13 != (__int64 *)(a1 + 288) )
  {
    v12 += (unsigned int)(*((_DWORD *)v13 + 8) << 12);
    v28 = v12;
    v15 += *((_DWORD *)v13 + 15);
    v29 = v15;
    v20 = *((_DWORD *)v13 + 14);
    v13 = (__int64 *)*v13;
    v14 += (unsigned int)(v20 << 12);
  }
  v16 = v12 + *(_QWORD *)(a1 + 592);
  if ( *(_BYTE *)(a1 + 418) == 2 && (v17 = *(_QWORD *)(a1 + 408)) != 0 )
  {
    v11 = *(_QWORD *)(v17 + 48) - v17;
    v18 = *(_QWORD *)(v17 + 40) - v17;
  }
  else
  {
    v18 = v11;
  }
  v28 = v16 + v11;
  v27 = v18 + v16 - *(_QWORD *)(a1 + 664) - v14;
  v22 = 4138;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
