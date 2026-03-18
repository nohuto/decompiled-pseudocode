/*
 * XREFs of ?EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140233580
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTurbulenceEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CTurbulenceEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  void *v14; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x400) != 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v14) )
        return v4;
      v6 = (char *)v14;
      *(_DWORD *)v14 = 20;
      *(_OWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 731;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 32);
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x800) != 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v14) )
        return v4;
      v7 = (char *)v14;
      *(_DWORD *)v14 = 20;
      *(_OWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 732;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 33);
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x1000) != 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v14) )
        return v4;
      v8 = (char *)v14;
      *(_DWORD *)v14 = 20;
      *(_OWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 1) = 733;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v8 + 12) = *((_QWORD *)this + 34);
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x2000) != 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
        return v4;
      v9 = v14;
      *(_DWORD *)v14 = 16;
      v9[1] = 0LL;
      *((_DWORD *)v9 + 1) = 734;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 70);
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x4000) != 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
        return v4;
      v10 = v14;
      *(_DWORD *)v14 = 16;
      v10[1] = 0LL;
      *((_DWORD *)v10 + 1) = 735;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v10 + 3) = *((_DWORD *)this + 71);
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x8000) != 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
        return v4;
      v11 = v14;
      *(_DWORD *)v14 = 16;
      v11[1] = 0LL;
      *((_DWORD *)v11 + 1) = 736;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v11 + 3) = *((_DWORD *)this + 72);
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x10000) == 0 )
      return 1;
    v14 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
    {
      v12 = v14;
      *(_DWORD *)v14 = 16;
      v12[1] = 0LL;
      *((_DWORD *)v12 + 1) = 737;
      *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v12 + 3) = *((_DWORD *)this + 73);
      *((_DWORD *)this + 4) &= ~0x10000u;
      return 1;
    }
  }
  return v4;
}
