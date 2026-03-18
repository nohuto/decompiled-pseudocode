/*
 * XREFs of ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140171F30
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b5___ @ 0x140172008 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b.c)
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401720C4 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a82577___ @ 0x1401721A0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a8257.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f195___ @ 0x1402430D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f19.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648c___ @ 0x140243154 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648.c)
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CDDisplayRenderTargetMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CDDisplayRenderTargetMarshaler::EmitCreate(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f195___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f70ed48540b237cd810ba2496c500b5___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648c___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b11cd57fccd7d88fd09eec2ee5a82577___(
                               this,
                               a2) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    return 1;
  }
  return v4;
}
