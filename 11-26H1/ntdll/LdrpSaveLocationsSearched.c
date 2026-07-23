/*
 * XREFs of LdrpSaveLocationsSearched @ 0x18010B6DC
 * Callers:
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpSaveLocationsSearched(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  _DWORD *v4; // r9
  int v5; // ebx
  unsigned __int64 *v6; // r11
  __int64 result; // rax

  v3 = 0;
  v4 = (_DWORD *)(a1 + 40);
  v5 = 0;
  if ( *(_WORD *)(a1 + 112) )
  {
    v6 = (unsigned __int64 *)(a1 + 64);
    do
    {
      if ( a2 <= *v6 )
        break;
      result = (unsigned int)(16 << *v4);
      ++v3;
      v5 |= result;
      ++v6;
      ++v4;
    }
    while ( v3 < *(unsigned __int16 *)(a1 + 112) );
  }
  *a3 = v5;
  return result;
}
