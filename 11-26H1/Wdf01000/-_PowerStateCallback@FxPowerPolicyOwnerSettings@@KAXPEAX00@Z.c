/*
 * XREFs of ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1400427F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopPowerTransitionRecord@FxWaitLockInternal@@QEAAXXZ @ 0x140040FF4 (-PopPowerTransitionRecord@FxWaitLockInternal@@QEAAXXZ.c)
 *     ?PushPowerTransitionRecord@FxWaitLockInternal@@QEAAJXZ @ 0x1400417E8 (-PushPowerTransitionRecord@FxWaitLockInternal@@QEAAJXZ.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x140042F64 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::_PowerStateCallback(void *Context, void *Argument1, void *Argument2)
{
  FxWaitLockInternal *v4; // rbp
  NTSTATUS v6; // ebx
  _FX_DRIVER_GLOBALS *v7; // rdx
  _FX_DRIVER_GLOBALS *v8; // rdx
  FxWaitLockInternal *v9; // rcx
  FxPkgPnp *v10; // rcx

  if ( Argument1 == (void *)3 )
  {
    v4 = (FxWaitLockInternal *)(*((_QWORD *)Context + 78) + 736LL);
    v6 = FxWaitLockInternal::PushPowerTransitionRecord(v4);
    FxWaitLockInternal::AcquireLock(v4, v7, 0LL);
    if ( v6 >= 0 )
      FxWaitLockInternal::PopPowerTransitionRecord(v9);
    if ( Argument2 )
    {
      if ( Argument2 == (void *)1 )
      {
        v10 = (FxPkgPnp *)*((_QWORD *)Context + 78);
        *((_BYTE *)Context + 918) = 1;
        FxPkgPnp::SaveState(v10, 1u);
      }
    }
    else
    {
      FxPkgPnp::SaveState(*((FxPkgPnp **)Context + 78), 1u);
      *((_BYTE *)Context + 918) = 0;
    }
    FxWaitLockInternal::ReleaseLock(v4, v8);
  }
}
