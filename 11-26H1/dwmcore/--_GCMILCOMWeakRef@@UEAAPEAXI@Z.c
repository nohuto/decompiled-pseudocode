/*
 * XREFs of ??_GCMILCOMWeakRef@@UEAAPEAXI@Z @ 0x1801DADA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CMILCOMWeakRef *__fastcall CMILCOMWeakRef::`scalar deleting destructor'(CMILCOMWeakRef *this, char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
