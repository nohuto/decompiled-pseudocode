/*
 * XREFs of ?Copy@?$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022925C
 * Callers:
 *     ?SetBufferProperty@CMeshGeometry2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022E070 (-SetBufferProperty@CMeshGeometry2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x14010635C (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArray<D2D_POINT_2F,1735213892,128,551,552>::Copy(
        DirectComposition::CMarshaledArrayBase *a1,
        const void *a2,
        unsigned __int64 a3)
{
  return DirectComposition::CMarshaledArrayBase::Copy(a1, a2, a3, 8uLL, 0x676D4344u);
}
