/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1402DDDC0
 * Callers:
 *     BmlCompareTargetModes @ 0x1402DDBA4 (BmlCompareTargetModes.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1400503A8 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x14006297C (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DEF28 (BmlCompareRegionsWithPivot.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DFF14 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x140379F18 (BmlDoesTargetModeSupportWireFormat.c)
 *     ??$BmlCompareValues@_N@@YA?AW4BML_COMPARISON_RESULT@@_N0@Z @ 0x1403D1024 (--$BmlCompareValues@_N@@YA-AW4BML_COMPARISON_RESULT@@_N0@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1404220A0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // r13
  __int64 v9; // rsi
  char DoesTargetModeSupportWireFormat; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool refreshed; // di
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // r8
  char v19; // r8
  bool v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // edx
  struct _D3DDDI_RATIONAL v29; // rax
  int v30; // ecx
  struct _D3DDDI_RATIONAL v31; // rax
  int v32; // ecx
  int v33; // ecx
  unsigned int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // edi
  unsigned int v37; // ebx
  unsigned int v38; // eax
  unsigned int v39; // eax
  struct _D3DDDI_RATIONAL v40; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DDDI_RATIONAL v41; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v9 = *(_QWORD *)(120LL * a2 + a1 + 16);
  if ( (*(_BYTE *)v9 & 1) == 0
    || (v4 = BmlCompareRegionsWithPivot(
               (struct _D3DKMDT_2DREGION *)(a3 + 84),
               (struct _D3DKMDT_2DREGION *)(a4 + 84),
               (struct _D3DKMDT_2DREGION *)(v9 + 44))) == 0 )
  {
    if ( (*(_DWORD *)v9 & 0x1000000) == 0 || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v9 + 224)) )
      goto LABEL_40;
    refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                  (DMMVIDPNTARGETMODE *)a3,
                  (const struct _D3DDDI_RATIONAL *)(v9 + 224),
                  *(_DWORD *)(v9 + 240));
    v15 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
            (DMMVIDPNTARGETMODE *)a4,
            (const struct _D3DDDI_RATIONAL *)(v9 + 224),
            *(_DWORD *)(v9 + 240));
    v18 = v15;
    if ( !refreshed && !v15 && *(_DWORD *)(v9 + 240) != 1 )
    {
      refreshed = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
                    (DMMVIDPNTARGETMODE *)a3,
                    (const struct _D3DDDI_RATIONAL *)(v9 + 224),
                    1u);
      v18 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(
              (DMMVIDPNTARGETMODE *)a4,
              (const struct _D3DDDI_RATIONAL *)(v9 + 224),
              1u);
    }
    LOBYTE(v16) = v18;
    LOBYTE(v17) = refreshed;
    v4 = BmlCompareValues<bool>(v17, v16);
    if ( !v4
      && (refreshed
       || v19
       || (v4 = BmlCompareTargetModeWithVirtualRefreshRate(
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72),
                  (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72))) == 0) )
    {
LABEL_40:
      if ( (*(_BYTE *)v9 & 2) == 0
        || !*(_DWORD *)(v9 + 56)
        || !*(_DWORD *)(v9 + 52)
        || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
        || IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a4 + 92)) )
      {
        goto LABEL_41;
      }
      v28 = *(_DWORD *)(a3 + 120);
      v29 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
      v41 = v29;
      v30 = (v28 >> 3) & 0x3F;
      if ( v30 )
        v41.Denominator = v30 * v29.Denominator;
      v31 = *(struct _D3DDDI_RATIONAL *)(a4 + 92);
      v32 = *(_DWORD *)(a4 + 120) >> 3;
      v40 = v31;
      v33 = v32 & 0x3F;
      if ( v33 )
        v40.Denominator = v33 * v31.Denominator;
      v34 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(v28 << 29) >> 29),
              0LL);
      v35 = DmmMapVSyncFromRationalToInteger(
              &v41,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
              0LL);
      v36 = DIFF<unsigned int>(v35, v34);
      v37 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)(v9 + 52),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v38 = DmmMapVSyncFromRationalToInteger(
              &v40,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
              0LL);
      v39 = DIFF<unsigned int>(v38, v37);
      v4 = BmlCompareValues<unsigned int>(v39, v36);
      if ( !v4 )
      {
        if ( ((*(_DWORD *)(v9 + 80) >> 3) & 0x3F) == 0 )
          goto LABEL_41;
        v23 = (*(_DWORD *)(a3 + 120) >> 3) & 0x3F;
        if ( !v23 )
          v23 = 1;
        DIFF<unsigned int>(v23, (*(_DWORD *)(v9 + 80) >> 3) & 0x3F);
        v26 = DIFF<unsigned int>(v25, v24);
        v4 = BmlCompareValues<unsigned int>(v26, v27);
        if ( !v4 )
        {
LABEL_41:
          if ( (*(_DWORD *)v9 & 0x1000000) != 0
            || (*(_DWORD *)(120 * v5 + a1 + 128) & 1) == 0
            || (v20 = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3),
                LOBYTE(v21) = DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a4),
                LOBYTE(v22) = v20,
                (v4 = BmlCompareValues<bool>(v22, v21)) == 0) )
          {
            if ( (*(_BYTE *)v9 & 8) != 0 )
            {
              DoesTargetModeSupportWireFormat = BmlDoesTargetModeSupportWireFormat(a3, *(unsigned int *)(v9 + 204));
              LOBYTE(v11) = BmlDoesTargetModeSupportWireFormat(a4, *(unsigned int *)(v9 + 204));
              LOBYTE(v12) = DoesTargetModeSupportWireFormat;
              return (unsigned int)BmlCompareValues<bool>(v12, v11);
            }
          }
        }
      }
    }
  }
  return v4;
}
