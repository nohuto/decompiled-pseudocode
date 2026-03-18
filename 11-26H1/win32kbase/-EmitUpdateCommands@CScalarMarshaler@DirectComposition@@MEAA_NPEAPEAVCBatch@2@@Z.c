/*
 * XREFs of ?EmitUpdateCommands@CScalarMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023F570
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CScalarMarshaler::EmitUpdateCommands(
        DirectComposition::CScalarMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
    return 0;
  v3 = v5;
  *(_DWORD *)v5 = 16;
  v3[1] = 0LL;
  *((_DWORD *)v3 + 1) = 261;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 14);
  return 1;
}
