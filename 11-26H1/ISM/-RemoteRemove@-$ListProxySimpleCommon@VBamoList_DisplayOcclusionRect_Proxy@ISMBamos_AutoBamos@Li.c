/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1800B9128 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013CCE4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013CD04 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ?erase@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@@Z @ 0x18013DAA4 (-erase@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA-AV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteRemove(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r14
  Microsoft::Bamo::BaseBamoConnection *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  bool IsReady; // si
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int128 *v12; // rdx
  const char *v13; // r9
  int v14; // eax
  int v15; // [rsp+20h] [rbp-1B8h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v16[3]; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-198h] BYREF
  __int128 v18; // [rsp+50h] [rbp-188h]
  __int128 v19; // [rsp+60h] [rbp-178h]
  __int128 v20; // [rsp+70h] [rbp-168h]
  __int128 v21; // [rsp+80h] [rbp-158h]
  __int128 v22; // [rsp+90h] [rbp-148h]
  __int128 v23; // [rsp+A0h] [rbp-138h]
  __int128 v24; // [rsp+B0h] [rbp-128h]
  __int128 v25; // [rsp+C0h] [rbp-118h]
  __int128 v26; // [rsp+D0h] [rbp-108h]
  __int128 v27; // [rsp+E0h] [rbp-F8h]
  _OWORD v28[11]; // [rsp+F0h] [rbp-E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 48);
  v5 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4)) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    memset_0(&v17, 0, 0xB0uLL);
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock(v16, Connection);
      if ( IsReady )
      {
        v12 = (__int128 *)(*v4 + 176 * v5);
        v17 = *v12;
        v18 = v12[1];
        v19 = v12[2];
        v20 = v12[3];
        v21 = v12[4];
        v22 = v12[5];
        v23 = v12[6];
        v24 = v12[7];
        v25 = v12[8];
        v26 = v12[9];
        v27 = v12[10];
      }
      std::vector<DisplayOcclusionRect>::erase(v4, &v15, *v4 + 176 * v5);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v16);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4CD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v13);
    }
    if ( IsReady )
    {
      v28[0] = v17;
      v28[1] = v18;
      v28[2] = v19;
      v28[3] = v20;
      v28[4] = v21;
      v28[5] = v22;
      v28[6] = v23;
      v28[7] = v24;
      v28[8] = v25;
      v28[9] = v26;
      v28[10] = v27;
      v14 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD, _OWORD *))(*(_QWORD *)this + 152LL))(
              this,
              a2,
              v28);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v14,
          v15);
    }
    return 0LL;
  }
  else
  {
    v6 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v7 = Microsoft::Bamo::BaseBamoConnection::TrackError(v6, 0x87B2080C);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7);
    return v8;
  }
}
