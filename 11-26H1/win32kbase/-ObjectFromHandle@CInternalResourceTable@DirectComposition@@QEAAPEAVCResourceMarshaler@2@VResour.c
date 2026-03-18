/*
 * XREFs of ?ObjectFromHandle@CInternalResourceTable@DirectComposition@@QEAAPEAVCResourceMarshaler@2@VResourceHandle@@@Z @ 0x1400552B0
 * Callers:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140055258 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInternalResourceTable::ObjectFromHandle(_QWORD *a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = 0LL;
  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < a1[3] )
    v5 = *(_QWORD *)(a1[4] * v4 + *a1);
  else
    v5 = 0LL;
  if ( v5 != 1 )
    return v5;
  return v2;
}
