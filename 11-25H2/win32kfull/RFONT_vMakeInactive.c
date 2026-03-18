/*
 * XREFs of RFONT_vMakeInactive @ 0x140017210
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1400174EC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONT_vMakeInactive(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  if ( a1 )
  {
    RFONTOBJ::vMakeInactive((RFONTOBJ *)&v1);
    v1 = 0LL;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v1);
}
