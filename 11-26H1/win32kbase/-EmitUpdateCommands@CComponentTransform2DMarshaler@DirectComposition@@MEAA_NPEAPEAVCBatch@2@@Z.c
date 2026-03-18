/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B03F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScale@CComponentTransform2DMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B0818 (-EmitSetScale@CComponentTransform2DMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1dc___ @ 0x1400B0894 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1d.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  char *v5; // rsi
  int v6; // eax
  char *v7; // rcx
  char *v8; // r15
  char *v9; // rcx
  char *v10; // r15
  _QWORD *v11; // rcx
  char *v12; // rcx
  void *v14; // [rsp+60h] [rbp+40h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (char *)this + 16;
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x200) == 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v14) )
        return v4;
      v7 = (char *)v14;
      *(_DWORD *)v14 = 20;
      *(_OWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 47;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)v7 + 4) = *((_DWORD *)this + 19);
      *(_DWORD *)v5 |= 0x200u;
      v6 = *(_DWORD *)v5;
      v5 = (char *)this + 16;
    }
    v8 = v5;
    if ( (v6 & 0x100) == 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v14) )
        return v4;
      v9 = (char *)v14;
      v8 = (char *)this + 16;
      *(_DWORD *)v14 = 20;
      *(_OWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 1) = 48;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 20);
      *((_DWORD *)v9 + 4) = *((_DWORD *)this + 21);
      *(_DWORD *)v5 |= 0x100u;
      v6 = *(_DWORD *)v5;
    }
    v14 = this;
    if ( (v6 & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1dc___(
                               this,
                               a2,
                               &v14) )
        return v4;
      *(_DWORD *)v5 |= 0x400u;
      v6 = *(_DWORD *)v5;
      v5 = v8;
    }
    v10 = v5;
    if ( (v6 & 0x800) == 0 )
    {
      v14 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v14) )
        return v4;
      v11 = v14;
      *(_DWORD *)v14 = 16;
      v10 = (char *)this + 16;
      v11[1] = 0LL;
      *((_DWORD *)v11 + 1) = 50;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v11 + 3) = *((_DWORD *)this + 24);
      *(_DWORD *)v5 |= 0x800u;
    }
    if ( DirectComposition::CComponentTransform2DMarshaler::EmitSetScale(this, (struct DirectComposition::CBatch **)a2) )
    {
      if ( (*(_DWORD *)v5 & 0x2000) != 0 )
        return 1;
      v14 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v14) )
      {
        v12 = (char *)v14;
        *(_DWORD *)v14 = 36;
        *(_OWORD *)(v12 + 4) = 0LL;
        *(_OWORD *)(v12 + 20) = 0LL;
        *((_DWORD *)v12 + 1) = 52;
        *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
        *(_OWORD *)(v12 + 12) = *(_OWORD *)((char *)this + 108);
        *(_QWORD *)(v12 + 28) = *(_QWORD *)((char *)this + 124);
        *(_DWORD *)v10 |= 0x2000u;
        return 1;
      }
    }
  }
  return v4;
}
