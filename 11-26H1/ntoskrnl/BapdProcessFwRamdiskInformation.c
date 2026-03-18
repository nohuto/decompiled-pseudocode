/*
 * XREFs of BapdProcessFwRamdiskInformation @ 0x140CE23D4
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C7FBB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

ULONG_PTR BapdProcessFwRamdiskInformation()
{
  ULONG_PTR result; // rax
  __int64 v1; // rbx

  result = KeLoaderBlock_0;
  v1 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3696LL);
  if ( v1 )
  {
    result = ExAllocatePool2(64LL, 0x18uLL, 0x64506142u);
    *(_QWORD *)&ExpSysDbgLock.SchedulerApc.Type = result;
    if ( result )
    {
      *(_OWORD *)result = *(_OWORD *)v1;
      *(_QWORD *)(result + 16) = *(_QWORD *)(v1 + 16);
    }
  }
  return result;
}
