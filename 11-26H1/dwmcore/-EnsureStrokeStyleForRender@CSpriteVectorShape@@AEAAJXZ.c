/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18003EFA8
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18003FCD0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Reallocate@$0A@@?$vector@MV?$allocator@M@std@@@std@@AEAAXAEA_K@Z @ 0x1801CD8A8 (--$_Reallocate@$0A@@-$vector@MV-$allocator@M@std@@@std@@AEAAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18023E898 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  unsigned int v1; // edi
  __int64 *v2; // r14
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  float v6; // xmm6_4
  float *v7; // rsi
  float *v8; // rdi
  float *v9; // rcx
  float v10; // xmm7_4
  float v11; // xmm6_4
  __int64 v12; // rbx
  int v13; // eax
  float v15; // xmm0_4
  __int128 v16; // [rsp+38h] [rbp-29h] BYREF
  float *v17; // [rsp+48h] [rbp-19h]
  float v18[4]; // [rsp+50h] [rbp-11h] BYREF
  _DWORD v19[8]; // [rsp+60h] [rbp-1h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 144);
  if ( !*((_QWORD *)this + 18) )
  {
    v4 = fmaxf(0.0, *((float *)this + 54));
    v5 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 2;
    v17 = 0LL;
    *(_QWORD *)v18 = v5;
    v6 = 1.0 / v4;
    v16 = 0LL;
    if ( v5 )
    {
      if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      std::vector<float>::_Reallocate<0>(&v16, v18);
    }
    v7 = (float *)*((_QWORD *)this + 22);
    v8 = (float *)*((_QWORD *)this + 21);
    v9 = (float *)*((_QWORD *)&v16 + 1);
    while ( v8 != v7 )
    {
      v15 = v6 * *v8;
      v18[0] = v15;
      if ( v9 == v17 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v16, v9, v18);
        v9 = (float *)*((_QWORD *)&v16 + 1);
      }
      else
      {
        *v9 = v15;
        v9 = (float *)(*((_QWORD *)&v16 + 1) + 4LL);
        *((_QWORD *)&v16 + 1) += 4LL;
      }
      ++v8;
    }
    v10 = fmaxf(1.0, *((float *)this + 53));
    v11 = v6 * *((float *)this + 52);
    v19[0] = *((_DWORD *)this + 49);
    v19[1] = *((_DWORD *)this + 50);
    v19[2] = *((_DWORD *)this + 48);
    v19[3] = *((_DWORD *)this + 51);
    *(float *)&v19[4] = v10;
    *(float *)&v19[6] = v11;
    v19[5] = v9 != (float *)v16 ? 5 : 0;
    v19[7] = *((_BYTE *)this + 220) != 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    v12 = v16;
    gsl::details::extent_type<-1>::extent_type<-1>(v18, (__int64)(*((_QWORD *)&v16 + 1) - v16) >> 2);
    if ( *(_QWORD *)v18 == -1LL || !v12 && *(_QWORD *)v18 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)g_DeviceManager + 144LL))(
            g_DeviceManager,
            v19,
            v12);
    v1 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1FCu, 0LL);
    if ( (_QWORD)v16 )
      std::_Deallocate<16>(v16, ((unsigned __int64)v17 - v16) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  return v1;
}
