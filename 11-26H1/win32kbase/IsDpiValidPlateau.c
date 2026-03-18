/*
 * XREFs of IsDpiValidPlateau @ 0x1402283DC
 * Callers:
 *     IsValidKernelDpiAwarenessContext @ 0x140086440 (IsValidKernelDpiAwarenessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDpiValidPlateau(unsigned int a1, unsigned int a2, unsigned int a3)
{
  if ( a1 >= 0x60 && (a2 = a1 / 0x18, a3 = 24 * (a1 / 0x18), a1 == a3) )
    return a1 - 72 < 0x1B0;
  else
    return a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904) + 6998LL);
}
