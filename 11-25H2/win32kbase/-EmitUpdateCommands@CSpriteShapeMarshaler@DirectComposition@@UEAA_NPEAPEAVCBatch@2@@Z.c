/*
 * XREFs of ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F54B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bf15618fbaad4d23893fd555b605b03c___ @ 0x1400F56C4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bf15618fbaad4d23893fd555b605b03.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5ce2fe6f990ac47f2725c8575fa29775___ @ 0x1400F5748 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5ce2fe6f990ac47f2725c8575fa2977.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___ @ 0x1400F57CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_df232ff61ccf1a0a0c16d6761a3443fd___ @ 0x1400F5860 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_df232ff61ccf1a0a0c16d6761a3443f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e308___ @ 0x1400F58E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e30.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4cf___ @ 0x1400F5958 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e5493___ @ 0x1400F59CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e549.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___ @ 0x1400F5A40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x14015A614 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91a.c)
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r9
  void *v11; // [rsp+40h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
      return v3;
    v6 = (char *)v11;
    *(_DWORD *)v11 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 368;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    *((_DWORD *)v6 + 3) = v8;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bf15618fbaad4d23893fd555b605b03c___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5ce2fe6f990ac47f2725c8575fa29775___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_df232ff61ccf1a0a0c16d6761a3443fd___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d25a963956e1670a7cfd33afd3cf0b1e___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = *((unsigned int *)this + 24);
  v11 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
                             this,
                             a2,
                             (char *)this + 100,
                             v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ecc0cdef9f9f524bc0c2351e4f1e5493___(
                             this,
                             a2,
                             &v11,
                             v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x1000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_646288f05bee1401ea06992b48c2c4cf___(
                             this,
                             a2,
                             &v11,
                             v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x2000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ab9db7d951295de9dd6a16f6853e308___(
                             this,
                             a2,
                             &v11,
                             v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  v11 = this;
  if ( (v2 & 0x4000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___(
                             this,
                             a2,
                             &v11,
                             v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x4000u;
  }
  return 1;
}
