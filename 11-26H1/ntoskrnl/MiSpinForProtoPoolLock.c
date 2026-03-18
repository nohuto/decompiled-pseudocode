/*
 * XREFs of MiSpinForProtoPoolLock @ 0x1404168D0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiRelockProtoPoolPage @ 0x14031BFF4 (MiRelockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
