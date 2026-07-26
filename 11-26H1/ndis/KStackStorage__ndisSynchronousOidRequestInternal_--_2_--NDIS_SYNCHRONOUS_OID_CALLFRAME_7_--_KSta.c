/*
 * XREFs of KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_ @ 0x1400CD2D0
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     ??3?$KALLOCATOR_NONPAGED@$0ECFDEEEO@$0CAA@@@SAXPEAX@Z @ 0x140003688 (--3-$KALLOCATOR_NONPAGED@$0ECFDEEEO@$0CAA@@@SAXPEAX@Z.c)
 */

_QWORD *__fastcall KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_(
        __int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 120); *result; result = *(_QWORD **)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = *result;
    KALLOCATOR_NONPAGED<1112753230,512>::operator delete(result);
  }
  return result;
}
