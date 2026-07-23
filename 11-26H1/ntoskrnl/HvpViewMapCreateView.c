/*
 * XREFs of HvpViewMapCreateView @ 0x1408BEC5C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1408BE958 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14049C6F4 (CmSiProtectViewOfSection.c)
 *     CmSiAllocateMemory @ 0x1404B7C28 (CmSiAllocateMemory.c)
 *     CmSiMapViewOfSection @ 0x1404C5184 (CmSiMapViewOfSection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapCreateView(__int64 a1, LARGE_INTEGER a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v6; // r15
  void *Memory; // rax
  __int64 v10; // rdi
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // rcx
  NTSTATUS v13; // ebx
  int v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v16) = 0;
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
      || (v13 = CmSiProtectViewOfSection(v12, *(void ***)(a1 + 24), *(void **)(v10 + 56), v11, 1u, (ULONG *)&v16),
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
