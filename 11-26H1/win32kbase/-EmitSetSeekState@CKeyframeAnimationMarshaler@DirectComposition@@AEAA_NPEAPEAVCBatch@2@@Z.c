/*
 * XREFs of ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14013A680
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140240550 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x4000) == 0 && *((_QWORD *)this + 27) )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 36;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_OWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 1) = 146;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v5 + 12) = *((_QWORD *)this + 27);
      *(_QWORD *)(v5 + 20) = *((_QWORD *)this + 28);
      v5[28] = (*((_BYTE *)this + 320) & 4) == 0;
      *((_DWORD *)this + 4) |= 0x4000u;
      *((_BYTE *)this + 320) |= 4u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
