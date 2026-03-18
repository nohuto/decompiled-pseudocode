/*
 * XREFs of MiLockSetPfnPriority @ 0x140457A10
 * Callers:
 *     MiUpdateOldPteWorker @ 0x14029C38C (MiUpdateOldPteWorker.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, char a2)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(a1 + 32) = (a2 << 24) ^ (*(_DWORD *)(a1 + 32) ^ (a2 << 24)) & 0xF8FFFFFF;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
