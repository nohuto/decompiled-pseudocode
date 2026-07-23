/*
 * XREFs of MiLockCloneBlockAtDpc @ 0x14036C5A0
 * Callers:
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiReferenceCloneProto @ 0x14036C348 (MiReferenceCloneProto.c)
 *     MiIncrementCombinedPte @ 0x14036C478 (MiIncrementCombinedPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x140494784 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockCloneBlockAtDpc(__int64 a1)
{
  signed __int8 v1; // cf
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL);
  v4 = 0;
  if ( v1 )
  {
    do
    {
      do
      {
        KeYieldProcessorEx(&v4);
        result = *(_QWORD *)(a1 + 16);
      }
      while ( result < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0x3FuLL) );
  }
  return result;
}
