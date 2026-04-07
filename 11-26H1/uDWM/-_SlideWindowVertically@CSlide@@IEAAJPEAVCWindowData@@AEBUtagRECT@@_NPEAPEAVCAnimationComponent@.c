/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18007B624
 * Callers:
 *     ?_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002E320 (-_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C7490 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C7A40 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x18003841C (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800C44A4 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v9)(CSlide *, __int64); // rax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  LONG bottom; // r8d
  LONG top; // r11d
  CBaseObject *v17; // rbx
  unsigned __int64 v18; // xmm0_8
  int v19; // edx
  int v20; // ecx
  int v21; // r11d
  int v22; // r8d
  bool v23; // cc
  struct tagRECT *p_rc; // rcx
  int v25; // eax
  struct tagRECT v26; // xmm0
  CBaseObject *v28; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v30; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *((unsigned int *)a2 + 186);
  v28 = 0LL;
  v9 = *(__int64 (__fastcall **)(CSlide *, __int64))(v5 + 112);
  v30 = 0LL;
  rc = 0LL;
  v12 = v9(this, v7);
  v13 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v12, &v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x17Fu, 0LL);
    v17 = v28;
    if ( v28 )
      CStoryboard::_RemoveAnimationComponent(this, v28);
  }
  else
  {
    bottom = a3->bottom;
    top = a3->top;
    v17 = v28;
    v30 = *(struct tagRECT *)((char *)v28 + 88);
    v18 = _mm_srli_si128((__m128i)v30, 8).m128i_u64[0];
    rc = v30;
    v19 = HIDWORD(v18) - bottom;
    if ( bottom - HIDWORD(v18) > 0 )
      v19 = bottom - HIDWORD(v18);
    v20 = v30.top - top;
    if ( v30.top - top < 0 )
      v20 = top - v30.top;
    v21 = top - HIDWORD(v18);
    v22 = bottom - v30.top;
    v23 = v19 < v20;
    p_rc = &v30;
    if ( !v23 )
      v22 = v21;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v22);
    v25 = *((_DWORD *)a2 + 186);
    if ( (v25 & 0x1000000) != 0 )
      v30 = *(struct tagRECT *)((char *)a2 + 764);
    if ( (v25 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 796);
    CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v17 + 5), &v30);
    CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v17 + 5), &rc);
    if ( a4 )
      v26 = rc;
    else
      v26 = v30;
    *(struct tagRECT *)((char *)v17 + 88) = v26;
  }
  if ( a5 )
  {
    if ( v14 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v17;
      if ( !v17 )
        return (unsigned int)v14;
      CBaseObject::AddRef(v17);
    }
  }
  if ( v17 )
    CBaseObject::Release(v17);
  return (unsigned int)v14;
}
