/*
 * XREFs of ?GetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801CF9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801C0E10 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801C0F24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801DB744 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x180270C14 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289E58 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::GetProperty(__int64 *a1, unsigned int a2, CExpressionValue *a3)
{
  __m128 v3; // xmm0
  unsigned int v6; // edx
  unsigned int v7; // edx
  __int32 v8; // xmm6_4
  unsigned int v9; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  bool v24; // si
  char v25; // bl
  double v26; // xmm0_8
  int v27; // xmm7_4
  double v28; // xmm0_8
  CScrollScaleKeyframeAnimation *v29; // rcx
  __int64 v30; // rax
  int v31; // esi
  __m128 v32; // xmm6
  unsigned __int64 v33; // xmm6_8
  __int64 v34; // rcx
  __int64 NaturalEndpoint; // r8
  __int64 ScaleAdjustedPositionIfNeeded; // rax
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  char v38[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 > 0x36 )
  {
    v17 = a2 - 56;
    if ( !v17 )
    {
      v30 = *a1;
      v31 = 0;
      v37 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v30 + 272))(a1) )
      {
        v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint((CScrollAnimation *)a1[53]);
        v32 = v3;
        v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint((CScrollAnimation *)a1[54]);
        v33 = _mm_unpacklo_ps(v32, v3).m128_u64[0];
      }
      else
      {
        v34 = a1[69];
        if ( v34 )
          NaturalEndpoint = CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v34, &v37);
        else
          NaturalEndpoint = (__int64)(a1 + 23);
        ScaleAdjustedPositionIfNeeded = CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, v38, NaturalEndpoint);
        v31 = *(_DWORD *)(ScaleAdjustedPositionIfNeeded + 8);
        v33 = *(_QWORD *)ScaleAdjustedPositionIfNeeded;
      }
      CExpressionValue::DestroyCurrent(a3);
      *(_QWORD *)a3 = v33;
      *((_DWORD *)a3 + 2) = v31;
      *((_DWORD *)a3 + 16) = 52;
      return 0;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        v26 = (*(double (__fastcall **)(__int64 *, __int64))(*a1 + 392))(a1, 1LL);
        v27 = LODWORD(v26);
        v28 = (*(double (__fastcall **)(__int64 *, _QWORD))(*a1 + 392))(a1, 0LL);
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_DWORD *)a3 = LODWORD(v28);
        *((_DWORD *)a3 + 1) = v27;
        *((_DWORD *)a3 + 2) = 0;
        return 0;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v25 = *((_BYTE *)a1 + 596) & 1;
          CExpressionValue::DestroyCurrent(a3);
          *((_DWORD *)a3 + 16) = 17;
          *(_BYTE *)a3 = v25;
          return 0;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 3;
          if ( !v23 )
          {
            v8 = *((_DWORD *)a1 + 69);
            goto LABEL_6;
          }
          if ( v23 == 4 )
          {
            v24 = CInteractionTracker::HasImpulse((CInteractionTracker *)a1)
               || (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 488))(a1);
            CExpressionValue::DestroyCurrent(a3);
            *((_DWORD *)a3 + 16) = 17;
            *(_BYTE *)a3 = v24;
            return 0;
          }
          goto LABEL_35;
        }
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(__int64 *)((char *)a1 + 220);
        v16 = *((_DWORD *)a1 + 57);
LABEL_23:
        *((_DWORD *)a3 + 2) = v16;
        return 0;
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 392))(a1, 2LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 272))(a1) )
    {
      v3.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint((CScrollAnimation *)a1[52]);
    }
    else
    {
      v29 = (CScrollScaleKeyframeAnimation *)a1[70];
      if ( !v29 )
      {
        v8 = *((_DWORD *)a1 + 60);
        goto LABEL_6;
      }
      v3.m128_f32[0] = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v29);
    }
    v8 = v3.m128_i32[0];
    goto LABEL_6;
  }
  if ( a2 != 54 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        goto LABEL_5;
      v11 = v7 - 21;
      if ( v11 )
      {
        v12 = v11 - 3;
        if ( v12 )
        {
          v13 = v12 - 3;
          if ( !v13 )
          {
            v8 = *((_DWORD *)a1 + 61);
            goto LABEL_6;
          }
          v14 = v13 - 1;
          if ( !v14 )
          {
            v8 = *((_DWORD *)a1 + 62);
            goto LABEL_6;
          }
          v15 = v14 - 22;
          if ( !v15 )
          {
            v8 = *((_DWORD *)a1 + 46);
            goto LABEL_6;
          }
          if ( v15 == 1 )
          {
            v8 = *((_DWORD *)a1 + 47);
            goto LABEL_6;
          }
LABEL_35:
          v9 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x497u, 0LL);
          return v9;
        }
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = a1[26];
        v16 = *((_DWORD *)a1 + 54);
      }
      else
      {
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(__int64 *)((char *)a1 + 196);
        v16 = *((_DWORD *)a1 + 51);
      }
    }
    else
    {
      CExpressionValue::DestroyCurrent(a3);
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = a1[23];
      v16 = *((_DWORD *)a1 + 48);
    }
    goto LABEL_23;
  }
LABEL_5:
  v8 = *((_DWORD *)a1 + 60);
LABEL_6:
  CExpressionValue::DestroyCurrent(a3);
  *(_DWORD *)a3 = v8;
  *((_DWORD *)a3 + 16) = 18;
  return 0;
}
