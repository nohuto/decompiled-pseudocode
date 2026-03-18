/*
 * XREFs of ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z @ 0x1801B4C60
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801B4CBC (-RemoveElement@-$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@.c)
 */

bool __fastcall CCompositionSurfaceManager::RemoveFromSurfaceMap(CCompositionSurfaceManager *this, struct _LUID a2)
{
  char *v2; // rdi
  PVOID v3; // rax
  PVOID v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (char *)this + 8;
  v6[0] = a2;
  v6[1] = 0LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v6);
  v4 = v3;
  if ( v3 )
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::RemoveElement(v2, v3);
  return v4 != 0LL;
}
