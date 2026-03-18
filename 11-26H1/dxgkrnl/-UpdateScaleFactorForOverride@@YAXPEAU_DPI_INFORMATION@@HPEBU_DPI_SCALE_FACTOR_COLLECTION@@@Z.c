/*
 * XREFs of ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140078720
 * Callers:
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1401D4DE0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x14006C024 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall UpdateScaleFactorForOverride(
        struct _DPI_INFORMATION *a1,
        unsigned int a2,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a3)
{
  struct _DPI_SCALE_FACTOR_COLLECTION *v5; // [rsp+20h] [rbp-18h]

  LODWORD(v5) = 1;
  *((_DWORD *)a1 + 2) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                          (DpiInternal *)*((unsigned int *)a1 + 3),
                          *((_QWORD *)a1 + 4),
                          (struct tagSIZE)a3,
                          (const struct _DPI_SCALE_FACTOR_COLLECTION *)a2,
                          v5);
  *((_DWORD *)a1 + 21) = a2;
}
