/*
 * XREFs of ?SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z @ 0x1401CCB4C
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1401CDE60 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1401CE0F0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetScaleFactorOverride(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        struct _DPI_INFORMATION *a4)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, _QWORD, struct _DPI_INFORMATION *))(DxgkWin32kInterface + 608))(
           a1,
           a2,
           a3,
           a4);
}
