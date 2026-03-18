/*
 * XREFs of ?EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400EB9B4
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400EB6D0 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f34c125a416918fcdef64c54903ef373___ @ 0x1400EB9F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f34c125a416918fcdef64c54903ef37.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateIsCenterHollowCommand(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CNineGridBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x4000) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f34c125a416918fcdef64c54903ef373___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v5;
}
