/*
 * XREFs of ?AppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@QEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@@Z @ 0x18021FCBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::AppendChildren(
        CResource *a1,
        _QWORD *a2)
{
  return CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::SetOrAppendChildren(a1, a2, 1);
}
