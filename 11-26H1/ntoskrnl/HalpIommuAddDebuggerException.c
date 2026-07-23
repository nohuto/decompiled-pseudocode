/*
 * XREFs of HalpIommuAddDebuggerException @ 0x1405060EC
 * Callers:
 *     HalpIommuPopulateExceptionList @ 0x1405060CC (HalpIommuPopulateExceptionList.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 */

__int64 HalpIommuAddDebuggerException()
{
  unsigned int *v0; // rbx
  __int64 MemoryInternal; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v0 = *(unsigned int **)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock;
  if ( *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock
    && !*(_DWORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 220LL) )
  {
    MemoryInternal = HalpMmAllocateMemoryInternal(40LL);
    v2 = (_QWORD *)MemoryInternal;
    if ( !MemoryInternal )
      return 3221225626LL;
    *(_OWORD *)MemoryInternal = 0LL;
    *(_OWORD *)(MemoryInternal + 16) = 0LL;
    *(_QWORD *)(MemoryInternal + 32) = 0LL;
    *(_DWORD *)(MemoryInternal + 16) = *((unsigned __int16 *)v0 + 4);
    v4 = (unsigned __int64)*v0 << 8;
    v2[3] = v4;
    v5 = v4 | (8LL * (v0[1] & 0x1F));
    v2[3] = v5;
    v2[3] = v5 | (v0[1] >> 5) & 7;
    v6 = (_QWORD *)qword_140FBABB8;
    if ( *(__int64 **)qword_140FBABB8 != &HalpIommuExceptionList )
      __fastfail(3u);
    *v2 = &HalpIommuExceptionList;
    v2[1] = v6;
    *v6 = v2;
    qword_140FBABB8 = (__int64)v2;
  }
  return 0LL;
}
