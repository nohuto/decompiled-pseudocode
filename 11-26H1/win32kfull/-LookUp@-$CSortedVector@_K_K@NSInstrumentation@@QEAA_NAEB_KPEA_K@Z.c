/*
 * XREFs of ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1400D374C
 * Callers:
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400D4484 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2AE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2B30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1400D2C24 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
        NSInstrumentation::CPrioritizedWriterLock *this,
        unsigned __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rbp
  char v7; // bl
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx

  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  v6 = *((_QWORD *)this + 5);
  v7 = 0;
  if ( v6 )
  {
    v8 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound((__int64)this, a2);
    if ( v8 < v6 )
    {
      v9 = (_QWORD *)(*((_QWORD *)this + 6) + 16 * v8);
      if ( *v9 == *a2 )
      {
        if ( v9 )
        {
          v7 = 1;
          *a3 = v9[1];
        }
      }
    }
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v7;
}
