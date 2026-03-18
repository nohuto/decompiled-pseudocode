/*
 * XREFs of ??_GCPropertySet@@UEAAPEAXI@Z @ 0x1800AD110
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPropertySet@@UEAA@XZ @ 0x1800AD1AC (--1CPropertySet@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CPropertySet *__fastcall CPropertySet::`scalar deleting destructor'(CPropertySet *this, char a2)
{
  HANDLE ProcessHeap; // rax

  CPropertySet::~CPropertySet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 160LL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
