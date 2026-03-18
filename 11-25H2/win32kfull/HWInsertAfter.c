/*
 * XREFs of HWInsertAfter @ 0x1401A436C
 * Callers:
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x14004EA98 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140064EE4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HWInsertAfter(__int64 a1)
{
  if ( !a1 || a1 == -2 || a1 == 1 || a1 == -1 )
    return a1;
  else
    return *(_QWORD *)a1;
}
