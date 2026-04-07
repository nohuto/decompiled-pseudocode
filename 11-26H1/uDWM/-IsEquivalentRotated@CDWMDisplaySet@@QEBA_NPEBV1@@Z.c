/*
 * XREFs of ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18006425C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18000818C (--1CDWMDisplay@@AEAA@XZ.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800581F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180064524 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180064704 (-IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??0CDWMDisplay@@AEAA@AEBV0@@Z @ 0x1800B487C (--0CDWMDisplay@@AEAA@AEBV0@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B493C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4A88 (-IsInfinite@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CDWMDisplaySet::IsEquivalentRotated(__m128i *this, __m128i *a2)
{
  char v4; // bl
  void *v5; // rdi
  CDWMDisplay *v6; // r15
  void *v7; // r8
  const struct CDWMDisplay *v8; // r11
  int v9; // ecx
  int v10; // r13d
  void *v11; // rcx
  int v13; // edx
  __m128i v14; // xmm2
  bool v15; // si
  int v16; // ecx
  int v17; // edx
  __int32 v18; // r10d
  int v19; // r9d
  __m128i v20; // xmm6
  __m128i v21; // [rsp+28h] [rbp-E0h] BYREF
  void *lpMem_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h]
  int v24; // [rsp+50h] [rbp-B8h]
  void *v25[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  _QWORD v27[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v28[56]; // [rsp+88h] [rbp-80h] BYREF
  __m128i v29; // [rsp+C0h] [rbp-48h]
  int v30; // [rsp+164h] [rbp+5Ch]
  int v31; // [rsp+168h] [rbp+60h]
  int v32; // [rsp+180h] [rbp+78h]

  v21 = 0LL;
  *(_OWORD *)lpMem_8 = 0LL;
  v4 = 0;
  v23 = 0LL;
  v24 = 0;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  LODWORD(v27[0]) = 0;
  if ( this[4].m128i_i32[0] != a2[4].m128i_i32[0] )
    return 0;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(this, lpMem_8) < 0 )
  {
LABEL_16:
    v11 = lpMem_8[0];
    if ( lpMem_8[0] == lpMem_8[1] )
      return 0;
    goto LABEL_12;
  }
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(a2, v25) < 0 )
  {
    if ( v25[0] != v25[1] )
      DefaultHeap::Free(v25[0]);
    goto LABEL_16;
  }
  if ( v24 != 1 || LODWORD(v27[0]) != 1 )
  {
    CBitmapSourceArray::~CBitmapSourceArray(v25);
    CBitmapSourceArray::~CBitmapSourceArray(lpMem_8);
    return 0;
  }
  v5 = lpMem_8[0];
  v6 = *(CDWMDisplay **)lpMem_8[0];
  if ( !CDWMDisplay::IsRenderTargetEquivalentTo(*(CDWMDisplay **)lpMem_8[0], *(const struct CDWMDisplay **)v25[0]) )
    goto LABEL_8;
  v9 = *((_DWORD *)v8 + 62);
  v10 = *((_DWORD *)v6 + 62);
  if ( v10 == v9 )
    goto LABEL_8;
  v14 = this[1];
  *(__m128i *)&v27[1] = v14;
  v15 = ((v10 - 2) & 0xFFFFFFFD) == 0;
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( ((v10 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_34;
  }
  else
  {
    if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = 1;
LABEL_34:
      v16 = a2[1].m128i_i32[1];
      v21.m128i_i32[0] = v16;
      v17 = a2[1].m128i_i32[0];
      v21.m128i_i32[1] = v17;
      v18 = a2[1].m128i_i32[3];
      v21.m128i_i32[2] = v18;
      v19 = a2[1].m128i_i32[2];
      v21.m128i_i32[3] = v19;
      v20 = _mm_loadu_si128(&v21);
      goto LABEL_19;
    }
    v15 = 0;
  }
  v20 = a2[1];
  v21 = v20;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
  v18 = a2[1].m128i_i32[2];
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v16 = _mm_cvtsi128_si32(v20);
LABEL_19:
  if ( (v14.m128i_i32[0] != v16 || v14.m128i_i32[1] != v17
                                || _mm_srli_si128(v14, 8).m128i_u64[0] != __PAIR64__(v19, v18))
    && (!TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(&v27[1])
     || !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(&v21))
    && (!(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(&v27[1])
     || !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(&v21)) )
  {
LABEL_8:
    if ( v7 != v25[1] )
      DefaultHeap::Free(v7);
    if ( v5 == lpMem_8[1] )
      return 0;
    v11 = v5;
LABEL_12:
    DefaultHeap::Free(v11);
    return 0;
  }
  CDWMDisplay::CDWMDisplay((CDWMDisplay *)v28, v8);
  v32 = v10;
  if ( v15 )
  {
    v29 = v20;
    v13 = v30;
    v30 = v31;
    v31 = v13;
  }
  if ( CDWMDisplay::IsEquivalentTo(v6, (const struct CDWMDisplay *)v28) )
    v4 = 1;
  CDWMDisplay::~CDWMDisplay((CDWMDisplay *)v28);
  CBitmapSourceArray::~CBitmapSourceArray(v25);
  CBitmapSourceArray::~CBitmapSourceArray(lpMem_8);
  return v4;
}
