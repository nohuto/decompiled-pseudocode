/*
 * XREFs of CmpEnableLazyFlush @ 0x140468400
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140467E40 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x140467EC0 (CmpCoalescingCallback.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmSetLazyFlushState @ 0x140B48A54 (CmSetLazyFlushState.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140468450 (CmpArmLazyWriter.c)
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
