/*
 * XREFs of HalpUpdateTiledCR3Mapping @ 0x140BF2904
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x140BF2874 (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpStoreFreeCr3 @ 0x140596748 (HalpStoreFreeCr3.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpUpdateTiledCR3Mapping(unsigned __int64 BaseAddress, PHYSICAL_ADDRESS PhysicalAddress)
{
  char *v2; // rdi
  int i; // ebp
  PVOID *v6; // rsi
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  void *v14; // rax

  v2 = (char *)HalpCR3Root;
  for ( i = 3; ; --i )
  {
    v6 = (PVOID *)&v2[8 * ((BaseAddress >> (i + 8 * (unsigned __int8)i + 12)) & 0x1FF)];
    if ( !i )
      break;
    v2 = (char *)*v6;
    if ( !*v6 )
    {
      v7 = (char *)HalpMmAllocCtxAlloc((unsigned int)(i + 8 * i + 12), 4096LL);
      v2 = v7;
      if ( !v7 )
        return 3221225626LL;
      memset_0(v7, 0, 0x1000uLL);
      if ( (int)HalpStoreFreeCr3((__int64)v2) < 0 )
      {
        HalpMmAllocCtxFree(v8, (__int64)v2);
        return 3221225626LL;
      }
      *v6 = v2;
    }
  }
  if ( !PhysicalAddress.QuadPart )
    PhysicalAddress = MmGetPhysicalAddress((PVOID)BaseAddress);
  v10 = 1LL;
  v11 = PhysicalAddress.QuadPart ^ ((unsigned __int64)*v6 ^ PhysicalAddress.QuadPart) & 0xFFF0000000000FFFuLL;
  v12 = 2LL;
  do
  {
    v13 = v10++;
    v14 = (void *)(v11 | v13);
    v11 = (unsigned __int64)v14;
    --v12;
  }
  while ( v12 );
  *v6 = v14;
  return 0LL;
}
