/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x180009300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180009B94 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

struct CDrawListPrimitive8 *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        struct CDrawListPrimitive8 *lpMem,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax
  HANDLE ProcessHeap; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(lpMem, 744LL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(lpMem);
      if ( *((_DWORD *)ObjectCache + 1) < *(_DWORD *)ObjectCache )
      {
        *(_QWORD *)lpMem = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = lpMem;
      }
      else if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  return lpMem;
}
