/*
 * XREFs of ?SetRestrictToProcessIds@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180106C08
 * Callers:
 *     ?SetRestrictToProcessIds@BamoDataSourcePrincipal@@UEAAXPEAVBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180106BC0 (-SetRestrictToProcessIds@BamoDataSourcePrincipal@@UEAAXPEAVBamoList_uint_Principal@dataprovider_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRestrictToProcessIdsRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801079F0 (-UpdateRestrictToProcessIdsRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoSt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::SetRestrictToProcessIds(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal *a2)
{
  __int64 v3; // rbx
  __int64 i; // rbx
  int updated; // eax
  unsigned int v6; // esi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal *))a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdsRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3131,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)v6,
          v7);
      }
    }
  }
}
