/*
 * XREFs of ?EmitSetIsConstrainedBySizeCommand@CCaptureControllerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A3B64
 * Callers:
 *     ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402301A0 (-EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::EmitSetIsConstrainedBySizeCommand(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 16;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 1) = 381;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *((_BYTE *)v3 + 12) = *((_BYTE *)this + 88);
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return 0;
}
