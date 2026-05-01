/*
 * XREFs of _lambda_c20ddfa74c13e3309a3b622ad13c0825_::_lambda_c20ddfa74c13e3309a3b622ad13c0825_ @ 0x1802E3928
 * Callers:
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801CABAC (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801EA0A0 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_c20ddfa74c13e3309a3b622ad13c0825_::_lambda_c20ddfa74c13e3309a3b622ad13c0825_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  *a1 = *a2;
  v4 = *a3;
  a1[1] = *a3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
