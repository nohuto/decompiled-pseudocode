/*
 * XREFs of ?AbortAnimation@CLoginTransition@@QEAAXXZ @ 0x18007CDB4
 * Callers:
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18007CF3C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLoginTransition::AbortAnimation(CLoginTransition *this)
{
  if ( *((_BYTE *)this + 68) )
    (**(void (__fastcall ***)(CLoginTransition *, _QWORD))this)(this, *((unsigned int *)this + 16));
}
