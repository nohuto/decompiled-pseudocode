/*
 * XREFs of ?LookUp@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKPEAUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x1401CC5CC
 * Callers:
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x140340C5C (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B2384 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B23D4 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEBA_KAEBK@Z @ 0x140340B68 (-LowerBound@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@Q.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LookUp(
        NSInstrumentation::CPrioritizedWriterLock *this,
        _DWORD *a2,
        _BYTE *a3)
{
  unsigned __int64 v6; // rbp
  char v7; // bl
  unsigned __int64 v9; // rax
  __int64 v10; // rcx

  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  v6 = *((_QWORD *)this + 5);
  v7 = 0;
  if ( v6 )
  {
    v9 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LowerBound(
           this,
           a2);
    if ( v9 < v6 )
    {
      v10 = *((_QWORD *)this + 6) + 8 * v9;
      if ( *(_DWORD *)v10 == *a2 )
      {
        if ( v10 )
        {
          v7 = 1;
          *a3 = *(_BYTE *)(v10 + 4);
        }
      }
    }
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v7;
}
