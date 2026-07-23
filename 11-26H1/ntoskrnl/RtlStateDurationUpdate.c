/*
 * XREFs of RtlStateDurationUpdate @ 0x1404C5A38
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1409CBF10 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x1409CC484 (PopEtEnergyContextSetState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationUpdate(unsigned __int64 *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // r9d
  int v5; // r10d
  unsigned __int64 v6; // r11
  int v7; // eax
  int v9; // edx
  unsigned __int64 v10; // [rsp+8h] [rbp+8h]

  v3 = *a1;
  v4 = 0;
  v5 = a2;
  v6 = HIDWORD(*a1);
  v10 = *a1;
  if ( (unsigned int)HIDWORD(*a1) >> 31 != a2 )
  {
    if ( (HIDWORD(*a1) & 0x80000000) != 0 )
    {
      v9 = -1;
      v4 = a3 - v10;
      if ( a3 - (_DWORD)v10 != -1 && ~v4 >= (v6 & 0x7FFFFFFF) )
        v9 = (v6 & 0x7FFFFFFF) + v4;
      v7 = v6 ^ (v9 ^ v6) & 0x7FFFFFFF;
    }
    else
    {
      v7 = HIDWORD(*a1);
    }
    v3 = __PAIR64__(v7 & 0x7FFFFFFF | (unsigned int)(v5 << 31), a3);
  }
  *a1 = v3;
  return v4;
}
