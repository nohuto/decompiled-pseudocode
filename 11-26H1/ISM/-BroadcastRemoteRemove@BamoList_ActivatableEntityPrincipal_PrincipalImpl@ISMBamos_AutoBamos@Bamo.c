/*
 * XREFs of ?BroadcastRemoteRemove@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x180037B28
 * Callers:
 *     ?BroadcastRemoteRemove@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x18002A210 (-BroadcastRemoteRemove@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 * Callees:
 *     ?CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x180037BD4 (-CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::BroadcastRemoteRemove(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl *this,
        unsigned int a2)
{
  __int64 v2; // rax
  __int64 i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
    {
      if ( *(_BYTE *)(i + 56) )
      {
        v5 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteRemoveOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v5,
            v8);
          return v6;
        }
      }
    }
    return 0;
  }
  else
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32),
      -2018375660,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2D3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v8);
    return 2276591636LL;
  }
}
