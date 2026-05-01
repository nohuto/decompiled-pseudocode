/*
 * XREFs of WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect @ 0x18051405C
 * Callers:
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x18051400C (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowRelativePositioning::_anonymous_namespace_::MoveIntoDisplayRect(
        __int64 a1,
        _DWORD *a2,
        int *a3)
{
  int v3; // r11d
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  int v8; // r10d
  int v9; // r8d
  int v10; // ecx

  v3 = a3[2];
  v5 = *a3;
  v6 = a3[1];
  v7 = v3 - *a3;
  v8 = a3[3];
  v9 = v8 - v6;
  v10 = a2[3] - a2[1];
  if ( v7 >= a2[2] - *a2 )
    v7 = a2[2] - *a2;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( v9 >= v10 )
    v9 = v10;
  if ( *(_DWORD *)(a1 + 8) < v3 )
  {
    if ( *(_DWORD *)a1 <= v5 )
    {
      *(_DWORD *)a1 = v5;
      *(_DWORD *)(a1 + 8) = v7 + v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v3;
    *(_DWORD *)a1 = v3 - v7;
  }
  if ( *(_DWORD *)(a1 + 12) < v8 )
  {
    if ( *(_DWORD *)(a1 + 4) <= v6 )
    {
      *(_DWORD *)(a1 + 4) = v6;
      *(_DWORD *)(a1 + 12) = v9 + v6;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = v8;
    *(_DWORD *)(a1 + 4) = v8 - v9;
  }
  return a1;
}
