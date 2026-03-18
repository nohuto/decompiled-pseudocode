/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D85A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToSetFlag__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___ @ 0x1400D8728 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToSetFlag__lambda_bae9fe91ffe7d2a32ffd5f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5dc89212d77cc2b3abfa0526dfd9dff5___ @ 0x1400D87DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5dc89212d77cc2b3abfa0526dfd9dff.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fedf___ @ 0x1400D8864 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fed.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba9___ @ 0x1400D88DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_100444f1bbe895c3caf8fab599ba1503___ @ 0x1400D896C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_100444f1bbe895c3caf8fab599ba150.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___ @ 0x1400D89E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5c___ @ 0x1400D8A68 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___ @ 0x1400D8AF4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // r8
  char v5; // di
  int v6; // eax
  DirectComposition::CComponentTransform3DMarshaler *v8; // [rsp+50h] [rbp+30h] BYREF

  v5 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v6 & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fedf___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x100u;
      v6 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v6 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5dc89212d77cc2b3abfa0526dfd9dff5___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x80u;
      v6 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v6 & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x200u;
      v6 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v6 & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x400u;
      v6 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v6 & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5c___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x1000u;
      v6 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v6 & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_100444f1bbe895c3caf8fab599ba1503___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x800u;
      v6 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v6 & 0x2000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba9___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x2000u;
    }
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommandToSetFlag__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___(
                            this,
                            a2,
                            v4,
                            this) )
      return 1;
  }
  return v5;
}
