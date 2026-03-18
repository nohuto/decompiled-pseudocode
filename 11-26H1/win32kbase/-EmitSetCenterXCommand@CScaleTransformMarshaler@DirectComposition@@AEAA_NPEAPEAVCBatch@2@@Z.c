/*
 * XREFs of ?EmitSetCenterXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140152EFC
 * Callers:
 *     ?EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140152E10 (-EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CScaleTransformMarshaler::EmitSetCenterXCommand(
        DirectComposition::CScaleTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = v5;
    *(_DWORD *)v5 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 609;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return 0;
}
