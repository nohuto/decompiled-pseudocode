/*
 * XREFs of sub_1409F0198 @ 0x1409F0198
 * Callers:
 *     sub_1409EF40C @ 0x1409EF40C (sub_1409EF40C.c)
 *     sub_1409EFF2C @ 0x1409EFF2C (sub_1409EFF2C.c)
 *     sub_1409F1144 @ 0x1409F1144 (sub_1409F1144.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1407237B0 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1409C1B90 (MmUnsecureVirtualMemory.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409F0ACC @ 0x1409F0ACC (sub_1409F0ACC.c)
 */

void __fastcall sub_1409F0198(PVOID *BaseAddress)
{
  int v2; // edi
  struct _MDL *v3; // rcx
  bool v4; // zf
  PVOID v5; // rcx

  if ( BaseAddress )
  {
    if ( BaseAddress[2] == KeGetCurrentThread()->ApcState.Process )
    {
      v5 = BaseAddress[135];
      v2 = 1;
      if ( v5 )
        MmUnsecureVirtualMemory(v5);
    }
    else
    {
      v2 = 0;
    }
    v3 = (struct _MDL *)BaseAddress[3];
    if ( v3 )
    {
      sub_1409F0ACC(v3);
      BaseAddress[3] = 0LL;
    }
    v4 = *BaseAddress == 0LL;
    BaseAddress[4] = 0LL;
    if ( !v4 )
    {
      if ( v2 )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    SddlpFree(BaseAddress);
  }
}
