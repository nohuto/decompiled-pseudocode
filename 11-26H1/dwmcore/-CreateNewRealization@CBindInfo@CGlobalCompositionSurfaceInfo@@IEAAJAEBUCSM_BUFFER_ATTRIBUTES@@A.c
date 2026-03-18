/*
 * XREFs of ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18012976C (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180266430 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1800FA640 (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180129D70 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129E34 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealization@@XZ @ 0x1801D4BF8 (-GetPrimaryYUVRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEBAPEAVIYUVSwapChainRealizat.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801DCCFC (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802ACC7C (-Create@CSwapChainRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AE.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802AE954 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        char a4,
        struct ISwapChainRealization **a5)
{
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // eax
  struct CDecodeBitmap *v13; // r12
  __int64 v14; // rbx
  struct IYUVSwapChainRealization *PrimaryYUVRealization; // rax
  int v17; // r9d
  int SubResource; // eax
  int v19; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+20h] [rbp-E0h]
  FastRegion::CRegion *v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v23; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+120h] [rbp+20h]

  memset_0(&v23, 0, 0xA4uLL);
  *a5 = 0LL;
  v9 = NtOpenCompositionSurfaceDirtyRegion(*((_QWORD *)*this + 4), this + 3, a3, &v23);
  v10 = v24;
  if ( v9 < 0 )
    v10 = -1;
  v24 = v10;
  if ( *(_DWORD *)a3 == 1 )
  {
    v11 = -2003292287;
    v20 = 1766;
    goto LABEL_30;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      SubResource = CDxHandleStereoBitmapRealization::Create(
                      *((unsigned int *)this + 8),
                      *((_QWORD *)*this + 5),
                      a2,
                      a3,
                      a5);
      v11 = SubResource;
      if ( SubResource >= 0 )
        goto LABEL_12;
      v20 = 1811;
      goto LABEL_27;
    }
    if ( *(_DWORD *)a3 == 4 )
    {
      v13 = this[1];
      v14 = *((_QWORD *)*this + 5);
      if ( *((_DWORD *)a3 + 8) )
      {
        PrimaryYUVRealization = CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVRealization((CGlobalCompositionSurfaceInfo::CBindInfo *)this);
        SubResource = CDxHandleYUVBitmapRealization::CreateSubResource(
                        PrimaryYUVRealization,
                        (struct _LUID)v14,
                        a2,
                        a3,
                        v13,
                        a5);
        v11 = SubResource;
        if ( SubResource >= 0 )
          goto LABEL_12;
        v20 = 1837;
      }
      else
      {
        SubResource = CDxHandleYUVBitmapRealization::Create(
                        *((_DWORD *)this + 8),
                        v14,
                        (__int64)a2,
                        (__int64)a3,
                        (__int64)v13,
                        a5);
        v11 = SubResource;
        if ( SubResource >= 0 )
          goto LABEL_12;
        v20 = 1825;
      }
LABEL_27:
      v17 = SubResource;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A09F8, 3u, v17, v20, 0LL);
      return (unsigned int)v11;
    }
    v11 = -2147024809;
    v20 = 1843;
LABEL_30:
    v17 = v11;
    goto LABEL_31;
  }
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
          *((unsigned int *)this + 8),
          *((_QWORD *)*this + 5),
          a2,
          a3,
          this[1],
          a5);
  if ( v11 < 0 )
  {
    LOBYTE(v19) = a4;
    v12 = CDxHandleBitmapRealization::Create(*((unsigned int *)this + 8), *((_QWORD *)*this + 5), a2, a3, v19, a5);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A09F8, 3u, v12, 0x6FDu, 0LL);
      SubResource = CSwapChainRealization::Create(
                      *((unsigned int *)this + 8),
                      *((_QWORD *)*this + 5),
                      a2,
                      a3,
                      this[1],
                      a5);
      v11 = SubResource;
      if ( SubResource < 0 )
      {
        v20 = 1800;
        goto LABEL_27;
      }
    }
  }
LABEL_12:
  if ( v24 && *a5 )
  {
    v22 = 0;
    v21 = (FastRegion::CRegion *)&v22;
    if ( v24 == -1 || (int)CRegion::TryAddRectangles(&v21, &v23, v24) < 0 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)*a5 + 1) + 88LL))((char *)*a5 + 8);
    else
      (*(void (__fastcall **)(char *, FastRegion::CRegion **))(*((_QWORD *)*a5 + 1) + 80LL))((char *)*a5 + 8, &v21);
    FastRegion::CRegion::FreeMemory(&v21);
  }
  return (unsigned int)v11;
}
