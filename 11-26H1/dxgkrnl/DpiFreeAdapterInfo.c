/*
 * XREFs of DpiFreeAdapterInfo @ 0x140238878
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x140194C6C (DxgkFreeUnicodeString.c)
 */

void __fastcall DpiFreeAdapterInfo(_BYTE *a1)
{
  if ( *a1 )
  {
    DxgkFreeUnicodeString((__int64)(a1 + 8));
    DxgkFreeUnicodeString((__int64)(a1 + 24));
    DxgkFreeUnicodeString((__int64)(a1 + 48));
    DxgkFreeUnicodeString((__int64)(a1 + 80));
    DxgkFreeUnicodeString((__int64)(a1 + 96));
    DxgkFreeUnicodeString((__int64)(a1 + 64));
    DxgkFreeUnicodeString((__int64)(a1 + 192));
    DxgkFreeUnicodeString((__int64)(a1 + 208));
    DxgkFreeUnicodeString((__int64)(a1 + 128));
    DxgkFreeUnicodeString((__int64)(a1 + 152));
    DxgkFreeUnicodeString((__int64)(a1 + 224));
    DxgkFreeUnicodeString((__int64)(a1 + 240));
    DxgkFreeUnicodeString((__int64)(a1 + 280));
    DxgkFreeUnicodeString((__int64)(a1 + 296));
  }
}
