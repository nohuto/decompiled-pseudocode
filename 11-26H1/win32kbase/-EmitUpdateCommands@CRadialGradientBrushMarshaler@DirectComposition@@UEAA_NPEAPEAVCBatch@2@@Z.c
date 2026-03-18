/*
 * XREFs of ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A90
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C3730 (-EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRadialGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CRadialGradientBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x400) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v10) )
        return v4;
      v6 = (char *)v10;
      *(_DWORD *)v10 = 20;
      *(_OWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 588;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 13);
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x800) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v10) )
        return v4;
      v7 = (char *)v10;
      *(_DWORD *)v10 = 20;
      *(_OWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 589;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 14);
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x1000) == 0 )
      return 1;
    v10 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v10) )
    {
      v8 = (char *)v10;
      *(_DWORD *)v10 = 20;
      *(_OWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 1) = 590;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v8 + 12) = *((_QWORD *)this + 15);
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
