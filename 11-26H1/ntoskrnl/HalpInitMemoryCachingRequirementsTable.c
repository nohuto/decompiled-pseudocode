/*
 * XREFs of HalpInitMemoryCachingRequirementsTable @ 0x140BEA5D0
 * Callers:
 *     HalpMmInitSystem @ 0x140BEB980 (HalpMmInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall HalpInitMemoryCachingRequirementsTable(__int64 a1)
{
  __int64 v1; // rbx
  const void *v2; // rsi
  __int64 v3; // rbx
  void *v4; // rax

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(const void **)(v1 + 336);
  if ( v2 && (v3 = *(unsigned int *)(v1 + 328), (_DWORD)v3) )
  {
    v4 = (void *)HalpMmAllocCtxAlloc(a1, 24 * v3);
    HalpPmuArbiter.WaitStatus = (volatile __int64)v4;
    if ( !v4 )
      return 3221225626LL;
    HIDWORD(HalpPmuArbiter.WaitBlockList) = v3;
    memmove(v4, v2, 24 * v3);
  }
  else
  {
    HIDWORD(HalpPmuArbiter.WaitBlockList) = 0;
    HalpPmuArbiter.WaitStatus = 0LL;
  }
  return 0LL;
}
