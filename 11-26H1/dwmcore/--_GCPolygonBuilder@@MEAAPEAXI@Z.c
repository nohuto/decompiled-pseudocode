/*
 * XREFs of ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180054B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180054C0C (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x180054C88 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::`scalar deleting destructor'(CPolygonBuilder *this, char a2)
{
  struct CPolygonBuilder *v4; // rcx
  struct CObjectCache *ObjectCache; // rax
  HANDLE ProcessHeap; // rax

  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>((char *)this + 16);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 360LL);
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
      else if ( this )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, this);
      }
    }
  }
  return this;
}
