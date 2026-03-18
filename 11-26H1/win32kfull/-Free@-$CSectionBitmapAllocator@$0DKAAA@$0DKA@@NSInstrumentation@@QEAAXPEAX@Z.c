/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400D1228
 * Callers:
 *     ?Free@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400D131C (-Free@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::Free(__int64 a1, void *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v2; // rdi
  ULONG v5; // ebx

  if ( a2 )
  {
    v2 = *(NSInstrumentation::CPlatformReaderWriterLock **)a1;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(*(NSInstrumentation::CPlatformReaderWriterLock **)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x3A0
       + 4 * (((unsigned int)a2 - (*(_DWORD *)(a1 + 8) ^ (unsigned int)*(_QWORD *)(a1 + 16))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), v5);
    memset_0(a2, 0, 0x3A0uLL);
    *(_DWORD *)(a1 + 32) = v5;
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v2);
  }
}
