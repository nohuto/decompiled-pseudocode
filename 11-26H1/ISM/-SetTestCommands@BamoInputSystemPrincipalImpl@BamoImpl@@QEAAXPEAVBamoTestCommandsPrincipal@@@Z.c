/*
 * XREFs of ?SetTestCommands@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x180131868
 * Callers:
 *     ?SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x180131820 (-SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetTestCommands@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x18013121C (-LogSetTestCommands@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoTestCommandsPrincipal@@@.c)
 *     ?UpdateTestCommandsRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180131D90 (-UpdateTestCommandsRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetTestCommands(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoTestCommandsPrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoTestCommandsPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetTestCommands(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCacheStatic(
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
          (void *)0x372E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
