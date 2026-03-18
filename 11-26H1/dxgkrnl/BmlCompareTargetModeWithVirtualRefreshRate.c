/*
 * XREFs of BmlCompareTargetModeWithVirtualRefreshRate @ 0x1404220A0
 * Callers:
 *     BmlCompareTargetModes @ 0x1402DDBA4 (BmlCompareTargetModes.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DDDC0 (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1400503A8 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x14006297C (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DFF14 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1403BACAC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall BmlCompareTargetModeWithVirtualRefreshRate(
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1,
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        __int64 a3)
{
  const struct _D3DDDI_RATIONAL *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  struct _D3DDDI_RATIONAL v13; // [rsp+50h] [rbp+18h] BYREF
  struct _D3DDDI_RATIONAL v14; // [rsp+58h] [rbp+20h] BYREF

  if ( (*(_QWORD *)a3 & 0x1000000LL) == 0 )
    return 0LL;
  if ( (*(_QWORD *)a3 & 2) != 0 )
    return 0LL;
  v5 = (const struct _D3DDDI_RATIONAL *)(a3 + 224);
  if ( IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 224)) )
    return 0LL;
  v13 = 0LL;
  DmmCalculatePresentationVSync(a1, &v13);
  v14 = 0LL;
  DmmCalculatePresentationVSync(a2, &v14);
  v6 = DmmMapVSyncFromRationalToInteger(
         v5,
         (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
         0LL);
  v7 = DmmMapVSyncFromRationalToInteger(
         &v13,
         (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
         0LL);
  v8 = DIFF<unsigned int>(v7, v6);
  v9 = DmmMapVSyncFromRationalToInteger(
         v5,
         (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29),
         0LL);
  v10 = DmmMapVSyncFromRationalToInteger(
          &v14,
          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29),
          0LL);
  v11 = DIFF<unsigned int>(v10, v9);
  return BmlCompareValues<unsigned int>(v11, v8);
}
