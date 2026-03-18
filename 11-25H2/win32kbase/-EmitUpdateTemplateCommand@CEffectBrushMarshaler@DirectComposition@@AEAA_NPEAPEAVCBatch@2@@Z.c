/*
 * XREFs of ?EmitUpdateTemplateCommand@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401064C4
 * Callers:
 *     ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140106450 (-EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectBrushMarshaler::EmitUpdateTemplateCommand(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // ebx
  char *v4; // rcx
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
  {
LABEL_6:
    LOBYTE(v3) = 1;
    return v3;
  }
  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
  {
    v4 = (char *)v7;
    *(_DWORD *)v7 = 20;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 122;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
    {
      *((_DWORD *)v4 + 3) = *(_DWORD *)(v5 + 32);
      v3 = *(_DWORD *)(*((_QWORD *)this + 9) + 80LL);
    }
    else
    {
      *((_DWORD *)v4 + 3) = 0;
    }
    *((_DWORD *)v4 + 4) = v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    goto LABEL_6;
  }
  return v3;
}
