/*
 * XREFs of ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1400D329C
 * Callers:
 *     UmfdUnloadFontFileInternal @ 0x1400D31B4 (UmfdUnloadFontFileInternal.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1400D2C24 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14034E3B4 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(
        NSInstrumentation::CPlatformReaderWriterLock *this,
        unsigned __int64 *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rcx

  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
  if ( *((_DWORD *)this + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((NSInstrumentation::CPlatformReaderWriterLock *)((char *)this + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound((__int64)this, a2);
  v6 = *((_QWORD *)this + 5);
  if ( v6 && v5 < v6 && (v7 = (_QWORD *)(*((_QWORD *)this + 6) + 16 * v5), *v7 == *a2) )
  {
    memmove(v7, v7 + 2, 16 * (v6 - v5) - 16);
    --*((_QWORD *)this + 5);
  }
  else
  {
    v4 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 7);
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
  return v4;
}
