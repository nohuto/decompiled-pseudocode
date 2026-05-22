/*
 * XREFs of ?SetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z @ 0x18008E8CC
 * Callers:
 *     ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x18007AA30 (-SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXI@Z @ 0x18008E958 (-LogSetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXI@Z.c)
 *     ?UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0B40 (-UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubIm.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SetProcessId(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        unsigned int a2)
{
  __int64 i; // rbx
  int updated; // eax
  unsigned int v5; // esi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 16) = a2;
  BamoImpl::BamoActivatableEntityPrincipalImpl::LogSetProcessId(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCacheStatic(
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
          (void *)0x6607,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v5,
          v6);
      }
    }
  }
}
