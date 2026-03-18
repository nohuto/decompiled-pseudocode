/*
 * XREFs of SymCryptFdefModElementSetValueGeneric @ 0x14056F608
 * Callers:
 *     SymCryptModElementSetValue @ 0x14055C618 (SymCryptModElementSetValue.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x140568BF0 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawSetValue @ 0x140570E94 (SymCryptFdefRawSetValue.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueGeneric(int a1, int a2, int a3, __int64 a4, void *Src, _QWORD *a6)
{
  int v6; // r14d
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 4);
  xHalTimerWatchdogStop();
  result = SymCryptFdefRawSetValue(a1, a2, a3, (_DWORD)Src, v6);
  if ( !(_DWORD)result )
  {
    SymCryptFdefRawDivMod(Src, v6, (_DWORD *)(a4 + 64), 0LL, Src, a6);
    return 0LL;
  }
  return result;
}
