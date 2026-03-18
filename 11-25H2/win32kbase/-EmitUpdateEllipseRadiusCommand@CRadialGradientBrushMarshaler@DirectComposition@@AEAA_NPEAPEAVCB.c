/*
 * XREFs of ?EmitUpdateEllipseRadiusCommand@CRadialGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F612C
 * Callers:
 *     ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F5B40 (-EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRadialGradientBrushMarshaler::EmitUpdateEllipseRadiusCommand(
        DirectComposition::CRadialGradientBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    return 1;
  v3 = 0;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 20;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 305;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v4 + 12) = *((_QWORD *)this + 15);
    *((_DWORD *)this + 4) &= ~0x800u;
    return 1;
  }
  return v3;
}
