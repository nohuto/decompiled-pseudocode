/*
 * XREFs of ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140137760
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484def___ @ 0x140137920 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484de.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bf15618fbaad4d23893fd555b605b03c___ @ 0x1401379A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bf15618fbaad4d23893fd555b605b03.c)
 *     ?EmitGeometry@CSpriteShapeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140137A20 (-EmitGeometry@CSpriteShapeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___ @ 0x140137A9C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_df232ff61ccf1a0a0c16d6761a3443fd___ @ 0x140137B34 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_df232ff61ccf1a0a0c16d6761a3443f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4cf___ @ 0x140137BB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e308___ @ 0x140137C28 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e30.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e5493___ @ 0x140137C9C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e549.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___ @ 0x140137D10 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_00feaf9a6ba7eb95bd6cc16e734c5da4___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x14023E514 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_00feaf9a6ba7eb95bd6cc16e734c5da.c)
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  __int64 v7; // r9
  DirectComposition::CSpriteShapeMarshaler *v9; // [rsp+40h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v9 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_504b2e656b0331c347eaff34b8484def___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bf15618fbaad4d23893fd555b605b03c___(
                             this,
                             a2,
                             &v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( DirectComposition::CSpriteShapeMarshaler::EmitGeometry(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_df232ff61ccf1a0a0c16d6761a3443fd___(
                               this,
                               a2,
                               &v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x200u;
      v6 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v6 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___(
                               this,
                               a2,
                               &v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x400u;
      v6 = *((_DWORD *)this + 4);
    }
    v7 = *((unsigned int *)this + 24);
    v9 = this;
    if ( (v6 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_00feaf9a6ba7eb95bd6cc16e734c5da4___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
                               this,
                               a2,
                               (char *)this + 100,
                               v7) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x800u;
      v6 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v6 & 0x1000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e5493___(
                               this,
                               a2,
                               &v9,
                               v7) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v6 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v6 & 0x2000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4cf___(
                               this,
                               a2,
                               &v9,
                               v7) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v6 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v6 & 0x4000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e308___(
                               this,
                               a2,
                               &v9,
                               v7) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v6 = *((_DWORD *)this + 4);
    }
    v9 = this;
    if ( (v6 & 0x8000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___(
                               this,
                               a2,
                               &v9,
                               v7) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x8000u;
    }
    return 1;
  }
  return v3;
}
