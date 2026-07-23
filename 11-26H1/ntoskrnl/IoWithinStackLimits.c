/*
 * XREFs of IoWithinStackLimits @ 0x140413310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall IoWithinStackLimits(ULONG_PTR RegionStart, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r9
  ULONG_PTR StackLimit; // rdx
  __m128i *InitialStack; // r10
  void *StackBase; // r8
  __m128i v8; // xmm3
  char *v9; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = RegionStart + RegionSize;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) == 0 || CurrentThread == KeGetCurrentPrcb()->IdleThread )
  {
    StackLimit = (ULONG_PTR)CurrentThread->StackLimit;
    InitialStack = (__m128i *)CurrentThread->InitialStack;
    StackBase = CurrentThread->StackBase;
    while ( RegionStart < StackLimit || v3 > (unsigned __int64)StackBase )
    {
      if ( !InitialStack[1].m128i_i64[0] )
        return 0;
      v8 = InitialStack[1];
      InitialStack = (__m128i *)InitialStack[2].m128i_i64[1];
      StackBase = (void *)v8.m128i_i64[0];
      StackLimit = _mm_srli_si128(v8, 8).m128i_u64[0];
    }
    return 1;
  }
  else
  {
    v9 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    return v3 <= (unsigned __int64)v9 && RegionStart >= (unsigned __int64)&v9[-(unsigned int)KeKernelStackSize];
  }
}
