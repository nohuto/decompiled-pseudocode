/*
 * XREFs of ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x180039B88
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18001A090 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall CBackdropVisualImage::GenerateEffectInput(__int64 a1, __int64 *a2)
{
  float v4; // xmm4_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float *v8; // rax
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, char *); // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *result; // rax
  __int128 v17; // [rsp+28h] [rbp-29h] BYREF
  float v18; // [rsp+38h] [rbp-19h]
  float v19; // [rsp+3Ch] [rbp-15h]
  float v20[12]; // [rsp+40h] [rbp-11h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  *((_BYTE *)a2 + 16) = 0;
  *((_OWORD *)a2 + 3) = 0LL;
  EffectInput::Reset((struct EffectInput *)a2);
  *((_BYTE *)a2 + 44) = 1;
  v4 = *(float *)(a1 + 1696) / *(float *)(a1 + 112);
  v5 = *(float *)(a1 + 1700) / *(float *)(a1 + 116);
  LODWORD(v6) = *(_DWORD *)(a1 + 100) ^ _xmm;
  LODWORD(v7) = *(_DWORD *)(a1 + 96) ^ _xmm;
  *(float *)&v17 = v4 + 0.0;
  *((float *)&v17 + 2) = (float)(v4 * 0.0) + 0.0;
  *((float *)&v17 + 1) = (float)(v5 * 0.0) + 0.0;
  *((float *)&v17 + 3) = v5 + 0.0;
  v18 = (float)((float)(v4 * v7) + (float)(v6 * 0.0)) + (float)(0.0 - (float)(v4 * 0.0));
  v19 = (float)((float)(v5 * v6) + (float)(v7 * 0.0)) + (float)(0.0 - (float)(v5 * 0.0));
  v8 = Matrix3x3::operator*((float *)(a1 + 1716), v20, (float *)&v17);
  LOBYTE(v18) = 0;
  *((_OWORD *)a2 + 3) = *(_OWORD *)v8;
  *((_OWORD *)a2 + 4) = *((_OWORD *)v8 + 1);
  *((float *)a2 + 20) = v8[8];
  *(_OWORD *)((char *)a2 + 84) = *(_OWORD *)(a1 + 1672);
  v9 = (a1 + 72) & -(__int64)(a1 != 0);
  v17 = 0LL;
  v10 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 64LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v17 + 1);
  v10(v9, (char *)&v17 + 8);
  v11 = v17;
  *(_QWORD *)&v17 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *a2;
  v13 = v17;
  *(_QWORD *)&v17 = 0LL;
  *a2 = v13;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v14 = a2[1];
  v15 = *((_QWORD *)&v17 + 1);
  *((_QWORD *)&v17 + 1) = 0LL;
  a2[1] = v15;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_BYTE *)a2 + 16) = LOBYTE(v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17 + 1);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v17);
  *((_DWORD *)a2 + 10) |= 0x200u;
  result = a2;
  *((_WORD *)a2 + 52) = 257;
  *((_BYTE *)a2 + 106) = 1;
  return result;
}
