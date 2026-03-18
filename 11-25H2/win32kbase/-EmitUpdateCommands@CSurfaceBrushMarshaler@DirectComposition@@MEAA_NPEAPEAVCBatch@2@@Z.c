/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D6440
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50d___ @ 0x1400D66E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_25ac4bef281f174ffdf55b86eb4579a1___ @ 0x1400D6758 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_25ac4bef281f174ffdf55b86eb4579a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc71___ @ 0x1400D67DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a3e89275a4185d5f8da85e7fddd1ae5b___ @ 0x140234F04 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a3e89275a4185d5f8da85e7fddd1ae5.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  char *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  char *v9; // rcx
  char *v10; // rcx
  char *v11; // rcx
  int v13; // ecx
  int v14; // eax
  void *v15; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v15) )
      return v3;
    v6 = (char *)v15;
    *(_DWORD *)v15 = 52;
    *(_OWORD *)(v6 + 4) = 0LL;
    *(_OWORD *)(v6 + 20) = 0LL;
    *(_OWORD *)(v6 + 36) = 0LL;
    *((_DWORD *)v6 + 1) = 364;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    *((_DWORD *)v6 + 3) = v8;
    *((_OWORD *)v6 + 1) = *(_OWORD *)((char *)this + 88);
    v6[48] = *((_BYTE *)this + 138);
    if ( *((_BYTE *)this + 138) )
    {
      if ( *((_BYTE *)this + 139) )
      {
        *((_OWORD *)v6 + 2) = *(_OWORD *)((char *)this + 104);
        v13 = *((_DWORD *)this + 23);
        v14 = *((_DWORD *)this + 22);
        *((_DWORD *)v6 + 8) += v14;
        *((_DWORD *)v6 + 10) += v14;
        *((_DWORD *)v6 + 11) += v13;
        *((_DWORD *)v6 + 9) += v13;
      }
      else
      {
        *((_OWORD *)v6 + 2) = *(_OWORD *)((char *)this + 88);
      }
      *((_BYTE *)this + 139) = 1;
      *(_OWORD *)((char *)this + 104) = 0LL;
    }
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v15 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_25ac4bef281f174ffdf55b86eb4579a1___(
                             this,
                             a2,
                             &v15) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v15) )
      return v3;
    v9 = (char *)v15;
    *(_DWORD *)v15 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 359;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 30);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v15) )
      return v3;
    v10 = (char *)v15;
    *(_DWORD *)v15 = 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 366;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v10 + 3) = *((_DWORD *)this + 31);
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v15) )
      return v3;
    v11 = (char *)v15;
    *(_DWORD *)v15 = 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 362;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 32);
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v15 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc71___(
                             this,
                             a2,
                             &v15) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v15 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50d___(
                             this,
                             a2,
                             &v15) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  v15 = this;
  if ( (v2 & 0x1000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a3e89275a4185d5f8da85e7fddd1ae5b___(
                             this,
                             a2,
                             &v15) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  return 1;
}
