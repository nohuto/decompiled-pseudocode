/*
 * XREFs of _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_ @ 0x1802DCFBC
 * Callers:
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801C4C5C (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801DD910 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_(
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
