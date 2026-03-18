/*
 * XREFs of ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140132600
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___ @ 0x1401326D0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f4105.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___ @ 0x14013276C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26f.c)
 *     ?EmitUpdateRefreshRate@CLegacyRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401327F4 (-EmitUpdateRefreshRate@CLegacyRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___ @ 0x140238C30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_b5619dc8aa77fdd80d3011396791c4ac___ @ 0x140238CA4 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_b5619dc8aa77fdd80d30.c)
 *     _lambda_8f70ed48540b237cd810ba2496c500b5_::_lambda_8f70ed48540b237cd810ba2496c500b5_ @ 0x140238CE0 (_lambda_8f70ed48540b237cd810ba2496c500b5_--_lambda_8f70ed48540b237cd810ba2496c500b5_.c)
 */

char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  _QWORD *v6; // rax
  __int64 v7; // r8
  bool v8; // zf
  DirectComposition::CLegacyRenderTargetMarshaler *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v10 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___(
                             this,
                             a2,
                             &v10) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v6 = (_QWORD *)lambda_8f70ed48540b237cd810ba2496c500b5_::_lambda_8f70ed48540b237cd810ba2496c500b5_(&v10, this);
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_b5619dc8aa77fdd80d3011396791c4ac___(
                          this,
                          a2,
                          v7,
                          *v6) )
  {
    v8 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v10 = this;
    if ( !v8 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___(
                               this,
                               a2,
                               &v10) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CLegacyRenderTargetMarshaler::EmitUpdateRefreshRate(this, a2) )
      return 1;
  }
  return v3;
}
