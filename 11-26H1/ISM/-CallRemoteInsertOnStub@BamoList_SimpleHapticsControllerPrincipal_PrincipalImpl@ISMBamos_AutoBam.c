/*
 * XREFs of ?CallRemoteInsertOnStub@BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018EBE0
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018E5EC (-BroadcastRemoteInsert@BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl@ISMBamos_AutoBamo.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180070558 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoteInsert@BamoList_SimpleHapticsControllerPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1801908C0 (-RemoteInsert@BamoList_SimpleHapticsControllerPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl::CallRemoteInsertOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        struct BamoSimpleHapticsControllerPrincipal *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v3 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_StubImpl::RemoteInsert(
           a1,
           a2,
           a3);
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
    {
      v5 = wil::verify_hresult<long>(v3);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC59F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v5,
        v6);
    }
  }
  return 0LL;
}
