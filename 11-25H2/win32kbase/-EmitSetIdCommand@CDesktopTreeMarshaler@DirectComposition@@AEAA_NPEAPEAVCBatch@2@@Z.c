/*
 * XREFs of ?EmitSetIdCommand@CDesktopTreeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14014502C
 * Callers:
 *     ?EmitUpdateCommands@CDesktopTreeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140144FE0 (-EmitUpdateCommands@CDesktopTreeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDesktopTreeMarshaler::EmitSetIdCommand(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 20;
    *(_OWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 1) = 506;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v3 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return 0;
}
