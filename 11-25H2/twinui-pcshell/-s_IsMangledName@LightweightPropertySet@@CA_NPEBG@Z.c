/*
 * XREFs of ?s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z @ 0x1801CE410
 * Callers:
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801CE300 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall LightweightPropertySet::s_IsMangledName(LPCWCH lpString2)
{
  unsigned __int64 v1; // rax
  char v2; // bl

  v1 = -1LL;
  do
    ++v1;
  while ( lpString2[v1] );
  if ( v1 <= 0x14 )
    return 0;
  v2 = 1;
  if ( CompareStringOrdinal(L"LightweightProperty_", 20, lpString2, 20, 1) != 2 )
    return 0;
  return v2;
}
