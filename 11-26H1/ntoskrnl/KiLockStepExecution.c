/*
 * XREFs of KiLockStepExecution @ 0x140C0D210
 * Callers:
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiLockStepExecution(__int64 a1)
{
  volatile signed __int32 *v2; // r9
  volatile signed __int32 v3; // ecx
  __int64 result; // rax

  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( KeGetCurrentPrcb()->Number == *(_DWORD *)a1 )
  {
    for ( result = *(unsigned int *)(a1 + 8); (_DWORD)result != *(_DWORD *)(a1 + 4); result = *(unsigned int *)(a1 + 8) )
      _mm_pause();
    *(_DWORD *)(a1 + 8) = 0;
    _InterlockedIncrement(v2);
  }
  else
  {
    v3 = *v2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    while ( 1 )
    {
      result = *(unsigned int *)v2;
      if ( (_DWORD)result != v3 )
        break;
      _mm_pause();
    }
  }
  return result;
}
