/*
 * XREFs of ?Create@CWindowBackgroundBitmapProducer@@SAJPEAVCWindowBackgroundTreatment@@PEAPEAV1@@Z @ 0x18009CA70
 * Callers:
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18009B10C (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x180039FBC (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CWindowBackgroundBitmapProducer::Create(
        struct CWindowBackgroundTreatment *a1,
        struct CWindowBackgroundBitmapProducer **a2,
        double a3)
{
  CCachedImageProducer *v5; // rax
  __int64 v6; // rdx
  CCachedImageProducer *v7; // rbx
  __m128i v8; // xmm0
  int v9; // ecx
  __m128i v10; // xmm0
  int v11; // ecx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v14; // [rsp+40h] [rbp+18h]
  float v15; // [rsp+40h] [rbp+18h]
  __int64 v16; // [rsp+48h] [rbp+20h]

  v5 = (CCachedImageProducer *)MIDL_user_allocate(0x50uLL);
  v7 = v5;
  if ( v5 )
  {
    CCachedImageProducer::CCachedImageProducer(v5, v6);
    *((_QWORD *)v7 + 9) = a1;
    *(_QWORD *)v7 = &CWindowBackgroundBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *((_QWORD *)v7 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v7 + 8));
    v8 = (__m128i)*((unsigned int *)a1 + 24);
    *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 - *((float *)a1 + 22);
    if ( (_mm_cvtsi128_si32(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v8.m128i_i32 - *(float *)v8.m128i_i32;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v9 = (int)*(float *)v8.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
    }
    else
    {
      v14 = *(float *)v8.m128i_i32 + 6291456.25;
      v9 = (int)(LODWORD(v14) << 10) >> 11;
    }
    v10 = (__m128i)*((unsigned int *)a1 + 25);
    *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 - *((float *)a1 + 23);
    LODWORD(v16) = v9;
    if ( (_mm_cvtsi128_si32(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v10.m128i_i32 - *(float *)v10.m128i_i32;
      v11 = (int)*(float *)v10.m128i_i32
          - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v15 = *(float *)v10.m128i_i32 + 6291456.25;
      v11 = (int)(LODWORD(v15) << 10) >> 11;
    }
    HIDWORD(v16) = v11;
    *((_QWORD *)v7 + 3) = v16;
    result = 0LL;
    *a2 = v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
