/*
 * XREFs of AcpiCStatePreselect @ 0x140009A00
 * Callers:
 *     <none>
 * Callees:
 *     SelectPreferredIdleState @ 0x14000DC7C (SelectPreferredIdleState.c)
 */

unsigned int __fastcall AcpiCStatePreselect(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // esi
  unsigned __int8 v6; // bl
  int v7; // r8d
  __int64 v8; // r9
  bool v9; // r10
  bool v10; // zf
  unsigned int result; // eax

  SelectPreferredIdleState();
  LODWORD(v4) = *(_DWORD *)(a1 + 16);
  v5 = *(unsigned __int8 *)(a1 + 20);
  v6 = *(_BYTE *)(a2 + 46);
  v7 = -1;
  if ( v6 )
  {
    v8 = *(unsigned int *)(a1 + 12);
    v9 = *(_BYTE *)(88 * v8 + a1 + 139) < v6 && (_DWORD)v4 + 1 != v5;
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( *(_BYTE *)(88LL * (unsigned int)v8 + a1 + 139) <= v6 )
          break;
        v10 = (_DWORD)v4 == 1;
        v4 = (unsigned int)(v4 - 1);
        LODWORD(v8) = *(unsigned __int8 *)(v4 + a1 + 21);
      }
      while ( !v10 );
    }
    *(_DWORD *)(a1 + 12) = v8;
    *(_DWORD *)(a1 + 16) = v4;
  }
  else
  {
    v9 = (_DWORD)v4 + 1 != v5;
  }
  if ( (_DWORD)v4 + 1 != v5 )
    v7 = *(_DWORD *)(a1 + 12);
  result = v7 | 0x80000000;
  if ( !v9 )
    return v7;
  return result;
}
