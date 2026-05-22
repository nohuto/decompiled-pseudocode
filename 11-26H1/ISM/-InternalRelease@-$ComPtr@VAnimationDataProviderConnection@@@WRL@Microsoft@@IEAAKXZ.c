/*
 * XREFs of ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180095BAC
 * Callers:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ @ 0x180043740 (-RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x180102418 (--1AnimationDataProvider@@UEAA@XZ.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180088FE0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  __int64 result; // rax
  Microsoft::Bamo::BaseBamoConnection *v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v2);
  }
  return result;
}
