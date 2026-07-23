/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x1404DD190
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     RtlpHpVsContextInitialize @ 0x1404FB028 (RtlpHpVsContextInitialize.c)
 *     RtlpHpVsContextStart @ 0x1404FE720 (RtlpHpVsContextStart.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall RtlpHpFixedHeapCreate(
        void *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  int v14; // edx
  int v15; // edi
  int v16; // eax
  int v17; // r9d
  _QWORD v19[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v20; // [rsp+58h] [rbp-81h] BYREF
  __int128 v21; // [rsp+68h] [rbp-71h]
  __int128 v22; // [rsp+78h] [rbp-61h]
  _QWORD v23[5]; // [rsp+88h] [rbp-51h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-29h]
  __int128 MemoryInformation; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-9h]
  __int128 v27; // [rsp+E0h] [rbp+7h]
  PVOID BaseAddress; // [rsp+130h] [rbp+57h] BYREF
  char v29; // [rsp+138h] [rbp+5Fh] BYREF

  BaseAddress = a1;
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = (unsigned __int64)a1;
  v24 = 0LL;
  MemoryInformation = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return v6;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           a1,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0 )
      return v6;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, &v20, 0x30uLL, 0LL) < 0 )
      return v6;
    v10 = (unsigned __int64)BaseAddress;
    if ( (PVOID)v20 != BaseAddress || (_DWORD)v22 == 0x10000 )
      return v6;
    v8 = v26;
    if ( (_DWORD)v22 == 4096 )
      v7 = *((_QWORD *)&v21 + 1);
  }
  v11 = (unsigned __int64)&RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v11 = a2;
  v12 = v8 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v7 < ((v13 + 4479) & 0xFFFFFFFFFFFFF000uLL) )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v10, &BaseAddress) < 0 )
      return v6;
    v10 = (unsigned __int64)BaseAddress;
  }
  memset_0((void *)v10, 0, v13 + 384);
  if ( v11 )
    *(_QWORD *)(v10 + 8) = *(_QWORD *)&PspTlsContext.Timer.Processor ^ v11;
  v14 = *a6 & 1;
  *(_BYTE *)(v10 + 32) = *a6 & 1;
  RtlpHpInitializeLock((_QWORD *)(v10 + 24), v14);
  v15 = a5;
  v16 = a5 & 0x18003002;
  *(_DWORD *)(v10 + 16) = -857879331;
  *(_DWORD *)(v10 + 20) = v16;
  *(_QWORD *)v10 = v12;
  v19[0] = v12;
  v19[1] = v10 + 384;
  RtlSetBitsEx((__int64)v19, 0LL, (v13 + 4479) >> 12);
  *(_QWORD *)(v10 + 48) = v12;
  *(_QWORD *)(v10 + 56) = v10 ^ (v10 + 384);
  v17 = *(unsigned __int8 *)(v10 + 32);
  v23[0] = RtlpHpFixedVsAllocate;
  v23[1] = RtlpHpFixedVsFree;
  v23[2] = RtlpHpFixedVsCommit;
  v23[3] = xHalTimerWatchdogStop;
  v23[4] = RtlpHpFixedVsExtend;
  *(_BYTE *)(v10 + 33) = 3;
  v29 = 0;
  RtlpHpVsContextInitialize(v10 + 64, v10, (unsigned int)v23, v17, 1, v15 & 0x8000000, (__int64)&v29, 0LL);
  if ( (int)RtlpHpVsContextStart(v10 + 64) < 0 )
    return 0LL;
  return v10;
}
