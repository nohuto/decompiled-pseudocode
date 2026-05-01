/*
 * XREFs of ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x1804893A8
 * Callers:
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x180489BE4 (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 * Callees:
 *     ?SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z @ 0x18048C6BC (-SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z.c)
 */

void __fastcall MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(
        MinimizeAnimationSystemStateOverride *this)
{
  if ( *(_DWORD *)this != -1 )
    MinimizeAnimationSystemStateOverride::SetSystemAnimationsStateForMinimize(this, *(_DWORD *)this);
}
