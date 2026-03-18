/*
 * XREFs of SepBuildDefaultCap @ 0x140816DA4
 * Callers:
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 * Callees:
 *     SepBuildDefaultCape @ 0x14063BE80 (SepBuildDefaultCape.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 SepBuildDefaultCap()
{
  int v0; // ebx
  unsigned __int64 Pool2; // rax
  __int128 v3; // xmm0
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v0 = SepBuildDefaultCape((__int64 *)&P);
  if ( v0 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      v3 = DefaultCapName;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_OWORD *)(Pool2 + 40) = v3;
      *(_DWORD *)(Pool2 + 56) = 1;
      *(_DWORD *)(Pool2 + 60) = 1;
      *(_QWORD *)(Pool2 + 64) = P;
      ExpPlatformBinaryLock.ThreadLock = Pool2;
      return (unsigned int)v0;
    }
    v0 = -1073741670;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x70536553u);
  return (unsigned int)v0;
}
