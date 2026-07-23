/*
 * XREFs of RtlpInitializeHeapSegment @ 0x18006A718
 * Callers:
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x180014CA0 (RtlpCreateUCREntry.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlpGetHeapProtection @ 0x180076AF0 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800C9D90 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        char *BaseAddress,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddressa,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // r15
  unsigned int NtGlobalFlag; // r13d
  __int64 v13; // rsi
  char *v14; // r8
  signed __int64 v15; // rsi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  char *v23; // r8
  _QWORD *v24; // rbx
  __int64 *v25; // rax
  __int64 v27; // rdx
  ULONG Protect; // eax
  __int64 v29; // rcx
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h]

  v8 = a8;
  RegionSize[0] = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v13 = a3 + 15;
  v14 = BaseAddressa;
  v15 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
  v31 = (__int64)(a8 - a6) / 4096;
  a8 = v15 >> 4;
  v16 = v15 + a2;
  v17 = v15 + a2 + 80;
  if ( v17 >= (unsigned __int64)BaseAddressa )
  {
    if ( v17 < v8 )
    {
      v27 = *((_QWORD *)BaseAddress + 72) - *((_QWORD *)BaseAddress + 83);
      RegionSize[0] = (v16 - (_QWORD)BaseAddressa + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize[0], v27, BaseAddress, BaseAddress + 376) )
      {
        Protect = RtlpGetHeapProtection(BaseAddress);
        if ( ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)&BaseAddressa,
               0LL,
               RegionSize,
               0x1000u,
               Protect) >= 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v29 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v29 = 2147353472LL;
          if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize[0], 3LL);
          v14 = &BaseAddressa[RegionSize[0]];
          BaseAddressa += RegionSize[0];
          goto LABEL_3;
        }
      }
      ++*((_DWORD *)BaseAddress + 158);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v18 = (__int64)(v8 - (_QWORD)v14) / 4096;
  *(_WORD *)(a2 + 8) = a8;
  *(_WORD *)(a2 + 12) = *((_WORD *)BaseAddress + 70);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v19 = RtlLogStackBackTraceEx(1LL);
    v14 = BaseAddressa;
    *(_WORD *)(a2 + 88) = v19;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = BaseAddress;
  *(_DWORD *)(a2 + 56) = v31;
  v20 = (unsigned int)((_DWORD)v31 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v20;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v16;
  *(_DWORD *)(a2 + 80) = 0;
  *((_QWORD *)BaseAddress + 72) += v20;
  *((_QWORD *)BaseAddress + 71) += v20;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v16 + 12) = *(_WORD *)(a2 + 8) ^ *((_WORD *)BaseAddress + 70);
  v21 = *(_QWORD *)(a2 + 40);
  if ( v21 == a2 )
  {
    LOBYTE(v22) = 0;
  }
  else
  {
    v22 = ((unsigned __int64)v15 >> 16) + 1;
    if ( v22 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v21, v16, a2, 0LL, 0LL);
      v14 = BaseAddressa;
    }
  }
  *(_BYTE *)(v16 + 14) = v22;
  RtlpCreateUCREntry(
    (__int64)BaseAddress,
    a2,
    (__int64)(v14 - 48),
    (unsigned int)((_DWORD)v18 << 12),
    v16,
    (__int64 *)RegionSize);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v16, RegionSize[0]);
  v23 = BaseAddress + 288;
  v24 = (_QWORD *)(a2 + 24);
  v25 = (__int64 *)*((_QWORD *)BaseAddress + 37);
  if ( (char *)*v25 == BaseAddress + 288 )
  {
    *v24 = v23;
    v24[1] = v25;
    *v25 = (__int64)v24;
    *((_QWORD *)BaseAddress + 37) = v24;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v23, 0, *v25, 0LL);
  }
  ++*((_DWORD *)BaseAddress + 150);
  return 1;
}
