/*
 * XREFs of ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x180499FC4
 * Callers:
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x18049A870 (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 * Callees:
 *     ?SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z @ 0x18049D2AC (-SetSystemAnimationsStateForMinimize@MinimizeAnimationSystemStateOverride@@AEAAXH@Z.c)
 */

void __fastcall MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(
        MinimizeAnimationSystemStateOverride *this)
{
  if ( *(_DWORD *)this != -1 )
    MinimizeAnimationSystemStateOverride::SetSystemAnimationsStateForMinimize(this, *(_DWORD *)this);
}
