/*
 * XREFs of ??$EnumerateStubs@PEAVBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoSimpleHapticsControllerPrincipalImpl@1@@Z_N1@Z @ 0x18007FE98
 * Callers:
 *     ?SetSupportedFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800889A4 (-SetSupportedFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_Simpl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      v7 = a2(i, a4);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)v7,
          v10);
        return v8;
      }
    }
  }
  return 0LL;
}
