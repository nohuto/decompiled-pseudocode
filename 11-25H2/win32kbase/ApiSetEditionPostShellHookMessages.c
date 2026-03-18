/*
 * XREFs of ApiSetEditionPostShellHookMessages @ 0x14019681C
 * Callers:
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A822C (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A849C (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A8618 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     EditionPostShellHookMessages @ 0x140153664 (EditionPostShellHookMessages.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostShellHookMessages(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax
  __int64 v8; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3232LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionPostShellHookMessages(v8, a2, a3, a4);
  }
  return result;
}
