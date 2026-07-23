/*
 * XREFs of MiAssignInitialPageAttribute @ 0x1402A2190
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMirrorInSingleProcessorMode @ 0x1402A2284 (MiMirrorInSingleProcessorMode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiAssignInitialPageAttribute(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)MiMirrorInSingleProcessorMode() )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      LOBYTE(v5) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v5, v4);
    }
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  result = *(_DWORD *)(a1 + 32) & 0xC00000;
  if ( (_DWORD)result == 12582912 )
  {
    result = *(unsigned int *)(a1 + 32);
    *(_DWORD *)(a1 + 32) = (a2 << 22) ^ (result ^ (a2 << 22)) & 0xFF3FFFFF;
  }
  if ( CurrentIrql != 17 )
  {
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
