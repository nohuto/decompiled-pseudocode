/*
 * XREFs of PoGetThermalRequestSupport @ 0x140B5FE40
 * Callers:
 *     PoSetThermalActiveCooling @ 0x1407CE750 (PoSetThermalActiveCooling.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoGetThermalRequestSupport(__int64 a1, int a2)
{
  __int64 v2; // r8
  bool result; // al
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v4 = *(_QWORD *)(v2 + 128) == 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 136) == 0LL;
  }
  return !v4;
}
