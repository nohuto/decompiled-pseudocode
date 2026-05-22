/*
 * XREFs of ?BroadcastRemoteClear@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x180188DEC
 * Callers:
 *     ?BroadcastRemoteClear@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ @ 0x180188DB0 (-BroadcastRemoteClear@BamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallRemoteClearOnStub@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z @ 0x1801891C8 (-CallRemoteClearOnStub@BamoList_SimpleHapticsControllerFeedback_PrincipalImpl@ISMBamos_AutoBamos.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::BroadcastRemoteClear(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl *this)
{
  __int64 v1; // rax
  __int64 i; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v1 + 32) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
    {
      if ( *(_BYTE *)(i + 56) )
      {
        v4 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::CallRemoteClearOnStub((struct Microsoft::BamoImpl::BamoStubImpl *)i);
        v5 = v4;
        if ( v4 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v4);
          return v5;
        }
      }
    }
    return 0;
  }
  else
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v1 + 32),
      0x87B20814,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC05F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
