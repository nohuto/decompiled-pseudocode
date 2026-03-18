/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1401B3D2C
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 * Callees:
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x140073838 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 */

char *__fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray(__int64 a1)
{
  DXGADAPTER_REFERENCE *v1; // rcx
  char *result; // rax

  v1 = *(DXGADAPTER_REFERENCE **)(a1 + 8);
  if ( v1 )
    return DXGADAPTER_REFERENCE::`vector deleting destructor'(v1);
  return result;
}
