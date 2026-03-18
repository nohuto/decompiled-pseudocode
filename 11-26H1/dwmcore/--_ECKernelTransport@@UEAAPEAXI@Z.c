/*
 * XREFs of ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x180233F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CKernelTransport@@UEAA@XZ @ 0x180233ED0 (--1CKernelTransport@@UEAA@XZ.c)
 */

CKernelTransport *__fastcall CKernelTransport::`vector deleting destructor'(CKernelTransport *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CKernelTransport::~CKernelTransport(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
