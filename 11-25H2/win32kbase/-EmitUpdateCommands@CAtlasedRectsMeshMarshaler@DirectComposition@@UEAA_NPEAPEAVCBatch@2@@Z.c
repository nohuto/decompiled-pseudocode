/*
 * XREFs of ?EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A990
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BNP@$0BOA@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D0A8 (-Marshal@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BNP@$0BOA@@DirectComposition@@QEAA_NP.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D0E0 (-Marshal@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BNN@$0BNO@@DirectComposition@@QEAA_NPE.c)
 */

char __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  int *v3; // rsi
  int v4; // eax
  char *v7; // rcx
  char *v8; // rcx
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (int *)((char *)this + 16);
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x20) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return v2;
    v7 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 475;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    v7[12] = *((_BYTE *)this + 56);
    *v3 &= ~0x20u;
    v4 = *v3;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return v2;
    v8 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 476;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v8 + 3) = *((_DWORD *)this + 15);
    *v3 &= ~0x40u;
  }
  if ( (unsigned __int8)DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,128,477,478>::Marshal(
                          (char *)this + 64,
                          a2,
                          *((unsigned int *)this + 8),
                          v3)
    && (unsigned __int8)DirectComposition::CMarshaledArray<D2D_RECT_F,811680580,256,479,480>::Marshal(
                          (char *)this + 88,
                          a2,
                          *((unsigned int *)this + 8),
                          v3) )
  {
    return 1;
  }
  return v2;
}
