/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801A1100
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1800B9128 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013CCE4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013CD04 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@AEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x18015FD74 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteInsert(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2,
        __int128 *a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rdi
  Microsoft::Bamo::BaseBamoConnection *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rdx
  __int128 *v13; // rdi
  __int128 *v14; // rcx
  __int128 v15; // xmm6
  const char *v16; // r9
  Microsoft::Bamo::BamoProxy *v17; // rcx
  int v18; // eax
  Microsoft::BamoImpl::BamoImplObject *v19[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (__int64 *)((char *)this + 48);
  v7 = a2;
  if ( a2 <= (unsigned __int64)((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4) )
  {
    Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    try
    {
      Microsoft::Bamo::Lock::Lock(v19, Connection);
      v13 = (__int128 *)(*v6 + 16 * v7);
      v14 = (__int128 *)v6[1];
      if ( v14 == (__int128 *)v6[2] )
      {
        std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(v6, (__int64)v13, a3);
      }
      else if ( v13 == v14 )
      {
        *v14 = *a3;
        v6[1] += 16LL;
      }
      else
      {
        v15 = *a3;
        *v14 = *(v14 - 1);
        v6[1] += 16LL;
        memmove_0(v13 + 1, v13, (char *)(v14 - 1) - (char *)v13);
        *v13 = v15;
      }
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v19);
      v17 = this;
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x49F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v16);
    }
    if ( Microsoft::Bamo::BamoProxy::GetIsReady(v17) )
    {
      v18 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD))(*(_QWORD *)this + 136LL))(this, a2);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v18,
          (int)v19[0]);
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
