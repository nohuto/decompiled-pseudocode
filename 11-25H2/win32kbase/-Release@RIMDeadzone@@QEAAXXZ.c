/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x140127BE0
 * Callers:
 *     RIMInitializeDeadzone @ 0x140127470 (RIMInitializeDeadzone.c)
 *     rimDestroyDeadzone @ 0x140127A78 (rimDestroyDeadzone.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140127B28 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019F800 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1401DDA80 (RIMDestroyPointerDeviceDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1401EDAE8 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140127C18 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1401F5C78 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::Release(char **this)
{
  DeadzonePalmTelemetry *v3; // rcx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = (DeadzonePalmTelemetry *)this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      GreDeleteFastMutex(this[7]);
    }
  }
}
