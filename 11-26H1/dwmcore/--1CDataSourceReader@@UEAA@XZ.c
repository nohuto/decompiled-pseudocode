/*
 * XREFs of ??1CDataSourceReader@@UEAA@XZ @ 0x180266A0C
 * Callers:
 *     ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x180266AF0 (--_ECDataSourceReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1802077B4 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@std@@PEAVCDataSourceReader@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCDataSourceReader@@@std@@@std@@@0@V10@V10@AEBQEAVCDataSourceReader@@@Z @ 0x18022E2BC (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCDataSourceReader@@@std@@@std@.c)
 *     ?shrink_to_fit@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAXXZ @ 0x18022EB54 (-shrink_to_fit@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@Q.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18024397C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

void __fastcall CDataSourceReader::~CDataSourceReader(CDataSourceReader *this)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rdi
  void **v5; // rax
  const __m128i **DataSourceProxy; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDataSourceReader *v11; // [rsp+40h] [rbp+8h] BYREF
  const __m128i *v12; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CDataSourceReader::`vftable';
  v2 = *((_BYTE *)this + 88);
  if ( (v2 & 2) != 0 )
  {
    v3 = *((_QWORD *)this + 3);
    v11 = this;
    v4 = *(_QWORD *)(v3 + 6392);
    v5 = (void **)std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CDataSourceReader *>>>,CDataSourceReader *>(
                    &v12,
                    *(const __m128i **)(v4 + 104),
                    *(const __m128i **)(v4 + 112),
                    (unsigned __int64 *)&v11);
    std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
      (char *)*v5 + 8,
      *(_QWORD *)(v4 + 112),
      *v5);
    *(_QWORD *)(v4 + 112) -= 8LL;
    std::vector<CDataSourceReader *>::shrink_to_fit((_QWORD *)(v4 + 104));
    *((_BYTE *)this + 88) &= ~2u;
    v2 = *((_BYTE *)this + 88);
  }
  if ( (v2 & 1) != 0 )
  {
    DataSourceProxy = (const __m128i **)DataProviderManager::GetDataSourceProxy(
                                          *(DataProviderManager **)(*((_QWORD *)this + 3) + 6392LL),
                                          *((_QWORD *)this + 9),
                                          *((_QWORD *)this + 10));
    if ( DataSourceProxy )
    {
      v9 = DataSourceProxy::UnregisterReader(DataSourceProxy, this);
      if ( v9 >= 0 )
      {
LABEL_9:
        *((_BYTE *)this + 88) &= ~1u;
        goto LABEL_10;
      }
      v7 = (unsigned int)v9;
      v8 = 402LL;
    }
    else
    {
      v7 = 2147500037LL;
      v8 = 398LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)v7);
    goto LABEL_9;
  }
LABEL_10:
  CResource::~CResource(this);
}
