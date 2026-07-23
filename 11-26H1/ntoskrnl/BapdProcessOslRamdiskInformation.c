/*
 * XREFs of BapdProcessOslRamdiskInformation @ 0x140CE87D0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR BapdProcessOslRamdiskInformation()
{
  ULONG_PTR result; // rax
  _DWORD *v1; // rbx
  unsigned int v2; // edx
  unsigned int i; // ecx
  __int64 v4; // r9
  __int64 v5; // r8
  ULONG_PTR v6; // rdx
  unsigned int v7; // edi

  result = KeLoaderBlock_0;
  v1 = *(_DWORD **)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3936LL);
  if ( v1 && *v1 == 2 && v1[3] == 32 )
  {
    v2 = v1[1];
    for ( i = 0; i < v2; ++i )
    {
      v4 = 8LL * i;
      result = (unsigned int)v1[v4 + 11];
      if ( (_DWORD)result != -1 )
      {
        if ( (unsigned int)result >= v2 )
          return result;
        v5 = 8LL * (unsigned int)result;
        if ( v1[v5 + 11] != i )
          return result;
        result = *(_QWORD *)&v1[v4 + 8];
        if ( *(_QWORD *)&v1[v5 + 8] != result )
          return result;
        result = (unsigned int)v1[v4 + 4];
        if ( v1[v5 + 4] != (_DWORD)result )
          return result;
      }
    }
    v6 = 32 * v2 + 16;
    v7 = v6;
    result = ExAllocatePool2(64LL, v6, 0x64506142u);
    ExpSysDbgLock.SchedulerApc.Reserved[0] = (PVOID)result;
    if ( result )
      return (ULONG_PTR)memmove((void *)result, v1, v7);
  }
  return result;
}
