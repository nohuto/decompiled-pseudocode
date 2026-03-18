/*
 * XREFs of ApiSetPsW32ScreenSaver_Show @ 0x140169CCC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetPsW32ScreenSaver_Show(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2008LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 2016LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
