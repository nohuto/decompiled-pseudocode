/*
 * XREFs of ?SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z @ 0x180019CA4
 * Callers:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180019868 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExternalEffectGraph::CGraphRenderingContext::SetInputSurface(
        CExternalEffectGraph::CGraphRenderingContext *this,
        const struct EffectInput *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  char v5; // r14
  char v6; // r15
  char v7; // r13
  int v8; // r12d
  __m128i v9; // xmm7
  __int128 v10; // xmm6
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  __int128 v13; // xmm10
  EffectInput *v14; // rax
  _QWORD v16[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v17; // [rsp+38h] [rbp-C8h]
  __m128i v18; // [rsp+40h] [rbp-C0h]
  int v19; // [rsp+50h] [rbp-B0h]
  char v20; // [rsp+54h] [rbp-ACh]
  char v21; // [rsp+55h] [rbp-ABh]
  __int128 v22; // [rsp+58h] [rbp-A8h]
  __int128 v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  _QWORD v26[2]; // [rsp+98h] [rbp-68h] BYREF
  char v27; // [rsp+A8h] [rbp-58h]
  __m128i v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+C0h] [rbp-40h]
  char v30; // [rsp+C4h] [rbp-3Ch]
  char v31; // [rsp+C5h] [rbp-3Bh]
  __int128 v32; // [rsp+C8h] [rbp-38h]
  __int128 v33; // [rsp+D8h] [rbp-28h]
  __int128 v34; // [rsp+E8h] [rbp-18h]
  __int128 v35; // [rsp+F8h] [rbp-8h]

  v2 = *(_QWORD *)a2;
  v16[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = *((_QWORD *)a2 + 1);
  v16[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_BYTE *)a2 + 44);
  v6 = *((_BYTE *)a2 + 16);
  v7 = *((_BYTE *)a2 + 45);
  v8 = *((_DWORD *)a2 + 10);
  v17 = v6;
  v19 = v8;
  v20 = v5;
  v21 = v7;
  v9 = _mm_loadu_si128((const __m128i *)((char *)a2 + 24));
  v10 = *((_OWORD *)a2 + 3);
  v18 = v9;
  v22 = v10;
  if ( v5 )
  {
    v11 = *((_OWORD *)a2 + 4);
    v12 = *((_OWORD *)a2 + 5);
    v13 = *((_OWORD *)a2 + 6);
    v23 = v11;
    v24 = v12;
    v25 = v13;
  }
  else
  {
    v13 = v25;
    v12 = v24;
    v11 = v23;
  }
  v26[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v26[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v27 = v6;
  v29 = v8;
  v30 = v5;
  v31 = v7;
  v28 = v9;
  v32 = v10;
  if ( v5 )
  {
    v33 = v11;
    v34 = v12;
    v35 = v13;
  }
  v14 = (EffectInput *)detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
                         (char *)this + 48,
                         0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4));
  EffectInput::EffectInput(v14, (const struct EffectInput *)v26);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v26);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v16);
  *((_DWORD *)this + 8) = 0;
}
