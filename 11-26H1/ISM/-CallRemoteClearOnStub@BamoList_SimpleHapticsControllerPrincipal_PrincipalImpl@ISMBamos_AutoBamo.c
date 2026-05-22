/*
 * XREFs of ?CallRemoteClearOnStub@BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z @ 0x18018EB38
 * Callers:
 *     ?BroadcastRemoteClear@BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x18018E3CC (-BroadcastRemoteClear@BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl@ISMBamos_AutoBamos.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180070558 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoteClear@BamoList_SimpleHapticsControllerPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x1801906E0 (-RemoteClear@BamoList_SimpleHapticsControllerPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl::CallRemoteClearOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v1 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_StubImpl::RemoteClear(a1);
    if ( (int)(v1 + 0x80000000) >= 0 && v1 != -2018375675 )
    {
      v3 = wil::verify_hresult<long>(v1);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC608,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v3,
        v4);
    }
  }
  return 0LL;
}
