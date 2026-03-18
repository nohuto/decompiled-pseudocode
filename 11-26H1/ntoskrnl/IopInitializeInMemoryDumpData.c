/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140CBA480
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140CBA6C4 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034A0F0 (MmAllocateContiguousNodeMemory.c)
 *     KdCopyDataBlock @ 0x1405E35A4 (KdCopyDataBlock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x140725170 (ZwFilterBootOption.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r14
  int v2; // eax
  unsigned int i; // edi
  void *ContiguousNodeMemory; // rax
  __int64 v5; // rax
  PVOID *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  __int128 v10; // [rsp+38h] [rbp-38h]
  _DWORD v11[4]; // [rsp+50h] [rbp-20h] BYREF

  v11[0] = 2012912317;
  v11[1] = 1295123289;
  v11[2] = -198680387;
  v11[3] = 1266192359;
  *(_QWORD *)&v10 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v10 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140E65DD4 = 0;
    LODWORD(qword_140E65DC0) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(1LL, 270532611LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    qword_140E65DB8 = 9152LL;
    for ( i = 0; i < 2; ++i )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140E65DB8, 0, -1, 0, 4, 0x80000000);
      *(_QWORD *)&InMemData[2 * i + 2] = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
      {
        dword_140E65DD4 = -1073741801;
        v6 = (PVOID *)&unk_140E65DA8;
        do
        {
          if ( *v6 )
          {
            MmFreeContiguousMemory(*v6);
            *v6 = 0LL;
          }
          ++v6;
          --v0;
        }
        while ( v0 );
        goto LABEL_20;
      }
      memset_0(ContiguousNodeMemory, 0, qword_140E65DB8);
      v5 = *(_QWORD *)&InMemData[2 * i + 2];
      *(_OWORD *)v5 = v10;
      *(_QWORD *)(v5 + 16) = 0x199B7088610836E8LL;
      if ( v1 )
        KdCopyDataBlock((_OWORD *)(*(_QWORD *)&InMemData[2 * i + 2] + 8216LL));
    }
    v7 = __rdtsc();
    LODWORD(qword_140E65DC8) = v7;
    v8 = __rdtsc();
    HIDWORD(qword_140E65DC8) = v8;
    HIDWORD(qword_140E65DC8) = ExGenRandom(1, (unsigned __int64)HIDWORD(v8) << 32) & 0x7FFFFFFF;
    v9 = IoSetEnvironmentVariableEx(L"DumpInstance", (__int64)v11, (__int64)&qword_140E65DC8, 8, 7);
    if ( v9 < 0 )
    {
      dword_140E65DD4 = v9;
      qword_140E65DC8 = 0x4547415045474150LL;
    }
    dword_140E65DA4 = 1;
LABEL_20:
    _InterlockedExchange(InMemData, 0);
  }
}
