/*
 * XREFs of ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5FB8
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801D5EA8 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180046570 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x18013E0C4 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v1; // al
  KeyframeValue *LastKeyframeValue; // rax
  float *v4; // rbp
  const char *v5; // r9
  int Value; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  float AnimationTimeLength; // xmm0_4
  float v11; // xmm7_4
  int v12; // esi
  int v13; // ebx
  const char *v14; // r9
  int v15; // eax
  double v16; // xmm0_8
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm8_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *((_BYTE *)this + 624);
  if ( (v1 & 2) == 0 )
  {
    *((_BYTE *)this + 624) = v1 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    v4 = (float *)((char *)this + 480);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 480), v5);
    v8 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v8;
    }
    if ( !*((_DWORD *)this + 136) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE9,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v7);
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    v11 = AnimationTimeLength;
    if ( AnimationTimeLength != 0.0 )
    {
      v12 = 66;
      v13 = *((_DWORD *)this + 45) & 0x7FFFFFFF;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 64LL))(
             *((_QWORD *)this + 59),
             66LL) )
      {
        v12 = 1;
        v15 = 2;
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 64LL))(
                *((_QWORD *)this + 59),
                67LL) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xFE,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v14);
        v15 = 69;
      }
      if ( v13 == v12 )
      {
        if ( *((_DWORD *)this + 136) != 52 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x103,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v14);
        v16 = (*(double (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 232LL))(
                *((_QWORD *)this + 59),
                1LL);
        v17 = *(float *)&v16;
        v18 = 1.0 / v11;
        v19 = (float)(*v4
                    - (*(float (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 59) + 232LL))(
                        *((_QWORD *)this + 59),
                        0LL))
            * (float)(1.0 / v11);
        v20 = (float)(*((float *)this + 121) - v17) * (float)(1.0 / v11);
        v21 = (float)(*((float *)this + 122) - 0.0) * v18;
        CExpressionValue::DestroyCurrent((CScrollKeyframeAnimation *)((char *)this + 552));
        *((_DWORD *)this + 154) = 52;
        *((float *)this + 138) = v19;
        *((float *)this + 139) = v20;
        *((float *)this + 140) = v21;
      }
      else
      {
        if ( v13 != v15 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x114,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v14);
        if ( *((_DWORD *)this + 136) != 18 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x10D,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v14);
        v22 = (float)(*v4
                    - (*(float (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 59) + 232LL))(
                        *((_QWORD *)this + 59),
                        2LL))
            / AnimationTimeLength;
        CExpressionValue::DestroyCurrent((CScrollKeyframeAnimation *)((char *)this + 552));
        *((_DWORD *)this + 154) = 18;
        *((float *)this + 138) = v22;
      }
    }
  }
  return 0LL;
}
