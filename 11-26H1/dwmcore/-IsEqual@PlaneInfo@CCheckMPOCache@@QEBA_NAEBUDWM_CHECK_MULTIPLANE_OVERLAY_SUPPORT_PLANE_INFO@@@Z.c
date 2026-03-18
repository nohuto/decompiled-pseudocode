/*
 * XREFs of ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1802979E4
 * Callers:
 *     ?Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z @ 0x180297BD0 (-Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E50F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCheckMPOCache::PlaneInfo::IsEqual(
        CCheckMPOCache::PlaneInfo *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        __int64 a3)
{
  int v5; // edx
  int v6; // ecx
  __m128i v7; // xmm0
  int v8; // ecx
  int v9; // edx
  __int64 v10; // r10
  __int64 v11; // rcx
  __m128i v13; // [rsp+20h] [rbp-10h] BYREF

  if ( !*((_DWORD *)this + 2) )
    return 0;
  if ( !*((_DWORD *)this + 3) )
    return 0;
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
    return 0;
  if ( *((_DWORD *)this + 1) != *((_DWORD *)a2 + 4) )
    return 0;
  if ( *((_DWORD *)this + 6) != *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7) )
    return 0;
  if ( *((_DWORD *)this + 7) != *((_DWORD *)a2 + 10) - *((_DWORD *)a2 + 8) )
    return 0;
  v5 = *((_DWORD *)a2 + 11);
  if ( *((_DWORD *)this + 8) != *((_DWORD *)a2 + 13) - v5 )
    return 0;
  v6 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)this + 9) != *((_DWORD *)a2 + 14) - v6 )
    return 0;
  v8 = -v6;
  v9 = -v5;
  v13 = *(__m128i *)((char *)a2 + 60);
  v7 = v13;
  v13.m128i_i32[1] += v8;
  v13.m128i_i32[2] += v9;
  v13.m128i_i32[3] += v8;
  v13.m128i_i32[0] = v9 + _mm_cvtsi128_si32(v7);
  if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEquivalentTo((_DWORD *)this + 10, &v13, a3) )
    return 0;
  if ( *((_DWORD *)this + 15) == *(_DWORD *)(v10 + 76)
    && *((_DWORD *)this + 14) == *(_DWORD *)(v10 + 24)
    && *((_DWORD *)this + 16) == *(_DWORD *)(v10 + 80)
    && *((_DWORD *)this + 17) == *(_DWORD *)(v10 + 100)
    && *((_DWORD *)this + 18) == *(_DWORD *)(v10 + 128)
    && (v11 = *(_QWORD *)(v10 + 8),
        v13 = 0uLL,
        (*(int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v11 + 32LL))(v11, &v13) >= 0)
    && *(_OWORD *)&v13 == *(_OWORD *)((char *)this + 8) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
