/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14012767C
 * Callers:
 *     RIMInitializeDeadzone @ 0x140127470 (RIMInitializeDeadzone.c)
 * Callees:
 *     ApiSetGetUserHandedness @ 0x140127A30 (ApiSetGetUserHandedness.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140127B28 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140127C18 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019F800 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this)
{
  int UserHandedness; // eax
  int v3; // edi

  *((_DWORD *)this + 2) = 1;
  UserHandedness = ApiSetGetUserHandedness();
  ++*((_DWORD *)this + 1);
  v3 = UserHandedness;
  if ( UserHandedness != *(_DWORD *)this )
    RIMDeadzone::_ClearDeadzoneAreas(this);
  *((_DWORD *)this + 10) = 1;
  if ( v3 == 1 )
    return RIMDeadzone::_InitializeRightHandedDeadzone(this);
  else
    return RIMDeadzone::_InitializeLeftHandedDeadzone(this);
}
