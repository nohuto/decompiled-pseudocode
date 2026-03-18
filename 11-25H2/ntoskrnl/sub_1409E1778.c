/*
 * XREFs of sub_1409E1778 @ 0x1409E1778
 * Callers:
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 *     sub_1409E1544 @ 0x1409E1544 (sub_1409E1544.c)
 *     sub_1409E181C @ 0x1409E181C (sub_1409E181C.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_1409E1F18 @ 0x1409E1F18 (sub_1409E1F18.c)
 */

void __fastcall sub_1409E1778(PVOID *BaseAddress)
{
  int v2; // edi
  struct _MDL *v3; // rcx
  PVOID v4; // rcx

  if ( BaseAddress )
  {
    if ( BaseAddress[2] == KeGetCurrentThread()->ApcState.Process )
    {
      v4 = BaseAddress[135];
      v2 = 1;
      if ( v4 )
        MmUnsecureVirtualMemory(v4);
    }
    else
    {
      v2 = 0;
    }
    v3 = (struct _MDL *)BaseAddress[3];
    if ( v3 )
    {
      sub_1409E1F18(v3);
      BaseAddress[3] = 0LL;
    }
    BaseAddress[4] = 0LL;
    if ( *BaseAddress )
    {
      if ( v2 )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    SddlpFree(BaseAddress);
  }
}
