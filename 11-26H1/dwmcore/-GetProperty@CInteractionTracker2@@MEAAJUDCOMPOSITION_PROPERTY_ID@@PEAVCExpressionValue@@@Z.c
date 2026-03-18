/*
 * XREFs of ?GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180273960
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801C0E10 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasImpulse@CInteractionTracker2@@QEBA_NXZ @ 0x1801D95BC (-HasImpulse@CInteractionTracker2@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801DB744 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180273824 (-GetProperty@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker2@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x180273D18 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker2@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289E58 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::GetProperty(CInteractionTracker2 *a1, unsigned int a2, CExpressionValue *a3)
{
  __m128 v3; // xmm0
  bool v6; // si
  int v7; // xmm6_4
  int v8; // eax
  bool v9; // bl
  int Property; // eax
  unsigned int v11; // ebx
  double v12; // xmm0_8
  double v13; // xmm0_8
  int v14; // xmm7_4
  double v15; // xmm0_8
  CScrollScaleKeyframeAnimation *v16; // rcx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // r8
  const char *v20; // r9
  __m128 v21; // xmm6
  unsigned __int64 v22; // xmm6_8
  __int64 v23; // rcx
  __int64 NaturalEndpoint; // r8
  __int64 ScaleAdjustedPositionIfNeeded; // rax
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 > 0x3F )
  {
    switch ( a2 )
    {
      case '@':
        v17 = *(_QWORD *)a1;
        v18 = 0;
        v27 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(v17 + 272))(a1) )
        {
          v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*((CScrollAnimation **)a1 + 82));
          v21 = v3;
          v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*((CScrollAnimation **)a1 + 83));
          v22 = _mm_unpacklo_ps(v21, v3).m128_u64[0];
        }
        else
        {
          v23 = *((_QWORD *)a1 + 98);
          if ( v23 )
            NaturalEndpoint = CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v23, (__int64)&v27, v19, v20);
          else
            NaturalEndpoint = (__int64)a1 + 424;
          ScaleAdjustedPositionIfNeeded = CInteractionTracker2::GetScaleAdjustedPositionIfNeeded(
                                            a1,
                                            v28,
                                            NaturalEndpoint);
          v18 = *(_DWORD *)(ScaleAdjustedPositionIfNeeded + 8);
          v22 = *(_QWORD *)ScaleAdjustedPositionIfNeeded;
        }
        CExpressionValue::DestroyCurrent(a3);
        *(_QWORD *)a3 = v22;
        *((_DWORD *)a3 + 2) = v18;
        *((_DWORD *)a3 + 16) = 52;
        return 0;
      case 'A':
        if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)a1 + 272LL))(a1) )
        {
          *(float *)&v12 = CScrollAnimation::GetNaturalEndpoint(*((CScrollAnimation **)a1 + 81));
        }
        else
        {
          v16 = (CScrollScaleKeyframeAnimation *)*((_QWORD *)a1 + 99);
          if ( !v16 )
          {
            v7 = *((_DWORD *)a1 + 120);
            goto LABEL_37;
          }
          *(float *)&v12 = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v16);
        }
        break;
      case 'B':
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *((_QWORD *)a1 + 53);
        v8 = *((_DWORD *)a1 + 108);
        goto LABEL_41;
      case 'C':
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)a1 + 460);
        v8 = *((_DWORD *)a1 + 117);
        goto LABEL_41;
      case 'D':
        v13 = (*(double (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)a1 + 392LL))(a1, 1LL);
        v14 = LODWORD(v13);
        v15 = (*(double (__fastcall **)(CInteractionTracker2 *, _QWORD))(*(_QWORD *)a1 + 392LL))(a1, 0LL);
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_DWORD *)a3 = LODWORD(v15);
        *((_DWORD *)a3 + 1) = v14;
        *((_DWORD *)a3 + 2) = 0;
        return 0;
      case 'E':
        goto LABEL_36;
      case 'F':
        v7 = *((_DWORD *)a1 + 129);
        goto LABEL_37;
      case 'G':
        v12 = (*(double (__fastcall **)(CInteractionTracker2 *, __int64))(*(_QWORD *)a1 + 392LL))(a1, 2LL);
        break;
      default:
        goto LABEL_31;
    }
    v7 = LODWORD(v12);
    goto LABEL_37;
  }
  switch ( a2 )
  {
    case 0x3Fu:
      v9 = (*((_BYTE *)a1 + 828) & 2) != 0;
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 17;
      *(_BYTE *)a3 = v9;
      return 0;
    case 6u:
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)((char *)a1 + 436);
      v8 = *((_DWORD *)a1 + 111);
      goto LABEL_41;
    case 7u:
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *((_QWORD *)a1 + 56);
      v8 = *((_DWORD *)a1 + 114);
LABEL_41:
      *((_DWORD *)a3 + 2) = v8;
      return 0;
    case 8u:
      v7 = *((_DWORD *)a1 + 121);
      goto LABEL_37;
    case 0xAu:
      v7 = *((_DWORD *)a1 + 122);
      goto LABEL_37;
    case 0x3Au:
LABEL_36:
      v7 = *((_DWORD *)a1 + 120);
      goto LABEL_37;
    case 0x3Bu:
      v7 = *((_DWORD *)a1 + 106);
      goto LABEL_37;
    case 0x3Du:
      v7 = *((_DWORD *)a1 + 107);
LABEL_37:
      CExpressionValue::DestroyCurrent(a3);
      *(_DWORD *)a3 = v7;
      *((_DWORD *)a3 + 16) = 18;
      return 0;
    case 0x3Eu:
      v6 = CInteractionTracker2::HasImpulse(a1)
        || (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)a1 + 488LL))(a1);
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 17;
      *(_BYTE *)a3 = v6;
      return 0;
  }
LABEL_31:
  Property = CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::GetProperty(
               (__int64)a1,
               a2,
               a3);
  v11 = Property;
  if ( Property >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Property, 0x44Eu, 0LL);
  return v11;
}
