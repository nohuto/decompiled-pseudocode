/*
 * XREFs of HvlpSetupBootProcessorEarlyHypercallPages @ 0x1405BD9AC
 * Callers:
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 * Callees:
 *     HvlpAllocateEarlyPages @ 0x1405C229C (HvlpAllocateEarlyPages.c)
 */

__int64 __fastcall HvlpSetupBootProcessorEarlyHypercallPages(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = HvlpAllocateEarlyPages(a1, 6LL, &v7, 4LL);
  if ( !v2 )
    return 3221225626LL;
  CurrentPrcb->HypercallCachedPages = (void *)v2;
  v4 = (_QWORD *)(v2 + 16);
  v5 = v7;
  v6 = 2LL;
  do
  {
    *v4 = v5;
    v4 += 512;
    v5 = v7 + 4096;
    v7 += 4096LL;
    --v6;
  }
  while ( v6 );
  return 0LL;
}
