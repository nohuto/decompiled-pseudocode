/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013E3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1800B9128 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013CCE4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013CD04 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ?erase@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@@Z @ 0x18013E97C (-erase@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA-AV-$_V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteRemove(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2)
{
  __int64 v2; // r15
  _QWORD *v4; // r14
  Microsoft::Bamo::BaseBamoConnection *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  bool IsReady; // di
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int64 v11; // xmm0_8
  const char *v12; // r9
  int v13; // eax
  int v14[2]; // [rsp+20h] [rbp-78h]
  __int128 v15; // [rsp+28h] [rbp-70h]
  _BYTE v16[24]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int128 v18; // [rsp+58h] [rbp-40h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = a2;
  v4 = (_QWORD *)((char *)this + 48);
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    v15 = 0LL;
    v17 = 0LL;
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v18, Connection);
      if ( IsReady )
      {
        v15 = *(_OWORD *)(*v4 + 24 * v2);
        v11 = *(_QWORD *)(*v4 + 24 * v2 + 16);
      }
      else
      {
        v11 = v17;
      }
      *(_QWORD *)v14 = v11;
      std::vector<VirtualTouchpadRect>::erase(v4, v16, *v4 + 24 * v2);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v18);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4CD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v12);
    }
    if ( IsReady )
    {
      v18 = v15;
      v19 = *(_QWORD *)v14;
      v13 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD, __int128 *))(*(_QWORD *)this + 152LL))(
              this,
              (unsigned int)v2,
              &v18);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v13,
          v14[0]);
    }
    return 0LL;
  }
  else
  {
    v5 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v6 = Microsoft::Bamo::BaseBamoConnection::TrackError(v5, 0x87B2080C);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v6);
    return v7;
  }
}
