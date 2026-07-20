/*
 * XREFs of SmpInitializeKnownSubSystems @ 0x14000E340
 * Callers:
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitializeKnownSubSystems()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rax

  v0 = 0LL;
  SmpKnownSubSysTable = (__int64)RtlAllocateHeap(
                                   *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                   SmBaseTag,
                                   0x300uLL);
  v1 = SmpKnownSubSysTable;
  if ( !SmpKnownSubSysTable )
    return 3221225495LL;
  v3 = 0LL;
  v4 = 32LL;
  while ( 1 )
  {
    v5 = (_QWORD *)(v0 + v1);
    v5[1] = v5;
    *v5 = v5;
    RtlInitializeSRWLock(v3 + v1 + 16);
    v3 += 24LL;
    v0 += 24LL;
    if ( !--v4 )
      break;
    v1 = SmpKnownSubSysTable;
  }
  RtlInitializeConditionVariable(&SmpSubSysReadyCondition);
  qword_1400324D8 = (__int64)&SmpOverflowSubSysList;
  SmpOverflowSubSysList = (__int64)&SmpOverflowSubSysList;
  return 0LL;
}
