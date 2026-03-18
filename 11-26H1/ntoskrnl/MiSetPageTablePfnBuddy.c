/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x1402A4AE0
 * Callers:
 *     MiSetSystemCacheReverseMap @ 0x1402A39F0 (MiSetSystemCacheReverseMap.c)
 *     MmInSwapProcess @ 0x14048C3C4 (MmInSwapProcess.c)
 *     MiReadPagefilePage @ 0x1406E4AA0 (MiReadPagefilePage.c)
 *     MiCreatePfnTemplate @ 0x1406E70E8 (MiCreatePfnTemplate.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiInitializeBootProcess @ 0x140CF1DA4 (MiInitializeBootProcess.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  int v6; // ebp
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  CurrentIrql = 17;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v8 = a3 & 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
    }
  }
  if ( (a2 & 0xFFFFFEFFFFFFFFFEuLL) != 0 || a2 == 1 )
    a2 = ((a2 - qword_140E37B90) >> 4) + 1;
  *(_QWORD *)v4 = (2 * a2) ^ (*(_QWORD *)v4 ^ (2 * a2)) & 0xFFFFFFFF00000001uLL;
  result = *(unsigned int *)(v4 + 36);
  *(_DWORD *)(v4 + 36) = ((unsigned int)(a2 >> 31) << 16) ^ (result ^ ((unsigned int)(a2 >> 31) << 16)) & 0xFC00FFFF;
  if ( !v6 )
  {
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql <= 1u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
