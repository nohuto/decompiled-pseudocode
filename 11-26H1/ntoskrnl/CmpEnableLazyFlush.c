/*
 * XREFs of CmpEnableLazyFlush @ 0x14046EC80
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14046E6C0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x14046E740 (CmpCoalescingCallback.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmSetLazyFlushState @ 0x140B46A24 (CmSetLazyFlushState.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14046ECD0 (CmpArmLazyWriter.c)
 */

__int64 __fastcall CmpEnableLazyFlush(int a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  unsigned int i; // ebx

  v1 = (unsigned int)~a1;
  _m_prefetchw(&CmpHoldLazyFlush);
  result = (unsigned int)_InterlockedAnd(&CmpHoldLazyFlush, v1);
  if ( (_DWORD)result == a1 )
  {
    for ( i = 0; i < 3; ++i )
    {
      LOBYTE(v1) = 1;
      result = CmpArmLazyWriter(i, 0LL, v1);
    }
  }
  return result;
}
