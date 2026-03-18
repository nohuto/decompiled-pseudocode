/*
 * XREFs of ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140247DEC
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@IPEA_N@Z @ 0x14022A384 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14022A450 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x14022A520 (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJUDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022A5F0 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140247E50 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSI.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140247F70 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DirectComposition::CGenericMarshaler::FindProperty(__int64 a1, _QWORD *a2, int a3)
{
  _DWORD **v3; // r9
  _DWORD **v4; // rcx

  v3 = *(_DWORD ***)(a1 + 56);
  v4 = &v3[*(_QWORD *)(a1 + 64)];
  while ( 1 )
  {
    *a2 = v3;
    if ( v3 == v4 || **v3 == a3 )
      break;
    ++v3;
  }
  return a2;
}
