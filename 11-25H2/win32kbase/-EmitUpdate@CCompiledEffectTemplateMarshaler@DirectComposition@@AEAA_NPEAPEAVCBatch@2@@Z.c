/*
 * XREFs of ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14011E4DC
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14011E490 (-EmitUpdateCommands@CCompiledEffectTemplateMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::EmitUpdate(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v2; // rbx
  char *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_DWORD *)((char *)this + 16);
  if ( !*((_QWORD *)this + 8) )
    *v2 |= 0x40u;
  if ( (*v2 & 0x40) != 0 )
    return 1;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 24;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 1) = 52;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 8) + 32LL);
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 18);
    *((_DWORD *)v4 + 5) = *((_DWORD *)this + 19);
    *v2 |= 0x40u;
    return 1;
  }
  return 0;
}
