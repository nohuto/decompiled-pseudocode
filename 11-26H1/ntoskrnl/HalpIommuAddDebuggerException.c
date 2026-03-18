/*
 * XREFs of HalpIommuAddDebuggerException @ 0x14050C67C
 * Callers:
 *     HalpIommuPopulateExceptionList @ 0x14050C65C (HalpIommuPopulateExceptionList.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x14057DCF0 (HalpMmAllocateMemoryInternal.c)
 */

__int64 HalpIommuAddDebuggerException()
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 MemoryInternal; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  Flink = HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink;
  if ( HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink
    && !HIDWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Blink) )
  {
    MemoryInternal = HalpMmAllocateMemoryInternal(40LL);
    v2 = (_QWORD *)MemoryInternal;
    if ( !MemoryInternal )
      return 3221225626LL;
    *(_OWORD *)MemoryInternal = 0LL;
    *(_OWORD *)(MemoryInternal + 16) = 0LL;
    *(_QWORD *)(MemoryInternal + 32) = 0LL;
    *(_DWORD *)(MemoryInternal + 16) = LOWORD(Flink->Blink);
    v4 = (unsigned __int64)LODWORD(Flink->Flink) << 8;
    v2[3] = v4;
    v5 = v4 | (8LL * (HIDWORD(Flink->Flink) & 0x1F));
    v2[3] = v5;
    v2[3] = v5 | (HIDWORD(Flink->Flink) >> 5) & 7;
    v6 = (_QWORD *)qword_140FBA7F8;
    if ( *(__int64 **)qword_140FBA7F8 != &HalpIommuExceptionList )
      __fastfail(3u);
    *v2 = &HalpIommuExceptionList;
    v2[1] = v6;
    *v6 = v2;
    qword_140FBA7F8 = (__int64)v2;
  }
  return 0LL;
}
