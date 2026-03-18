/*
 * XREFs of ??$AddOrUpdateProperty@UPropertySetQuaternionValue@@@CPropertySetMarshaler@DirectComposition@@AEAAJIAEBUPropertySetValue@@IPEBX@Z @ 0x140236A80
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400271D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x140236B84 (--$AddProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x140236F7C (--$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddOrUpdateProperty<PropertySetQuaternionValue>(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  int v5; // edx

  if ( a4 == 28 )
  {
    v5 = a2 - 1;
    if ( !v5 )
      return DirectComposition::CPropertySetMarshaler::AddProperty<D2DQuaternion>(a1, a3, a5 + 12);
    if ( v5 == 1 )
      return DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(a1, a3, a5 + 12);
  }
  return 3221225485LL;
}
