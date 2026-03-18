/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1402F33EC
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402F352C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(__int64 a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v1; // rbx
  struct _RTL_BITMAP *v3; // r15
  __int64 v4; // r14
  ULONG ClearBits; // ebp
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r12
  void *v9; // r13

  v1 = *(NSInstrumentation::CPlatformReaderWriterLock **)a1;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(*(NSInstrumentation::CPlatformReaderWriterLock **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  v4 = 0LL;
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xFCu ? *(_DWORD *)(a1 + 32) : 0);
  if ( ClearBits != -1 )
  {
    v6 = *(_DWORD *)(a1 + 36);
    v7 = ClearBits / 0x24;
    if ( v6 >= 7 || v7 < v6 )
    {
      LODWORD(v8) = v7 << 12;
    }
    else
    {
      v8 = v7 << 12;
      v9 = (void *)(v8 + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v9, 4096LL) < 0 )
        goto LABEL_10;
      memset_0(v9, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
    RtlTestBit(v3, ClearBits);
    RtlSetBit(v3, ClearBits);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xFCu )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = (unsigned int)v8 + (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 112 * (ClearBits % 0x24);
  }
LABEL_10:
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v1);
  return v4;
}
