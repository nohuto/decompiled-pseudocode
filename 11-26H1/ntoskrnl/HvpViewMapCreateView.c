/*
 * XREFs of HvpViewMapCreateView @ 0x1408B868C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1408B8388 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404A2CD4 (CmSiProtectViewOfSection.c)
 *     CmSiAllocateMemory @ 0x1404BE3D8 (CmSiAllocateMemory.c)
 *     CmSiMapViewOfSection @ 0x1404CB754 (CmSiMapViewOfSection.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapCreateView(__int64 a1, LARGE_INTEGER a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v6; // r15
  void *Memory; // rax
  __int64 v10; // rdi
  ULONG_PTR v11; // rbp
  __int64 v12; // rcx
  int v13; // ebx
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  v6 = (unsigned __int64)(unsigned int)(a3 - a2.LowPart) >> 12;
  Memory = (void *)CmSiAllocateMemory();
  v10 = (__int64)Memory;
  if ( Memory )
  {
    memset_0(Memory, 0, v6 + 72);
    *(_QWORD *)(v10 + 32) = a3;
    *(LARGE_INTEGER *)(v10 + 24) = a2;
    v11 = a3 - a2.QuadPart;
    v13 = CmSiMapViewOfSection(
            *(void **)a1,
            *(HANDLE **)(a1 + 24),
            a2,
            v11,
            ((*(_DWORD *)(a1 + 32) & 1) == 0) << 13,
            v15,
            (PVOID *)(v10 + 56));
    if ( v13 < 0
      || (v13 = CmSiProtectViewOfSection(v12, *(__int64 **)(a1 + 24), *(_QWORD *)(v10 + 56), v11, 1u, (__int64)&v16),
          v13 < 0) )
    {
      HvpViewMapFreeView(a1, v10);
    }
    else
    {
      *a4 = v10;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
