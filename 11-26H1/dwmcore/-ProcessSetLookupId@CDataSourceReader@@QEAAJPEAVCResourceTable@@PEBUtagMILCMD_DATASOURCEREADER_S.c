/*
 * XREFs of ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1802076F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1802077B4 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x18022E4FC (-AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x180243450 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // r8
  DataSourceProxy *DataSourceProxy; // rax
  DataSourceProxy *v7; // rsi
  int v8; // eax
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 9) = v3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 10) = v5;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(
                      *(DataProviderManager **)(*((_QWORD *)this + 3) + 6392LL),
                      v3,
                      v5);
  v7 = DataSourceProxy;
  if ( DataSourceProxy && (v8 = DataSourceProxy::RegisterReader(DataSourceProxy, this), v9 = v8, v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v9 == -2147024891 )
      return 0LL;
  }
  else
  {
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !v7 )
    DataProviderManager::AddReaderToReadyList(*(DataProviderManager **)(*((_QWORD *)this + 3) + 6392LL), this);
  return 0LL;
}
