/*
 * XREFs of BapdProcessFwRamdiskInformation @ 0x140CE8774
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_QWORD *BapdProcessFwRamdiskInformation()
{
  _QWORD *result; // rax
  __int64 v1; // rbx

  result = (_QWORD *)KeLoaderBlock_0;
  v1 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3696LL);
  if ( v1 )
  {
    result = (_QWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x64506142u);
    ExpSysDbgLock.SchedulerApc.Reserved[1] = result;
    if ( result )
    {
      *(_OWORD *)result = *(_OWORD *)v1;
      result[2] = *(_QWORD *)(v1 + 16);
    }
  }
  return result;
}
