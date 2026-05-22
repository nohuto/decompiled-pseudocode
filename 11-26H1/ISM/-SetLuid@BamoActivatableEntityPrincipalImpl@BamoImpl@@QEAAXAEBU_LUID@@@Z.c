/*
 * XREFs of ?SetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXAEBU_LUID@@@Z @ 0x18002A3F8
 * Callers:
 *     ?SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x18002A3B0 (-SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXAEBU_LUID@@@Z @ 0x18008C94C (-LogSetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXAEBU_LUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateLuidRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0AE8 (-UpdateLuidRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2M.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SetLuid(struct _LUID *this, const struct _LUID *a2)
{
  struct _LUID i; // rbx
  int updated; // eax
  unsigned int v5; // esi
  int v6; // [rsp+20h] [rbp-8h]
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  this[7] = *a2;
  BamoImpl::BamoActivatableEntityPrincipalImpl::LogSetLuid((BamoImpl::BamoActivatableEntityPrincipalImpl *)this, a2);
  for ( i = this[4]; i; i = *(struct _LUID *)(*(_QWORD *)&i + 40LL) )
  {
    if ( *(_BYTE *)(*(_QWORD *)&i + 56LL) )
    {
      updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCacheStatic(
                  *(struct Microsoft::BamoImpl::BamoStubImpl **)&i,
                  (struct BamoImpl::BamoActivatableEntityPrincipalImpl *)this);
      v5 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated,
          v6);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x65F5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v5,
          v7);
      }
    }
  }
}
