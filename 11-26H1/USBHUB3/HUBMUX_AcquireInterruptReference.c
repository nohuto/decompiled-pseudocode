/*
 * XREFs of HUBMUX_AcquireInterruptReference @ 0x140010878
 * Callers:
 *     HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled @ 0x140012440 (HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMUX_AcquireInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  unsigned int v4; // edi

  v1 = *(_QWORD *)a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)a1 + 2336LL));
  if ( (*(_DWORD *)(v1 + 2368) & 2) != 0 )
  {
    v4 = 3009;
  }
  else
  {
    _InterlockedOr(a1 + 66, 2u);
    ++*(_DWORD *)(v1 + 2356);
    v4 = 3013;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 2336), v3);
  return v4;
}
