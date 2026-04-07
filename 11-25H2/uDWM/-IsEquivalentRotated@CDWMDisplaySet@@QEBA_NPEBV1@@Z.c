/*
 * XREFs of ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x180068058 (--1CDWMDisplay@@AEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800682B4 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180078AA8 (-IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180078AFC (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ??0CDWMDisplay@@AEAA@AEBV0@@Z @ 0x1800B4D7C (--0CDWMDisplay@@AEAA@AEBV0@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B4F18 (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5070 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CDWMDisplaySet::IsEquivalentRotated(__m128i *this, __m128i *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  char v6; // bl
  CDWMDisplay *v7; // r14
  const struct CDWMDisplay *v8; // r10
  int v9; // r15d
  int v10; // ecx
  int v12; // edx
  __m128i v13; // xmm2
  bool v14; // si
  __m128i v15; // xmm6
  int v16; // r8d
  __int32 v17; // r9d
  int v18; // edx
  int v19; // ecx
  __m128i v20; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v21; // [rsp+48h] [rbp-C0h] BYREF
  void *v22[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  void *v24[3]; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+90h] [rbp-78h]
  _BYTE v26[56]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+174h] [rbp+6Ch]
  int v29; // [rsp+178h] [rbp+70h]
  int v30; // [rsp+190h] [rbp+88h]

  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v24, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v22, v4, v5);
  if ( this[4].m128i_i32[0] != a2[4].m128i_i32[0] )
    goto LABEL_8;
  v6 = 0;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(this, v24) < 0 )
    goto LABEL_8;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(a2, v22) < 0 )
    goto LABEL_8;
  if ( v25 != 1 )
    goto LABEL_8;
  if ( (_DWORD)v23 != 1 )
    goto LABEL_8;
  v7 = *(CDWMDisplay **)v24[0];
  if ( !CDWMDisplay::IsRenderTargetEquivalentTo(*(CDWMDisplay **)v24[0], *(const struct CDWMDisplay **)v22[0]) )
    goto LABEL_8;
  v9 = *((_DWORD *)v7 + 62);
  v10 = *((_DWORD *)v8 + 62);
  if ( v9 == v10 )
    goto LABEL_8;
  v13 = this[1];
  v21 = v13;
  v14 = ((v9 - 2) & 0xFFFFFFFD) == 0;
  if ( ((v10 - 2) & 0xFFFFFFFD) == 0 )
    v14 = ((v9 - 2) & 0xFFFFFFFD) != 0;
  if ( v14 )
  {
    v19 = a2[1].m128i_i32[1];
    v20.m128i_i32[0] = v19;
    v18 = a2[1].m128i_i32[0];
    v20.m128i_i32[1] = v18;
    v17 = a2[1].m128i_i32[3];
    v20.m128i_i32[2] = v17;
    v16 = a2[1].m128i_i32[2];
    v20.m128i_i32[3] = v16;
    v15 = v20;
  }
  else
  {
    v15 = a2[1];
    v20 = v15;
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    v17 = a2[1].m128i_i32[2];
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    v19 = _mm_cvtsi128_si32(v15);
  }
  if ( v13.m128i_i32[0] == v19 && v13.m128i_i32[1] == v18 && _mm_srli_si128(v13, 8).m128i_u64[0] == __PAIR64__(v16, v17)
    || TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(&v21)
    && TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(&v20)
    || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(&v21)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(&v20) )
  {
    CDWMDisplay::CDWMDisplay((CDWMDisplay *)v26, v8);
    v30 = v9;
    if ( v14 )
    {
      v27 = v15;
      v12 = v28;
      v28 = v29;
      v29 = v12;
    }
    if ( CDWMDisplay::IsEquivalentTo(v7, (const struct CDWMDisplay *)v26) )
      v6 = 1;
    CDWMDisplay::~CDWMDisplay((CDWMDisplay *)v26);
    DynArrayImpl<0>::~DynArrayImpl<0>(v22);
    DynArrayImpl<0>::~DynArrayImpl<0>(v24);
    return v6;
  }
  else
  {
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(v22);
    DynArrayImpl<0>::~DynArrayImpl<0>(v24);
    return 0;
  }
}
