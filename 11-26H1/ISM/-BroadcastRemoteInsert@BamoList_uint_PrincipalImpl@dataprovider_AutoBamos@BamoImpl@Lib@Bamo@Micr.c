/*
 * XREFs of ?BroadcastRemoteInsert@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z @ 0x180102DCC
 * Callers:
 *     ?BroadcastRemoteInsert@BamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJII@Z @ 0x180102D70 (-BroadcastRemoteInsert@BamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallRemoteInsertOnStub@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@II@Z @ 0x180103B60 (-CallRemoteInsertOnStub@BamoList_uint_PrincipalImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Mic.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_PrincipalImpl::BroadcastRemoteInsert(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_PrincipalImpl *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rax
  __int64 i; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL) )
  {
    for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
    {
      if ( *(_BYTE *)(i + 56) )
      {
        v8 = Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_PrincipalImpl::CallRemoteInsertOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2,
               a3);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
    }
    return 0;
  }
  else
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
      *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v3 + 32),
      0x87B20814,
      0);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3870,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
