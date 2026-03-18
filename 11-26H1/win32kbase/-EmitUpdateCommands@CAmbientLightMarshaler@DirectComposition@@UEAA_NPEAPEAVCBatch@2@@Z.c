/*
 * XREFs of ?EmitUpdateCommands@CAmbientLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FD80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402316D0 (-EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAmbientLightMarshaler::EmitUpdateCommands(
        DirectComposition::CAmbientLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int v5; // eax
  char *v6; // rcx
  _QWORD *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CLightMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x80u) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
        return v4;
      v6 = (char *)v9;
      *(_DWORD *)v9 = 28;
      *(_OWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 1) = 357;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v6 + 12) = *((_OWORD *)this + 7);
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x100) == 0 )
      return 1;
    v9 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
    {
      v7 = v9;
      *(_DWORD *)v9 = 16;
      v7[1] = 0LL;
      *((_DWORD *)v7 + 1) = 358;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 32);
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v4;
}
