/*
 * XREFs of ExCreatePoolTagTable @ 0x14083DA48
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

unsigned __int64 __fastcall ExCreatePoolTagTable(unsigned int a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  void *IndependentPages; // rax
  unsigned __int64 v5; // rbx

  v2 = a1;
  if ( stru_140EFF2C0.StackLimit >= (void *volatile)0x333333333333332LL )
    return 0LL;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(80 * ((__int64)stru_140EFF2C0.StackLimit + 1), a2, 0LL, 0LL);
  v5 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, 80 * (__int64)stru_140EFF2C0.StackLimit);
    *(&stru_140EFF2C0.ThreadLock + v2) = v5;
  }
  return v5;
}
