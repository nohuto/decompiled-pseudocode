/*
 * XREFs of CcInitializeProcessor @ 0x14078A07C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1404E6E00 (MmIsThisAnNtAsSystem.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeProcessor(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  BOOLEAN v3; // si
  PVOID PoolWithTag; // rax
  void *v5; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  *(_QWORD *)(a1 + 2216) = &CcTwilightLookasideList;
  v3 = IsThisAnNtAsSystem;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    ExInitializeSystemLookasideList((_DWORD)PoolWithTag, 512, 160, 1264018243, v3 != 0 ? 256 : 128);
  else
    v5 = &CcTwilightLookasideList;
  result = 0LL;
  *(_QWORD *)(a1 + 2208) = v5;
  return result;
}
