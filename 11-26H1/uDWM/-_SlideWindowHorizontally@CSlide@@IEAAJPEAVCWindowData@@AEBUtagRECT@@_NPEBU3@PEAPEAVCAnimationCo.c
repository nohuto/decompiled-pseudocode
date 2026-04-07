/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800C4844
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C7490 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C7A40 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800383E8 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x18003841C (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18008D6F4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetStoryboardById@CAnimationScheduler@@QEAAJHPEAPEAVCStoryboard@@@Z @ 0x18009A240 (-GetStoryboardById@CAnimationScheduler@@QEAAJHPEAPEAVCStoryboard@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800C44A4 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        CAnimatedTransitionVisual ***a6)
{
  __int64 v7; // rdx
  __m128i *v8; // rdi
  __int64 (__fastcall *v10)(CSlide *, __int64); // rax
  int v12; // eax
  int v13; // eax
  int v14; // r15d
  CAnimatedTransitionVisual **v15; // rbx
  struct tagRECT v16; // xmm1
  int v17; // r9d
  __m128i v18; // xmm0
  LONG right; // edi
  LONG left; // ecx
  int v21; // r8d
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // eax
  struct tagRECT *p_rc; // rcx
  CBaseObject *v29; // [rsp+30h] [rbp-40h] BYREF
  const struct tagRECT *v30; // [rsp+38h] [rbp-38h]
  struct tagRECT v31; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-20h] BYREF

  v7 = *((unsigned int *)a2 + 186);
  v8 = a5;
  v10 = *(__int64 (__fastcall **)(CSlide *, __int64))(*(_QWORD *)this + 112LL);
  v30 = a3;
  v29 = 0LL;
  v31 = 0LL;
  rc = 0LL;
  v12 = v10(this, v7);
  v13 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v12, &v29);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = (CAnimatedTransitionVisual **)v29;
    if ( !a5 )
      v8 = (__m128i *)((char *)v29 + 88);
    v16 = (struct tagRECT)*v8;
    v17 = _mm_cvtsi128_si32(*v8);
    v18 = _mm_srli_si128(*v8, 8);
    right = v30->right;
    left = v30->left;
    v21 = _mm_cvtsi128_si32(v18);
    v31 = v16;
    rc = v16;
    v22 = (unsigned int)(v21 - right);
    if ( right - v21 > 0 )
      v22 = (unsigned int)(right - v21);
    v23 = left - v17;
    v24 = -v23;
    if ( v23 > 0 )
      v24 = v23;
    if ( (int)v22 >= v24 )
      v25 = v30->left - v21;
    else
      v25 = right - v17;
    v26 = *((_DWORD *)a2 + 186) & 0xFFF;
    if ( a4 )
    {
      if ( v26 == 42 )
      {
        v29 = 0LL;
        if ( (int)CAnimationScheduler::GetStoryboardById(
                    *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
                    v22,
                    &v29) >= 0 )
        {
          v25 -= *((_DWORD *)v29 + 32);
          CStoryboard::Release(v29);
        }
      }
      if ( (*((_DWORD *)a2 + 186) & 0x1000000) != 0 )
      {
        v31 = *(struct tagRECT *)((char *)a2 + 764);
LABEL_24:
        CAnimatedTransitionVisual::SetBeginRect(v15[5], &v31);
        CAnimatedTransitionVisual::SetEndRect(v15[5], &rc);
        goto LABEL_27;
      }
      p_rc = &v31;
    }
    else
    {
      if ( v26 == 24 )
        *((_DWORD *)this + 32) = v25;
      if ( (*((_DWORD *)a2 + 186) & 0x800000) != 0 )
      {
        rc = *(struct tagRECT *)((char *)a2 + 796);
        goto LABEL_24;
      }
      p_rc = &rc;
    }
    OffsetRect(p_rc, v25, 0);
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x11Eu, 0LL);
  v15 = (CAnimatedTransitionVisual **)v29;
  if ( v29 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v29);
LABEL_27:
  if ( a6 )
  {
    if ( v14 < 0 )
    {
      *a6 = 0LL;
    }
    else
    {
      *a6 = v15;
      if ( !v15 )
        return (unsigned int)v14;
      CBaseObject::AddRef((CBaseObject *)v15);
    }
  }
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return (unsigned int)v14;
}
