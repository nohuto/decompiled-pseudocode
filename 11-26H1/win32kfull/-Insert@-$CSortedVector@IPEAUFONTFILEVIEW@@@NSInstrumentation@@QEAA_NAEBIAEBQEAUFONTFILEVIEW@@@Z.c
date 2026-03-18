/*
 * XREFs of ?Insert@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z @ 0x1400D1570
 * Callers:
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400D0168 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1400D28AC (-LowerBound@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140349D44 (-ReAllocate@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14034E3B4 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Insert(
        NSInstrumentation::CPlatformReaderWriterLock *this,
        _DWORD *a2,
        _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rcx

  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
  if ( *((_DWORD *)this + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((NSInstrumentation::CPlatformReaderWriterLock *)((char *)this + 8));
  v7 = NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LowerBound(this, a2);
  v8 = *((_QWORD *)this + 5);
  v9 = 16 * v7;
  v10 = v7;
  if ( v7 < v8 && (v14 = *((_QWORD *)this + 6), *(_DWORD *)(v14 + 16 * v7) == *a2) )
  {
    *(_QWORD *)(v14 + v9 + 8) = *a3;
  }
  else
  {
    v11 = *((_QWORD *)this + 4);
    if ( v8 != v11
      || (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::ReAllocate(this, 2 * v11) )
    {
      memmove(
        (void *)(v9 + *((_QWORD *)this + 6) + 16),
        (const void *)(v9 + *((_QWORD *)this + 6)),
        16 * (*((_QWORD *)this + 5) - v10));
      v12 = *((_QWORD *)this + 6);
      *(_DWORD *)(v12 + v9) = *a2;
      *(_QWORD *)(v12 + v9 + 8) = *a3;
      ++*((_QWORD *)this + 5);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 7);
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
  return v6;
}
