/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E8540
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c739___ @ 0x1400E86DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c73.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c1___ @ 0x1400E8754 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___ @ 0x1400E87CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___ @ 0x1400E8844 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  void *v9; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c739___(
                               this,
                               a2,
                               &v9) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___(
                               this,
                               a2,
                               &v9) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) == 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
        return v4;
      v6 = (char *)v9;
      *(_DWORD *)v9 = 20;
      *(_OWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 55;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 22);
      *((_DWORD *)v6 + 4) = *((_DWORD *)this + 23);
      *((_DWORD *)this + 4) |= 0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x400) == 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
        return v4;
      v7 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 56;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 24);
      *((_DWORD *)this + 4) |= 0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v5 & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c1___(
                               this,
                               a2,
                               &v9) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v5 & 0x1000) != 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___(
                            this,
                            a2,
                            &v9) )
    {
      *((_DWORD *)this + 4) |= 0x1000u;
      return 1;
    }
  }
  return v4;
}
