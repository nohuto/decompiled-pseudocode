/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18010DD84 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x18013E9D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18010E25C (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ??0CResourceWeakRef@@IEAA@PEAVCResource@@@Z @ 0x1801A46FC (--0CResourceWeakRef@@IEAA@PEAVCResource@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        int a2,
        volatile signed __int64 *a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 *v13; // rdi
  bool v14; // cf
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  void *v18; // rcx
  unsigned __int8 v19; // bl
  int v21; // r9d
  CResourceWeakRef *v22; // rax
  CResourceWeakRef *v23; // rax
  signed __int64 v24; // rdi
  _BYTE *v25; // rax
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 216) & 2) != 0 )
    {
      v26 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v17 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x78u, 0LL);
        return v17;
      }
    }
    else
    {
      v27 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v17 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x7Cu, 0LL);
        return v17;
      }
    }
  }
  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)a1);
  if ( a3 )
  {
    if ( !*((_QWORD *)a3 + 2) )
    {
      v22 = (CResourceWeakRef *)MIDL_user_allocate(0x60uLL);
      if ( !v22
        || (v23 = CResourceWeakRef::CResourceWeakRef(v22, (struct CResource *)a3), (v24 = (signed __int64)v23) == 0) )
      {
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      (*(void (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v23 + 8LL))(v23);
      if ( _InterlockedCompareExchange64(a3 + 2, v24, 0LL) )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v8 = *((_QWORD *)a3 + 2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v13 = (__int64 *)(a1 + 184);
  ReleaseInterface<ID2D1Geometry>((__int64 *)(a1 + 184));
  if ( v8 && CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v8) )
  {
    *v13 = v8;
    v8 = 0LL;
  }
  *(_BYTE *)(a1 + 216) &= ~2u;
  v14 = *v13 != 0;
  *(_DWORD *)(a1 + 180) = a4;
  v15 = *(_DWORD *)(a1 + 176);
  *(_BYTE *)(a1 + 216) |= v14 ? 2 : 0;
  if ( v15 )
  {
    if ( v15 != a2 )
    {
      v17 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2E2u, 0LL);
      v31 = 146;
      goto LABEL_22;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 176) = a2;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 240LL))(a1, a5);
  v17 = v16;
  if ( v16 < 0 )
  {
    v31 = 147;
LABEL_28:
    v21 = v16;
    goto LABEL_29;
  }
  v18 = *(void **)(a1 + 192);
  if ( v18 )
  {
    operator delete(v18, 8uLL);
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  v19 = a7;
  if ( !a7 )
  {
LABEL_14:
    if ( (*(_BYTE *)(a1 + 216) & 0x40) != 0
      || (v16 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1), v17 = v16, v16 >= 0) )
    {
      v17 = 0;
      goto LABEL_17;
    }
    v31 = 174;
    goto LABEL_28;
  }
  if ( a6 == 1 )
  {
    v25 = operator new(0xCuLL);
    if ( v25 )
    {
      *(_DWORD *)v25 = 1;
      v25[4] = a7 < 5u ? a7 : 0;
      v25[8] = a8;
    }
    *(_QWORD *)(a1 + 192) = v25;
    goto LABEL_14;
  }
  if ( a6 == 2 )
  {
    v28 = operator new(0x10uLL);
    v29 = v28;
    if ( v28 )
    {
      *v28 = 2;
      if ( a7 > 0x10u || (v30 = 65631, !_bittest(&v30, a7)) )
        v19 = 0;
      *((_QWORD *)v29 + 1) = a8;
      *((_BYTE *)v29 + 4) = v19;
    }
    else
    {
      v29 = 0LL;
    }
    *(_QWORD *)(a1 + 192) = v29;
    goto LABEL_14;
  }
  v17 = -2147467259;
  v31 = 168;
LABEL_22:
  v21 = v17;
LABEL_29:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v31, 0LL);
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v17;
}
