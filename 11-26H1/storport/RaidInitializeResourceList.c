/*
 * XREFs of RaidInitializeResourceList @ 0x140183EB8
 * Callers:
 *     RaidAdapterConfigureResources @ 0x14005AF28 (RaidAdapterConfigureResources.c)
 *     NvmeAdapterConfigureResources @ 0x1400D3CA4 (NvmeAdapterConfigureResources.c)
 * Callees:
 *     RaDuplicateCmResourceList @ 0x140188A2C (RaDuplicateCmResourceList.c)
 */

__int64 __fastcall RaidInitializeResourceList(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf

  if ( a1
    && a2
    && a3
    && ((*a1 = ((__int64 (*)(void))RaDuplicateCmResourceList)(),
         v6 = RaDuplicateCmResourceList(v5, a3),
         v7 = *a1 == 0LL,
         a1[1] = v6,
         v7)
     || !v6) )
  {
    return 3221225495LL;
  }
  else
  {
    return 0LL;
  }
}
