/*
 * XREFs of HalpInterruptGetApicVersion @ 0x140501500
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGetApicVersion(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h]

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v3 = 0;
  if ( LinesForGsiRange )
  {
    LOBYTE(v3) = 17;
    HIBYTE(v3) = *((_BYTE *)LinesForGsiRange + 24) - *((_BYTE *)LinesForGsiRange + 20);
    BYTE2(v3) = HIBYTE(v3) - 1;
  }
  else
  {
    HIBYTE(v3) = -16;
  }
  return v3;
}
