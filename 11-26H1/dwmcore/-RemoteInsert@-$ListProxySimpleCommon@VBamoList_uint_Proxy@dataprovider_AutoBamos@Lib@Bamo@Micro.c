/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x180251E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x1801626E0 (-GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnec.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801628EC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180162ADC (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18023E898 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180241188 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x180251A18 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteInsert(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2,
        int a3)
{
  char *v3; // rbx
  __int64 v4; // r14
  Microsoft::Bamo::BaseBamoConnection *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  int *v12; // rcx
  int *v13; // rsi
  const void *v14; // rdx
  int v15; // eax
  int v16[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v3 = (char *)this + 48;
  v4 = a2;
  if ( a2 <= (unsigned __int64)((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 2) )
  {
    Connection = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v16, Connection);
    v12 = (int *)*((_QWORD *)v3 + 1);
    v13 = (int *)(*(_QWORD *)v3 + 4 * v4);
    if ( v12 == *((int **)v3 + 2) )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((void **)v3, *(_QWORD *)v3 + 4 * v4, &v18);
    }
    else if ( v13 == v12 )
    {
      *v12 = a3;
      *((_QWORD *)v3 + 1) += 4LL;
    }
    else
    {
      v14 = (const void *)(*(_QWORD *)v3 + 4 * v4);
      *v12 = *(v12 - 1);
      *((_QWORD *)v3 + 1) += 4LL;
      memmove_0(v13 + 1, v14, (char *)(v12 - 1) - (char *)v13);
      *v13 = a3;
    }
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v16);
    if ( Microsoft::Bamo::BamoProxy::GetIsReady(this) )
    {
      v15 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD))(*(_QWORD *)this + 120LL))(
              this,
              (unsigned int)v4);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v15,
          v16[0]);
    }
    return 0LL;
  }
  else
  {
    v7 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    v8 = Microsoft::Bamo::BaseBamoConnection::TrackError(v7, 0x87B2080C);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8);
    return v9;
  }
}
