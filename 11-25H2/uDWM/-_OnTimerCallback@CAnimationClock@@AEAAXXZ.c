/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18007CFB4
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18004D214 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x18007CF50 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18004BE30 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x1800A5D84 (McTemplateU0j_EtwEventWriteTransfer.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(CAnimationClock *this)
{
  CAnimationClock *v1; // rbx
  unsigned int v2; // edx

  v1 = this;
  switch ( *((_DWORD *)this + 20) )
  {
    case 1:
      v2 = 3;
      goto LABEL_8;
    case 2:
      v2 = 4;
LABEL_8:
      CAnimationClock::_SetState((__int64)this, v2);
      return;
    case 4:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0j_EtwEventWriteTransfer(this, &UdwmAnimationClock_Finish, (char *)this + 120);
      v2 = 6;
      this = v1;
      goto LABEL_8;
    case 5:
    case 6:
      v2 = 7;
      goto LABEL_8;
  }
}
