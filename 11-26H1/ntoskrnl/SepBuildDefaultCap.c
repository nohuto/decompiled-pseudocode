/*
 * XREFs of SepBuildDefaultCap @ 0x14081CFB4
 * Callers:
 *     SepRmDbInitialization @ 0x140CE48BC (SepRmDbInitialization.c)
 * Callees:
 *     SepBuildDefaultCape @ 0x14063FA5C (SepBuildDefaultCape.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SepBuildDefaultCap()
{
  int v0; // ebx
  char *Pool2; // rax
  __int128 v3; // xmm0
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v0 = SepBuildDefaultCape((__int64 *)&P);
  if ( v0 >= 0 )
  {
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *((_QWORD *)Pool2 + 1) = 0LL;
      *((_QWORD *)Pool2 + 2) = 0LL;
      v3 = DefaultCapName;
      *((_QWORD *)Pool2 + 4) = 0LL;
      *((_QWORD *)Pool2 + 3) = 0LL;
      *(_OWORD *)(Pool2 + 40) = v3;
      *((_DWORD *)Pool2 + 14) = 1;
      *((_DWORD *)Pool2 + 15) = 1;
      *((_QWORD *)Pool2 + 8) = P;
      ExpPlatformBinaryLock.StackBase = Pool2;
      return (unsigned int)v0;
    }
    v0 = -1073741670;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x70536553u);
  return (unsigned int)v0;
}
