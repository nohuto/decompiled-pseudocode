/*
 * XREFs of ?SetUIAHitTest@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoUIAHitTestPrincipal@@@Z @ 0x180131978
 * Callers:
 *     ?SetUIAHitTest@BamoInputSystemPrincipal@@UEAAXPEAVBamoUIAHitTestPrincipal@@@Z @ 0x180131930 (-SetUIAHitTest@BamoInputSystemPrincipal@@UEAAXPEAVBamoUIAHitTestPrincipal@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetUIAHitTest@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoUIAHitTestPrincipal@@@Z @ 0x1801312A8 (-LogSetUIAHitTest@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoUIAHitTestPrincipal@@@Z.c)
 *     ?UpdateUIAHitTestRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131DBC (-UpdateUIAHitTestRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetUIAHitTest(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoUIAHitTestPrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoUIAHitTestPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetUIAHitTest(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateUIAHitTestRemoteCacheStatic(
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
          (void *)0x3740,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
