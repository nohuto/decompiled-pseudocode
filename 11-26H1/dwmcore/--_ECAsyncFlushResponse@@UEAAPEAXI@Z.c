/*
 * XREFs of ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x18001F290
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::`vector deleting destructor'(CAsyncFlushResponse *this, char a2)
{
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  if ( *((_QWORD *)this + 5) )
  {
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release();
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
