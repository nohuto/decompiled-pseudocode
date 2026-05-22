/*
 * XREFs of ?SetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z @ 0x18009311C
 * Callers:
 *     ?SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x18007A1A0 (-SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXI@Z @ 0x1800931A8 (-LogSetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXI@Z.c)
 *     ?UpdateThreadIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B0B6C (-UpdateThreadIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImp.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SetThreadId(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        unsigned int a2)
{
  __int64 i; // rbx
  int updated; // eax
  unsigned int v5; // esi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 17) = a2;
  BamoImpl::BamoActivatableEntityPrincipalImpl::LogSetThreadId(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCacheStatic(
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
          (void *)0x6619,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v5,
          v6);
      }
    }
  }
}
