/*
 * XREFs of ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802B3564
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18027EAEC (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E147C (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CRadialGradientEffect::Create(char a1, struct CRadialGradientEffect **a2)
{
  char *v4; // rax
  struct CRadialGradientEffect *v5; // rbx
  unsigned int v6; // ebx
  CRadialGradientEffect *v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = (char *)MIDL_user_allocate(0x40uLL);
  v5 = (struct CRadialGradientEffect *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &CRadialGradientEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>'};
    *((_QWORD *)v4 + 2) = &CRadialGradientEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
    *((_DWORD *)v4 + 6) = 0;
    v4[60] = a1;
    if ( a1 )
    {
      *(_QWORD *)(v4 + 28) = 0LL;
    }
    else
    {
      *(_OWORD *)(v4 + 28) = 0LL;
      *(_OWORD *)(v4 + 44) = 0LL;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
    *a2 = v5;
    v6 = 0;
    v8 = 0LL;
  }
  else
  {
    v6 = -2147024882;
    v8 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(&v8);
  return v6;
}
