/*
 * XREFs of ?CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBU_D3DMATRIX@@@Z @ 0x180103DA8
 * Callers:
 *     ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x18010355C (-BroadcastSetMatrix4x4Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x180106890 (-SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::CallSetMatrix4x4ValueOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  unsigned int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v3 = BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value(a1, a2, a3);
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3378,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v3,
        v5);
  }
  return 0LL;
}
