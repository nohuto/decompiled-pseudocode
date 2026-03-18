/*
 * XREFs of ApiSetEditionDeactivateMitInput @ 0x1401C3D0C
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x140179858 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionDeactivateMitInput(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4960LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 4968LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
