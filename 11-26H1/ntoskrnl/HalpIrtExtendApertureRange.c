/*
 * XREFs of HalpIrtExtendApertureRange @ 0x140784880
 * Callers:
 *     HalpIrtAllocateDeviceAperture @ 0x1407844C4 (HalpIrtAllocateDeviceAperture.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 HalpIrtExtendApertureRange()
{
  unsigned int v0; // ebp
  unsigned int v1; // edi
  void *Pool2; // rsi
  bool v3; // bl
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int i; // ecx
  __int64 v7; // rdx
  __int64 *v8; // rax

  v0 = HalpIrtAperturesPerRange;
  v1 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2 != 0LL;
  ExAcquireFastMutex(&HalpIrtLock);
  v4 = HalpIrtAllocatedApertures;
  v5 = HalpIrtAllocatedApertures + v0;
  if ( HalpIrtAllocatedApertures + v0 <= HalpIrtAperturesPerRange || (HalpIrtAllocationFlags & 8) != 0 )
  {
    if ( v5 <= HalpIrtTotalApertures )
    {
      if ( Pool2 )
      {
        for ( i = 0; i < v0; qword_140F89918 = v7 )
        {
          v7 = (__int64)Pool2 + 32 * i;
          *(_DWORD *)(v7 + 16) = v4 + i;
          v8 = (__int64 *)qword_140F89918;
          if ( *(__int64 **)qword_140F89918 != &HalpIrtFreeDeviceAperturesHead )
            __fastfail(3u);
          *(_QWORD *)v7 = &HalpIrtFreeDeviceAperturesHead;
          ++i;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
        }
        HalpIrtAllocatedApertures = v5;
        v3 = 0;
      }
      else
      {
        v1 = -1073741670;
      }
    }
  }
  else
  {
    v1 = -1073741637;
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
  if ( v3 )
    ExFreePoolWithTag(Pool2, 0);
  return v1;
}
