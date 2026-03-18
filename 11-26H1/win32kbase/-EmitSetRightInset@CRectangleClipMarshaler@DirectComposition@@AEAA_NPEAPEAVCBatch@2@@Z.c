/*
 * XREFs of ?EmitSetRightInset@CRectangleClipMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0A04
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0230 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitSetRightInset(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  _QWORD *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x8000) != 0 )
    return 1;
  v3 = 0;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
  {
    v4 = v6;
    *(_DWORD *)v6 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 240;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 26);
    *((_DWORD *)this + 4) |= 0x8000u;
    return 1;
  }
  return v3;
}
