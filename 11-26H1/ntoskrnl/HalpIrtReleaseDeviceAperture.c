/*
 * XREFs of HalpIrtReleaseDeviceAperture @ 0x140787670
 * Callers:
 *     HalpIrtAllocateIndex @ 0x140787148 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1407875AC (HalpIrtFreeIndex.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall HalpIrtReleaseDeviceAperture(int a1, int a2)
{
  __int64 *i; // r8
  bool v5; // zf
  __int64 v6; // rax
  __int64 **v7; // rcx
  __int64 v8; // rax

  ExAcquireFastMutex(&HalpIrtLock);
  for ( i = (__int64 *)HalpIrtAllocatedDeviceAperturesHead; i != &HalpIrtAllocatedDeviceAperturesHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a1 )
    {
      v5 = *((_DWORD *)i + 5) == a2;
      *((_DWORD *)i + 5) -= a2;
      if ( v5 )
      {
        i[3] = 0LL;
        v6 = *i;
        if ( *(__int64 **)(*i + 8) != i
          || (v7 = (__int64 **)i[1], *v7 != i)
          || (*v7 = (__int64 *)v6,
              *(_QWORD *)(v6 + 8) = v7,
              v8 = HalpIrtFreeDeviceAperturesHead,
              *(__int64 **)(HalpIrtFreeDeviceAperturesHead + 8) != &HalpIrtFreeDeviceAperturesHead) )
        {
          __fastfail(3u);
        }
        *i = HalpIrtFreeDeviceAperturesHead;
        i[1] = (__int64)&HalpIrtFreeDeviceAperturesHead;
        *(_QWORD *)(v8 + 8) = i;
        HalpIrtFreeDeviceAperturesHead = (__int64)i;
      }
      break;
    }
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
}
