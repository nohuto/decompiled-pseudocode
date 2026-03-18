/*
 * XREFs of MiUpdatePageMoveInProgressInternal @ 0x1404448A0
 * Callers:
 *     MiHugePurgeZeroList @ 0x1405190A8 (MiHugePurgeZeroList.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14052EEFC (MiCanBeginHugeIoPageAccessor.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiMovePageToFreeList @ 0x14070D210 (MiMovePageToFreeList.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiUpdatePageMoveInProgressInternal(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // r9
  signed __int64 result; // rax
  unsigned __int64 v7; // rcx
  signed __int64 v8; // rtt

  if ( a4 )
  {
    v5 = 14120LL;
  }
  else
  {
    v5 = 14104LL;
    if ( a2 < 2 )
      v5 = 14112LL;
  }
  result = *(_QWORD *)(v5 + a1);
  do
  {
    if ( a3 )
    {
      v7 = (result + 1) ^ (result ^ (result + 1)) & 0xFFFFFFFFFFFF0000uLL;
    }
    else
    {
      v7 = (result - 1) ^ (result ^ (result - 1)) & 0xFFFFFFFFFFFF0000uLL;
      if ( (_WORD)result == 1 )
        v7 ^= (v7 ^ (v7 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    }
    v8 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + a1), v7, result);
  }
  while ( v8 != result );
  return result;
}
