/*
 * XREFs of ExpQuerySystemMemoryNumaPerformanceInformation @ 0x140B6F184
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExpGetHalNumaQueryDataType @ 0x14084CB38 (ExpGetHalNumaQueryDataType.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaPerformanceInformation(__int128 *a1, unsigned int a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v5; // eax
  __int128 v7; // [rsp+70h] [rbp-68h]

  if ( a1
    && a2 >= 0x10
    && (a3 || !a4)
    && (v7 = *a1, (unsigned int)*a1 == 1)
    && !HIDWORD(v7)
    && (DWORD1(v7) < (unsigned __int16)KeNumberNodes || DWORD1(v7) == -1)
    && (unsigned int)ExpGetHalNumaQueryDataType(SDWORD2(v7)) != 7 )
  {
    v4 = guard_dispatch_icall_no_overrides(50LL, 24LL);
    if ( v4 >= 0 )
    {
      v5 = guard_dispatch_icall_no_overrides(1LL, 0xFFFFFFFFLL);
      v4 = 0;
      if ( v5 != -1073741789 )
        v4 = v5;
      if ( v4 >= 0 )
        return (unsigned int)-1073741275;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
