/*
 * XREFs of sub_1409EC968 @ 0x1409EC968
 * Callers:
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 *     sub_1409ED914 @ 0x1409ED914 (sub_1409ED914.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409ED29C @ 0x1409ED29C (sub_1409ED29C.c)
 */

void __fastcall sub_1409EC968(PVOID *BaseAddress)
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
      sub_1409ED29C(v3);
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
