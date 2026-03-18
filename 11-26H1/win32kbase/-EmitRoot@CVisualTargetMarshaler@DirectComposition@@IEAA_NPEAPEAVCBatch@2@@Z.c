/*
 * XREFs of ?EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401481A8
 * Callers:
 *     ?EmitUpdateCommands@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140148190 (-EmitUpdateCommands@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualTargetMarshaler::EmitRoot(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  char *v5; // rcx
  _QWORD *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
    {
      v5 = (char *)v8;
      *(_DWORD *)v8 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 297;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      if ( !*((_QWORD *)this + 8) )
      {
LABEL_6:
        *((_DWORD *)this + 4) &= ~0x40u;
        return v4;
      }
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
      {
        v6 = v8;
        *(_DWORD *)v8 = 24;
        v6[1] = 0LL;
        v6[2] = 0LL;
        *((_DWORD *)v6 + 1) = 295;
        *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
        *(_QWORD *)((char *)v6 + 12) = *(unsigned int *)(*((_QWORD *)this + 8) + 32LL);
        *((_BYTE *)v6 + 20) = 1;
        goto LABEL_6;
      }
    }
    return 0;
  }
  return v4;
}
