/*
 * XREFs of ?swap@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAXAEAV12@@Z @ 0x18021EFF0
 * Callers:
 *     ??$swap@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0@Z @ 0x18021EFE4 (--$swap@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@$0A@@std@@YAXAEAV-$unique_ptr@VC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<CCheckMPOCache>::swap(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = *a2;
  v3 = *a1;
  *a1 = *a2;
  *a2 = v3;
  return result;
}
