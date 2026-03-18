/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140131900
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad63447384___ @ 0x140131AA4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad6344738.c)
 *     ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131B2C (-EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131C44 (-EmitClearReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitMaxOpacity@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131CB8 (-EmitMaxOpacity@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf5___ @ 0x140131D30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___ @ 0x140131DA4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da99071.c)
 *     ?EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131E18 (-EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140131E88 (-EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___ @ 0x14023C024 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6a___ @ 0x14023C098 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25eea___ @ 0x14023C10C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25ee.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  DirectComposition::CProjectedShadowSceneMarshaler *v8; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitClearCasters(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitClearReceivers(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddCasters(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6a___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25eea___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    if ( DirectComposition::CProjectedShadowSceneMarshaler::EmitMaxOpacity(this, a2) )
    {
      v6 = *((_DWORD *)this + 4);
      v8 = this;
      if ( (v6 & 0x4000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf5___(
                                 this,
                                 a2,
                                 &v8) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x4000u;
        v6 = *((_DWORD *)this + 4);
      }
      v8 = this;
      if ( (v6 & 0x8000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___(
                                 this,
                                 a2,
                                 &v8) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x8000u;
        v6 = *((_DWORD *)this + 4);
      }
      v8 = this;
      if ( (v6 & 0x100) == 0 )
        return 1;
      if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad63447384___(
                              this,
                              a2,
                              &v8) )
      {
        *((_DWORD *)this + 4) &= ~0x100u;
        return 1;
      }
    }
  }
  return v4;
}
