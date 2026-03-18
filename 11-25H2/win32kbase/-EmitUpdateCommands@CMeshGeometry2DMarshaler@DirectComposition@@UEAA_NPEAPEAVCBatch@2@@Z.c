/*
 * XREFs of ?EmitUpdateCommands@CMeshGeometry2DMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B910
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CCJ@$0CCK@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D000 (-Marshal@-$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CCJ@$0CCK@@DirectComposition@@QEAA_NPEAPEAVCBatch.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D038 (-Marshal@-$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CCH@$0CCI@@DirectComposition@@QEAA_N.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCF@$0CCG@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D070 (-Marshal@-$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCF@$0CCG@@DirectComposition@@QEAA_N.c)
 */

char __fastcall DirectComposition::CMeshGeometry2DMarshaler::EmitUpdateCommands(
        DirectComposition::CMeshGeometry2DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v2; // rsi
  char v3; // bl
  _DWORD *v6; // rcx
  _DWORD *v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = (_DWORD *)((char *)this + 16);
  v3 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v8 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v8) )
      return v3;
    v6 = v8;
    *v8 = 16;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[3] = 0;
    v6[1] = 548;
    v6[2] = *((_DWORD *)this + 8);
    v6[3] = *((_DWORD *)this + 14);
    *v2 &= ~0x20u;
  }
  if ( (unsigned __int8)DirectComposition::CMarshaledArray<D2D_POINT_3F,1735213892,64,549,550>::Marshal(
                          (char *)this + 64,
                          a2,
                          *((unsigned int *)this + 8),
                          v2)
    && (unsigned __int8)DirectComposition::CMarshaledArray<D2D_POINT_2F,1735213892,128,551,552>::Marshal(
                          (char *)this + 88,
                          a2,
                          *((unsigned int *)this + 8),
                          v2)
    && (unsigned __int8)DirectComposition::CMarshaledArray<int,1735213892,256,553,554>::Marshal(
                          (char *)this + 112,
                          a2,
                          *((unsigned int *)this + 8),
                          v2) )
  {
    return 1;
  }
  return v3;
}
