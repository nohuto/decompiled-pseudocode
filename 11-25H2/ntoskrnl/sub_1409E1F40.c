/*
 * XREFs of sub_1409E1F40 @ 0x1409E1F40
 * Callers:
 *     sub_1407F0D20 @ 0x1407F0D20 (sub_1407F0D20.c)
 *     WbCreateHeapExecutedBlock @ 0x14090A030 (WbCreateHeapExecutedBlock.c)
 *     sub_1409E1A4C @ 0x1409E1A4C (sub_1409E1A4C.c)
 *     sub_1409E1D68 @ 0x1409E1D68 (sub_1409E1D68.c)
 *     sub_1409E2780 @ 0x1409E2780 (sub_1409E2780.c)
 *     sub_1409E28D4 @ 0x1409E28D4 (sub_1409E28D4.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     NtCompareSigningLevels @ 0x1409E2040 (NtCompareSigningLevels.c)
 */

__int64 __fastcall sub_1409E1F40(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  NTSTATUS v6; // r8d
  ULONG_PTR v8; // [rsp+30h] [rbp-50h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-30h] BYREF
  __int128 v12; // [rsp+60h] [rbp-20h]
  __int128 v13; // [rsp+70h] [rbp-10h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+28h] BYREF

  v3 = a2;
  v8 = 0LL;
  ReturnLength = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  MemoryInformation = 0LL;
  v6 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &MemoryInformation,
         0x18uLL,
         &ReturnLength);
  if ( v6 >= 0 )
  {
    v6 = NtCompareSigningLevels(((unsigned int)v10 >> 2) & 0xF, 0xCu);
    if ( v6 >= 0 )
    {
      if ( a3 )
      {
        v6 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, &v11, 0x30uLL, &v8);
        if ( v6 >= 0
          && ((unsigned __int64)BaseAddress < (unsigned __int64)v11
           || (unsigned __int64)BaseAddress + v3 > *((_QWORD *)&v12 + 1) + (_QWORD)v11
           || DWORD1(v13) != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return (unsigned int)v6;
}
