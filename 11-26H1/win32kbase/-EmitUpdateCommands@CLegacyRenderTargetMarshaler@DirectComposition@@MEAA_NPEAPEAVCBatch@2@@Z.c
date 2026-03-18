/*
 * XREFs of ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401665E0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5619dc8aa77fdd80d3011396791c4ac___ @ 0x1401666CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b5619dc8aa77fdd80d3011396791c4a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___ @ 0x140166788 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f4105.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___ @ 0x140166828 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a82577___ @ 0x1401721A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a8257.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___ @ 0x1402429F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca4.c)
 */

char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CLegacyRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5619dc8aa77fdd80d3011396791c4ac___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a82577___(
                             this,
                             a2) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  return 1;
}
