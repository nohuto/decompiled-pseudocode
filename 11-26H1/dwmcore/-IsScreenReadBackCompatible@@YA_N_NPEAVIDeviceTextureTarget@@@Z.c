/*
 * XREFs of ?IsScreenReadBackCompatible@@YA_N_NPEAVIDeviceTextureTarget@@@Z @ 0x180184E00
 * Callers:
 *     ?IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x1801AC36C (-IsUsableOnTargetWithHDRBoost@CBlurredBackdropCache@@CA_NAEBVCDrawListBitmap@@AEBVRenderTargetIn.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall IsScreenReadBackCompatible(char a1, struct IDeviceTextureTarget *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)a2;
  if ( a1 )
    return (*(unsigned __int8 (__fastcall **)(struct IDeviceTextureTarget *))(v2 + 160))(a2) == 0;
  else
    return (*(unsigned __int8 (__fastcall **)(struct IDeviceTextureTarget *))(v2 + 176))(a2) == 0;
}
