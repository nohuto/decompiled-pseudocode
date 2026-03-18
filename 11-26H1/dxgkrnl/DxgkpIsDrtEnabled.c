/*
 * XREFs of DxgkpIsDrtEnabled @ 0x14019364C
 * Callers:
 *     DXGGLOBAL_IsDrtEnabled @ 0x140074FB0 (DXGGLOBAL_IsDrtEnabled.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14019275C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?InternalEscapeEnabled@@YAEXZ @ 0x1401948F8 (-InternalEscapeEnabled@@YAEXZ.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x140209BC0 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x140218AC8 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x140387D98 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char DxgkpIsDrtEnabled()
{
  struct DXGPROCESS *Current; // rax
  char result; // al
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int128 v12; // [rsp+80h] [rbp+37h]
  __int128 v13; // [rsp+90h] [rbp+47h]
  int v14; // [rsp+B0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( Current && (*((_DWORD *)Current + 102) & 0x1000) != 0 )
    return 1;
  v14 = 0;
  v2 = 0LL;
  v4 = L"DRTTestEnable";
  v9 = 0LL;
  v10 = 0;
  v5 = &v14;
  v11 = 0LL;
  v7 = &v14;
  v3 = 288;
  v6 = 67108868;
  v8 = 4;
  v12 = 0LL;
  v13 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v2, 0LL, 0LL);
  if ( v14 == 1484026436 )
    return 1;
  WdLogSingleEntry0(4LL);
  result = 0;
  WdLogGlobalForLineNumber = 50;
  return result;
}
