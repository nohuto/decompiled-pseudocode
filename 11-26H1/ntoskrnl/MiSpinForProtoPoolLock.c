/*
 * XREFs of MiSpinForProtoPoolLock @ 0x14040AEE0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiRelockProtoPoolPage @ 0x14031E024 (MiRelockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiSpinForProtoPoolLock(__int64 a1)
{
  int v4; // esi
  __int64 result; // rax
  unsigned int v6; // ebx

  _R14 = (unsigned int *)(a1 + 16);
  _EBP = 0;
  v4 = KeFeatureBits2 & 0x800000;
  if ( (KeFeatureBits2 & 0x800000) != 0 )
    goto LABEL_2;
  while ( 1 )
  {
LABEL_3:
    result = *_R14;
    if ( (_DWORD)result )
      return result;
    if ( v4 )
      break;
    v6 = 0;
    while ( !*(_DWORD *)(a1 + 16) )
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  __asm { umwait  ebp }
  result = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)result )
  {
LABEL_2:
    __asm { umonitor r14 }
    goto LABEL_3;
  }
  return result;
}
