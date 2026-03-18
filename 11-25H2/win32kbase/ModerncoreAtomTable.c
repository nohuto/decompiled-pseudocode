/*
 * XREFs of ModerncoreAtomTable @ 0x14023F134
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B5AC4 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ModerncoreAtomTable(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3544LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
