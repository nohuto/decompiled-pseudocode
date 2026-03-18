/*
 * XREFs of ExpInitializeMemoryMirroring @ 0x140CE3C6C
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C7FBB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwCreatePartition @ 0x140724B90 (ZwCreatePartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpAddNonMirroredRanges @ 0x140CE3BA0 (ExpAddNonMirroredRanges.c)
 */

__int64 ExpInitializeMemoryMirroring()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+30h] [rbp-30h]
  int v5; // [rsp+34h] [rbp-2Ch]
  __int64 v6; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-14h]
  __int128 v10; // [rsp+50h] [rbp-10h]
  __int64 v11; // [rsp+70h] [rbp+10h] BYREF

  v5 = 0;
  v9 = 0;
  v11 = 0LL;
  result = KeLoaderBlock_0;
  DestinationString = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\NonMirroredMemory");
    v4 = 48;
    p_DestinationString = &DestinationString;
    v6 = 0LL;
    v8 = 512;
    v10 = 0LL;
    result = ZwCreatePartition(0LL, (__int64)&v11);
    if ( (int)result >= 0 )
    {
      v1 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3752LL);
      if ( *(_DWORD *)v1 )
        ExpAddNonMirroredRanges(v11, *(_DWORD *)v1, *(__int64 **)(v1 + 8), 0);
      v2 = *(unsigned int *)(v1 + 4);
      if ( (_DWORD)v2 )
        ExpAddNonMirroredRanges(v11, v2, *(__int64 **)(v1 + 16), 1);
      result = (__int64)ExpSysDbgLock.SavedApcState.ApcListHead[0].Flink;
      if ( ExpSysDbgLock.SavedApcState.ApcListHead[0].Flink )
        return guard_dispatch_icall_no_overrides(v11, v2);
    }
  }
  return result;
}
