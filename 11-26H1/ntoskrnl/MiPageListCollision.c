/*
 * XREFs of MiPageListCollision @ 0x14048DA4C
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkHugeRangeEx @ 0x14048E398 (MiUnlinkHugeRangeEx.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14029FD70 (MiZeroPageWorkMapping.c)
 *     MiStopPageAccessor @ 0x14048E008 (MiStopPageAccessor.c)
 */

unsigned __int64 __fastcall MiPageListCollision(ULONG_PTR a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx
  unsigned int v3; // ecx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = MiStopPageAccessor(a1);
  *(_QWORD *)(result + 24) |= 1uLL;
  v2 = *(unsigned __int64 **)(result + 32);
  if ( v2 )
  {
    v3 = *(_DWORD *)(result + 64);
    result = *v2;
    if ( (*v2 & 1) != 0 )
    {
      _InterlockedOr(v4, 0);
      return MiZeroPageWorkMapping(v3, (unsigned __int64)v2, 1);
    }
  }
  return result;
}
