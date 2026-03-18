/*
 * XREFs of ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1401C09E8
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x14004B070 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionUnlinkAndFreeThreadPointerData(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v5; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6000LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 6008LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, __int64))result)(a1, a2);
    }
  }
  return result;
}
