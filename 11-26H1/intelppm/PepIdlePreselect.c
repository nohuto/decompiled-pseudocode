/*
 * XREFs of PepIdlePreselect @ 0x14000E190
 * Callers:
 *     <none>
 * Callees:
 *     SelectPreferredIdleState @ 0x14000DC7C (SelectPreferredIdleState.c)
 */

unsigned int __fastcall PepIdlePreselect(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ecx
  bool v7; // zf
  int v8; // eax
  bool v9; // dl
  unsigned int v10; // eax
  unsigned int result; // eax

  SelectPreferredIdleState(a1, a2);
  v4 = *(unsigned __int8 *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 16) + 1;
  if ( v5 == v4 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(a1 + 12);
  v7 = v5 == v4;
  v8 = *(unsigned __int8 *)(a2 + 46);
  v9 = !v7;
  if ( (_BYTE)v8 )
  {
    v10 = v8 - 1;
    if ( v10 <= v6 )
    {
      v9 = 0;
      v6 = v10;
    }
  }
  result = v6 | 0x80000000;
  if ( !v9 )
    return v6;
  return result;
}
