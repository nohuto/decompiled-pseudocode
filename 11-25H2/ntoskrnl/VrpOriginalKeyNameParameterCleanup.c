/*
 * XREFs of VrpOriginalKeyNameParameterCleanup @ 0x14046F730
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpFreeExtraParameter @ 0x1409471DC (CmpFreeExtraParameter.c)
 * Callees:
 *     VrpDereferenceJobContext @ 0x140A30C60 (VrpDereferenceJobContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VrpOriginalKeyNameParameterCleanup(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx

  if ( *a2 )
    VrpDereferenceJobContext();
  v3 = (void *)a2[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
}
