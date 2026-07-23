/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x140CC04C0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140CC0704 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     KdCopyDataBlock @ 0x1405E5F14 (KdCopyDataBlock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x140729D40 (ZwFilterBootOption.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  char v1; // r14
  NTSTATUS v2; // eax
  unsigned int i; // edi
  void *ContiguousNodeMemory; // rax
  __int64 v5; // rax
  PVOID *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  _BYTE Data[8]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  _DWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v13[0] = 2012912317;
  v13[1] = 1295123289;
  v13[2] = -198680387;
  v13[3] = 1266192359;
  Data[0] = 0;
  *(_QWORD *)&v11 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v11 + 1) = 0xB50211F197DACBD4uLL;
  v12 = 0x199B7088610836E8LL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140E66114 = 0;
    LODWORD(qword_140E66100) = 0;
    v1 = 0;
    v2 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    qword_140E660F8 = 9152LL;
    for ( i = 0; i < 2; ++i )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140E660F8, 0, -1, 0, 4, 0x80000000);
      *(_QWORD *)&InMemData[2 * i + 2] = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
      {
        dword_140E66114 = -1073741801;
        v6 = (PVOID *)&unk_140E660E8;
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
      memset_0(ContiguousNodeMemory, 0, qword_140E660F8);
      v5 = *(_QWORD *)&InMemData[2 * i + 2];
      *(_OWORD *)v5 = v11;
      *(_QWORD *)(v5 + 16) = v12;
      if ( v1 )
        KdCopyDataBlock((_OWORD *)(*(_QWORD *)&InMemData[2 * i + 2] + 8216LL));
    }
    v7 = __rdtsc();
    LODWORD(qword_140E66108) = v7;
    v8 = __rdtsc();
    HIDWORD(qword_140E66108) = v8;
    HIDWORD(qword_140E66108) = ExGenRandom(1, (unsigned __int64)HIDWORD(v8) << 32) & 0x7FFFFFFF;
    v9 = IoSetEnvironmentVariableEx(L"DumpInstance", (__int64)v13, (__int64)&qword_140E66108, 8, 7);
    if ( v9 < 0 )
    {
      dword_140E66114 = v9;
      qword_140E66108 = 0x4547415045474150LL;
    }
    dword_140E660E4 = 1;
LABEL_20:
    _InterlockedExchange(InMemData, 0);
  }
}
