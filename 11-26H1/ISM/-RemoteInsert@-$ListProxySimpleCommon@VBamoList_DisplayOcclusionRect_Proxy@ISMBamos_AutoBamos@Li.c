/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D180
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1800B9128 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x18013C990 (--$emplace@AEBUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclu.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013CCE4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013CD04 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteInsert(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2,
        __int128 *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  Microsoft::Bamo::BaseBamoConnection *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rdx
  const char *v13; // r9
  Microsoft::Bamo::BamoProxy *v14; // rcx
  int v15; // eax
  Microsoft::BamoImpl::BamoImplObject *v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = (_QWORD *)((char *)this + 48);
  v7 = a2;
  if ( a2 <= (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4)) )
  {
    Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    try
    {
      Microsoft::Bamo::Lock::Lock(v16, Connection);
      std::vector<DisplayOcclusionRect>::emplace<DisplayOcclusionRect const &>(
        v6,
        &v18,
        (__int128 *)(*v6 + 176 * v7),
        a3);
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v16);
      v14 = this;
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x49F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v13);
    }
    if ( Microsoft::Bamo::BamoProxy::GetIsReady(v14) )
    {
      v15 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD))(*(_QWORD *)this + 136LL))(this, a2);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v15,
          (int)v16[0]);
    }
    return 0LL;
  }
  else
  {
    v8 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v9 = Microsoft::Bamo::BaseBamoConnection::TrackError(v8, 0x87B2080C);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v9);
    return v10;
  }
}
