/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14017F58C
 * Callers:
 *     RIMInitializeDeadzone @ 0x14017F380 (RIMInitializeDeadzone.c)
 * Callees:
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14017F694 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x14017F788 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1401C07F0 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ApiSetGetUserHandedness @ 0x1401C158C (ApiSetGetUserHandedness.c)
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
