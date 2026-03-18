/*
 * XREFs of ApiSetEditionKeyboardInputDelegationChanged @ 0x1402278F8
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionKeyboardInputDelegationChanged(__int64 a1, unsigned int a2))(void)
{
  unsigned int v3; // edi
  __int64 (*result)(void); // rax
  __int64 v5; // rcx

  v3 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5488LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 5496LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, _QWORD))result)(v3, a2);
    }
  }
  return result;
}
