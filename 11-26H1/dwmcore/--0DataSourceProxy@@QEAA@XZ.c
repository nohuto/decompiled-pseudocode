/*
 * XREFs of ??0DataSourceProxy@@QEAA@XZ @ 0x18020131C
 * Callers:
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18020123C (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprov.c)
 * Callees:
 *     ??0DataSourcePropertySet@@QEAA@XZ @ 0x180251744 (--0DataSourcePropertySet@@QEAA@XZ.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::DataSourceProxy(DataSourceProxy *this)
{
  DataSourceProxy *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoDataSourceProxyImpl::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  DataSourcePropertySet::DataSourcePropertySet((DataSourceProxy *)((char *)this + 64));
  result = this;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
