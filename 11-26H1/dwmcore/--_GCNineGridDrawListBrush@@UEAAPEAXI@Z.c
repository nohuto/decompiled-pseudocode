/*
 * XREFs of ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18009ED80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x18009EDE8 (--1CNineGridDrawListBrush@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x18009F29C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CNineGridDrawListBrush *__fastcall CNineGridDrawListBrush::`scalar deleting destructor'(
        CNineGridDrawListBrush *this,
        char a2)
{
  struct CNineGridDrawListBrush *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  CNineGridDrawListBrush::~CNineGridDrawListBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 576LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) < *(_DWORD *)ObjectCache )
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
      else
      {
        operator delete(this);
      }
    }
  }
  return this;
}
