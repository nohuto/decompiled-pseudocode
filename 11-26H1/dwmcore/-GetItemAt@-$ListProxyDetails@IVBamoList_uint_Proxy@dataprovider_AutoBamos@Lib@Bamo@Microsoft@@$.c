/*
 * XREFs of ?GetItemAt@?$ListProxyDetails@IVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@$0A@$0A@$0A@@Bamo@Microsoft@@QEAAII@Z @ 0x180162670
 * Callers:
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801625C8 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x1801626E0 (-GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnec.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801628EC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180162ADC (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxyDetails<unsigned int,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,0,0,0>::GetItemAt(
        Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rbx
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  const char *v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  Connection = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(a1);
  Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v9, Connection);
  v6 = *((_QWORD *)a1 + 6);
  if ( v2 >= (*((_QWORD *)a1 + 7) - v6) >> 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v5);
  v7 = *(_DWORD *)(v6 + 4 * v2);
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
  return v7;
}
