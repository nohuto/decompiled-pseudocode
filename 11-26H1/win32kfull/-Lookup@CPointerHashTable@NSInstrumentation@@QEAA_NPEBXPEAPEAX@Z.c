/*
 * XREFs of ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400D1AE4
 * Callers:
 *     GreHintDCWnd @ 0x1400D1780 (GreHintDCWnd.c)
 *     GrepIsWindowGdiScaled @ 0x1400D1A50 (GrepIsWindowGdiScaled.c)
 *     ?GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@@Z @ 0x1400D37E0 (-GrepGetHwndDpiBucket@@YA_NAEBUSESSION_GLOBALS@Full@Gre@@PEAUHWND__@@PEAUHWND_LOGPIXELS_BUCKET@@.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2AE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2B30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400D2580 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Lookup(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        void **a3)
{
  struct NSInstrumentation::CPointerHashTable::ENTRY *v6; // rax
  char v7; // bl

  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  v6 = NSInstrumentation::CPointerHashTable::LookupCommon(this, a2);
  v7 = 0;
  if ( v6 )
  {
    v7 = 1;
    *a3 = (void *)*((_QWORD *)v6 + 1);
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v7;
}
