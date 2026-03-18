/*
 * XREFs of ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1401FD390
 * Callers:
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReleaseToMostRecentlyFreedList(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        void *a2,
        unsigned __int64 a3)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v3; // rdi
  unsigned __int32 v5; // r9d
  __int64 v6; // rcx
  void *v7; // rbx
  void **v8; // rcx
  void ***v9; // rax

  v3 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)a3;
  v5 = _InterlockedIncrement((volatile signed __int32 *)this + 10) % 0x60u;
  v6 = 16LL * v5;
  LODWORD(a3) = v5;
  v7 = *(void **)((char *)this + v6 + 56);
  if ( v7 != (void *)_InterlockedCompareExchange64(
                       (volatile signed __int64 *)((char *)this + v6 + 56),
                       (signed __int64)v3,
                       (signed __int64)v7) )
  {
    do
    {
      a3 = _InterlockedIncrement((volatile signed __int32 *)this + 10) % 0x60u;
      v7 = (void *)*((_QWORD *)this + 2 * a3 + 7);
    }
    while ( v7 != (void *)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)this + 2 * a3 + 7,
                            (signed __int64)v3,
                            (signed __int64)v7) );
  }
  *((_QWORD *)this + 2 * (unsigned int)a3 + 6) = a2;
  if ( v7 )
  {
    while ( *(void **)v7 != v7 )
    {
      v8 = (void **)*((_QWORD *)v7 + 1);
      if ( *v8 != v7 || (v9 = (void ***)v8[1], *v9 != v8) )
        __fastfail(3u);
      *((_QWORD *)v7 + 1) = v9;
      *v9 = (void **)v7;
      ExFreePoolWithTag(v8, 0);
    }
    ExFreePoolWithTag(*((PVOID *)v7 + 2), 0);
    ExFreePoolWithTag(*((PVOID *)v7 + 3), 0);
    ExFreePoolWithTag(v7, 0);
  }
}
