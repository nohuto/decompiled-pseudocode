/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x1802520C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x1801626E0 (-GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnec.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801628EC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180162ADC (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180241188 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x180251A18 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteReplace(
        Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *this,
        unsigned int a2,
        int a3)
{
  __int64 v5; // r14
  Microsoft::Bamo::BaseBamoConnection *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  bool IsReady; // bp
  unsigned int v11; // edi
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a2;
  if ( a2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 2) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    v11 = 0;
    Connection = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v15, Connection);
    v13 = 4 * v5;
    if ( IsReady )
      v11 = *(_DWORD *)(v13 + *((_QWORD *)this + 6));
    *(_DWORD *)(v13 + *((_QWORD *)this + 6)) = a3;
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v15);
    if ( IsReady )
    {
      v14 = (*(__int64 (__fastcall **)(Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *, _QWORD, _QWORD))(*(_QWORD *)this + 144LL))(
              this,
              (unsigned int)v5,
              v11);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v14,
          v15[0]);
    }
    return 0LL;
  }
  else
  {
    v6 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    v7 = Microsoft::Bamo::BaseBamoConnection::TrackError(v6, 0x87B2080C);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7);
    return v8;
  }
}
