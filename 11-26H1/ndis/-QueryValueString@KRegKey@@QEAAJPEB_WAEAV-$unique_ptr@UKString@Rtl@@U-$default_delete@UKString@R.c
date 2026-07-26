/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A190
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ndisEtwCaptureMiniportDriverData @ 0x140098584 (ndisEtwCaptureMiniportDriverData.c)
 *     GetModuleParameters @ 0x14014829C (GetModuleParameters.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x14014B820 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014FFB0 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1401919DC (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A220 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

__int64 __fastcall KRegKey::QueryValueString(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  int v6; // ecx
  __int16 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueString(a1, &v9, a3);
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = -1073741811;
  if ( v4 )
  {
    v6 = 0;
    v7 = 2 * v4;
    *((_QWORD *)&v9 + 1) = a2;
    LOWORD(v9) = -2 - v7;
    WORD1(v9) = -v7;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  else
    return KRegKey::QueryValueString(a1, &v9, a3);
}
