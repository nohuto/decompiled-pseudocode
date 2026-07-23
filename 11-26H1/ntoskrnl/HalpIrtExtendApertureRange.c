/*
 * XREFs of HalpIrtExtendApertureRange @ 0x1407873B4
 * Callers:
 *     HalpIrtAllocateDeviceAperture @ 0x140786FF8 (HalpIrtAllocateDeviceAperture.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
        for ( i = 0; i < v0; qword_140F89D08 = v7 )
        {
          v7 = (__int64)Pool2 + 32 * i;
          *(_DWORD *)(v7 + 16) = v4 + i;
          v8 = (__int64 *)qword_140F89D08;
          if ( *(__int64 **)qword_140F89D08 != &HalpIrtFreeDeviceAperturesHead )
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
