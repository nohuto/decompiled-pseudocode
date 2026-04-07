/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800CA754
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD310 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CD8B0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180023854 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180023874 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800238A4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18006D9A4 (-Release@CStoryboard@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?GetStoryboardById@CAnimationScheduler@@QEAAJHPEAPEAVCStoryboard@@@Z @ 0x1800A85BC (-GetStoryboardById@CAnimationScheduler@@QEAAJHPEAPEAVCStoryboard@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800CA3C0 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct tagPOINT ***a6)
{
  __int64 v7; // rdx
  __m128i *v8; // rdi
  __int64 (__fastcall *v10)(CSlide *, __int64); // rax
  int v12; // eax
  int v13; // eax
  int v14; // r15d
  struct tagPOINT **v15; // rbx
  int v16; // r8d
  LONG right; // edi
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // eax
  int v22; // edi
  int v23; // eax
  struct tagRECT *p_rc; // rcx
  CMILRefCountBase *v26; // [rsp+30h] [rbp-40h] BYREF
  const struct tagRECT *v27; // [rsp+38h] [rbp-38h]
  struct tagRECT v28; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-20h] BYREF

  v7 = *((unsigned int *)a2 + 170);
  v8 = a5;
  v10 = *(__int64 (__fastcall **)(CSlide *, __int64))(*(_QWORD *)this + 112LL);
  v26 = 0LL;
  v27 = a3;
  v28 = 0LL;
  rc = 0LL;
  v12 = v10(this, v7);
  v13 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v12, &v26);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = (struct tagPOINT **)v26;
    if ( !a5 )
      v8 = (__m128i *)((char *)v26 + 88);
    v16 = _mm_cvtsi128_si32(*v8);
    v28 = (struct tagRECT)*v8;
    right = v27->right;
    v18 = v27->left - v16;
    rc = v28;
    v19 = (unsigned int)-v18;
    v20 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v28, 8));
    if ( v18 > 0 )
      v19 = (unsigned int)v18;
    v21 = v20 - right;
    if ( right - v20 > 0 )
      v21 = right - v20;
    if ( v21 >= (int)v19 )
      v22 = v27->left - v20;
    else
      v22 = right - v16;
    v23 = *((_DWORD *)a2 + 170) & 0xFFF;
    if ( a4 )
    {
      if ( v23 == 42 )
      {
        v26 = 0LL;
        if ( (int)CAnimationScheduler::GetStoryboardById(
                    *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
                    v19,
                    &v26) >= 0 )
        {
          v22 -= *((_DWORD *)v26 + 32);
          CStoryboard::Release(v26);
        }
      }
      if ( (*((_DWORD *)a2 + 170) & 0x1000000) != 0 )
      {
        v28 = *(struct tagRECT *)((char *)a2 + 700);
LABEL_24:
        CAnimatedTransitionVisual::SetBeginRect(v15[5], &v28);
        CAnimatedTransitionVisual::SetEndRect((CAnimatedTransitionVisual *)v15[5], &rc);
        goto LABEL_27;
      }
      p_rc = &v28;
    }
    else
    {
      if ( v23 == 24 )
        *((_DWORD *)this + 32) = v22;
      if ( (*((_DWORD *)a2 + 170) & 0x800000) != 0 )
      {
        rc = *(struct tagRECT *)((char *)a2 + 732);
        goto LABEL_24;
      }
      p_rc = &rc;
    }
    OffsetRect(p_rc, v22, 0);
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x11Eu, 0LL);
  v15 = (struct tagPOINT **)v26;
  if ( v26 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisualProxy ***)v26);
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
      CMILRefCountBase::AddRef((CMILRefCountBase *)v15);
    }
  }
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return (unsigned int)v14;
}
