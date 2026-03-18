/*
 * XREFs of ??0CResourceWeakRef@@IEAA@PEAVCResource@@@Z @ 0x1801A46FC
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 * Callees:
 *     <none>
 */

CResourceWeakRef *__fastcall CResourceWeakRef::CResourceWeakRef(CResourceWeakRef *this, struct CResource *a2)
{
  CResourceWeakRef *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMWeakRef::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = a2;
  *(_QWORD *)this = &CResourceWeakRef::`vftable';
  result = this;
  *((_QWORD *)this + 8) = a2;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
