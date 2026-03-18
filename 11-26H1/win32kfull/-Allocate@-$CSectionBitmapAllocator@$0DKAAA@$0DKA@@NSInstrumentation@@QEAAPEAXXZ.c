/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400D1488
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400D35B8 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?CommitSlot@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NI@Z @ 0x1400D2900 (-CommitSlot@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NI@Z.c)
 */

unsigned __int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::Allocate(__int64 a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v1; // rbx
  struct _RTL_BITMAP *v3; // r14
  ULONG ClearBits; // eax
  unsigned __int64 v5; // rbp
  ULONG v6; // esi

  v1 = *(NSInstrumentation::CPlatformReaderWriterLock **)a1;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(*(NSInstrumentation::CPlatformReaderWriterLock **)a1);
  v3 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  ClearBits = RtlFindClearBits(v3, 1u, *(_DWORD *)(a1 + 32) < 0xE8u ? *(_DWORD *)(a1 + 32) : 0);
  v5 = 0LL;
  v6 = ClearBits;
  if ( ClearBits != -1
    && (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<237568,928>::CommitSlot(a1, ClearBits) )
  {
    RtlTestBit(v3, v6);
    RtlSetBit(v3, v6);
    if ( ++*(_DWORD *)(a1 + 32) >= 0xE8u )
      *(_DWORD *)(a1 + 32) = 0;
    v5 = (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 8)) + 928 * (v6 & 3) + (unsigned __int64)(v6 >> 2 << 12);
  }
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v1);
  return v5;
}
