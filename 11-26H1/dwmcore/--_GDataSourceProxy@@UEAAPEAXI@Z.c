/*
 * XREFs of ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x180242D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x180242C08 (--1DataSourceProxy@@UEAA@XZ.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::`scalar deleting destructor'(DataSourceProxy *this, char a2)
{
  DataSourceProxy::~DataSourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
