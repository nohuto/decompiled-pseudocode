/*
 * XREFs of ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180129D70
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18012A1B8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AB564 (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Create(
        unsigned int a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  CDxHandleBitmapRealization *v6; // rbx
  unsigned int v11; // edi
  LPVOID v13; // rcx
  __int64 v14; // rax
  int v15; // eax

  v6 = 0LL;
  if ( (a3[34] & 0x100) != 0 )
  {
    if ( !a3[12] && *a3 == 3 )
    {
      v13 = operator new(0x1B8uLL);
      if ( v13
        && (v14 = CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
                    v13,
                    a1,
                    a2,
                    a3,
                    a4,
                    a5),
            (v6 = (CDxHandleBitmapRealization *)v14) != 0LL) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = CDxHandleBitmapRealization::Initialize(v6);
        v11 = v15;
        if ( v15 >= 0 )
        {
          *a6 = ((unsigned __int64)v6 + 328) & -(__int64)(v6 != 0LL);
          return v11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F55E8, 3u, v15, 0x34u, 0LL);
        *((_QWORD *)v6 + 32) = 0LL;
      }
      else
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F55E8, 3u, -2147024882, 0x33u, 0LL);
      }
    }
    else
    {
      v11 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F55E8, 3u, -2003292288, 0x2Bu, 0LL);
    }
  }
  else
  {
    v11 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F55E8, 3u, -2003292287, 0x25u, 0LL);
  }
  *a6 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
