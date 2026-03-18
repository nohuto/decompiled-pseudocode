/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fedf___ @ 0x1400B011C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fed.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba9___ @ 0x1400B0198 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___ @ 0x1400B05E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5c___ @ 0x1400B0674 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___ @ 0x1400B0704 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int v5; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _DWORD *v8; // rbx
  void *v10; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v10 = this;
    if ( (v5 & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fedf___(
                               this,
                               a2,
                               &v10) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x100) == 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v10) )
        return v4;
      v6 = v10;
      *(_DWORD *)v10 = 24;
      v6[1] = 0LL;
      v6[2] = 0LL;
      *((_DWORD *)v6 + 1) = 54;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)v6 + 4) = *((_DWORD *)this + 19);
      *((_DWORD *)v6 + 5) = *((_DWORD *)this + 20);
      *((_DWORD *)this + 4) |= 0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___(
                               this,
                               a2,
                               &v10) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___(
                               this,
                               a2,
                               &v10) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x2000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5c___(
                               this,
                               a2,
                               &v10) )
        return v4;
      *((_DWORD *)this + 4) |= 0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x1000) == 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v7 = v10;
      *(_DWORD *)v10 = 16;
      v7[1] = 0LL;
      *((_DWORD *)v7 + 1) = 57;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 33);
      *((_DWORD *)this + 4) |= 0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x4000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba9___(
                               this,
                               a2,
                               &v10) )
        return v4;
      *((_DWORD *)this + 4) |= 0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x8000) != 0 )
      return 1;
    v10 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v10) )
    {
      v8 = (char *)v10 + 4;
      *(_DWORD *)v10 = 76;
      memset(v8, 0, 0x48uLL);
      *v8 = 60;
      v8[1] = *((_DWORD *)this + 8);
      *(_OWORD *)(v8 + 2) = *(_OWORD *)((char *)this + 148);
      *(_OWORD *)(v8 + 6) = *(_OWORD *)((char *)this + 164);
      *(_OWORD *)(v8 + 10) = *(_OWORD *)((char *)this + 180);
      *(_OWORD *)(v8 + 14) = *(_OWORD *)((char *)this + 196);
      *((_DWORD *)this + 4) |= 0x8000u;
      return 1;
    }
  }
  return v4;
}
