/*
 * XREFs of BapdpProcessBootMetadata @ 0x140CE8960
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 */

ULONG_PTR BapdpProcessBootMetadata()
{
  __int64 v0; // rcx
  ULONG_PTR result; // rax
  __int64 v2; // rcx
  void *v3; // rbx
  _DWORD v4[4]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v5; // [rsp+50h] [rbp+10h] BYREF

  v4[0] = 1527004268;
  v4[1] = 1201445829;
  v4[2] = 1736995215;
  v4[3] = 1054971003;
  ExSoftRebootFlags = 0;
  ExSoftRebootState = 0;
  ExBootLoaderMetadata = 0LL;
  ExpSysDbgLock.SchedulerApc.NormalContext = 0LL;
  v5 = 0LL;
  if ( (int)KsrGetFirmwareInformation(&v5) >= 0 && v5 && *v5 >= 8u && (v5[81] & 1) != 0 )
    ExSoftRebootFlags |= 0x10000000u;
  if ( ((__int64)ExpSysDbgLock.MutantListHead.Flink & 4) != 0 )
  {
    ExSoftRebootState = 2;
    ExSoftRebootFlags = 2;
  }
  LODWORD(v5) = 0;
  result = BapdpQueryData(v0, v4, 0LL, 0LL, &v5, 0LL);
  if ( (_DWORD)result == -1073741789 )
  {
    result = ExAllocatePool2(256LL, (unsigned int)v5 + 4LL, 0x64506142u);
    v3 = (void *)result;
    if ( result )
    {
      BapdpQueryData(v2, v4, 0LL, result + 4, &v5, 0LL);
      result = (unsigned int)v5;
      *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[72] = (_DWORD)v5;
      ExpSysDbgLock.SchedulerApc.SystemArgument1 = v3;
    }
  }
  return result;
}
