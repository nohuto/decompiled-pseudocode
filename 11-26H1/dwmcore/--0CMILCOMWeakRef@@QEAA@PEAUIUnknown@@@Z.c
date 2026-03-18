/*
 * XREFs of ??0CMILCOMWeakRef@@QEAA@PEAUIUnknown@@@Z @ 0x1801A8080
 * Callers:
 *     ?GetWeakReference@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x1801A7FE0 (-GetWeakReference@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@UEAAJPEAPEAVIUnknownWeakRef@@.c)
 * Callees:
 *     <none>
 */

CMILCOMWeakRef *__fastcall CMILCOMWeakRef::CMILCOMWeakRef(CMILCOMWeakRef *this, struct IUnknown *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMWeakRef::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = a2;
  return this;
}
