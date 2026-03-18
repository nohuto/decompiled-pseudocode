/*
 * XREFs of ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x180266AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x180266A0C (--1CDataSourceReader@@UEAA@XZ.c)
 */

CDataSourceReader *__fastcall CDataSourceReader::`vector deleting destructor'(CDataSourceReader *this, char a2)
{
  CDataSourceReader::~CDataSourceReader(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
