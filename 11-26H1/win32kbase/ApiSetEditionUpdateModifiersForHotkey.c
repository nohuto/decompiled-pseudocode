/*
 * XREFs of ApiSetEditionUpdateModifiersForHotkey @ 0x140148394
 * Callers:
 *     UpdateRawKeyState @ 0x140148288 (UpdateRawKeyState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionUpdateModifiersForHotkey(__int64 a1, unsigned int a2))(void)
{
  unsigned int v3; // edi
  __int64 (*result)(void); // rax
  __int64 v5; // rcx

  v3 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5248LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 5256LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, _QWORD))result)(v3, a2);
    }
  }
  return result;
}
