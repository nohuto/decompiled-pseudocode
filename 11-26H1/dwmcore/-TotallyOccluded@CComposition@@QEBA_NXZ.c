/*
 * XREFs of ?TotallyOccluded@CComposition@@QEBA_NXZ @ 0x180196D94
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::TotallyOccluded(CComposition *this)
{
  char v1; // dl

  v1 = 0;
  if ( !*((_DWORD *)this + 1613) )
    return *(_BYTE *)(*((_QWORD *)this + 77) + 753LL) != 0;
  return v1;
}
