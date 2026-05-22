/*
 * XREFs of ?SetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAX_K@Z @ 0x18008EA44
 * Callers:
 *     ?SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x180079820 (-SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAX_K@Z @ 0x18008EAD0 (-LogSetWindowId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAX_K@Z.c)
 *     ?UpdateWindowIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0B98 (-UpdateWindowIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImp.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SetWindowId(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        unsigned __int64 a2)
{
  __int64 i; // rbx
  int updated; // eax
  unsigned int v5; // esi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 5) = a2;
  BamoImpl::BamoActivatableEntityPrincipalImpl::LogSetWindowId(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v5 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x65D1,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v5,
          v6);
      }
    }
  }
}
