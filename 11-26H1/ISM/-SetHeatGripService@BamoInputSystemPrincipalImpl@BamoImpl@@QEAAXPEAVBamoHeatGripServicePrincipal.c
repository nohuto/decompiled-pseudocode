/*
 * XREFs of ?SetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x180090908
 * Callers:
 *     ?SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x1800908C0 (-SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x1800909C8 (-LogSetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoHeatGripServicePrinci.c)
 *     ?UpdateHeatGripServiceRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131C30 (-UpdateHeatGripServiceRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubIm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetHeatGripService(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoHeatGripServicePrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoHeatGripServicePrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetHeatGripService(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v7 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x368C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
