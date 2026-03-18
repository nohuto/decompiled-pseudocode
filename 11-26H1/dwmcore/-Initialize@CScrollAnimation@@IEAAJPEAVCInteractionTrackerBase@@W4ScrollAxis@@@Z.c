/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x18013E9D8
 * Callers:
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTrackerBase@@@Z @ 0x1802191DC (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTrackerBase@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x180219680 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18013E998 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013EF70 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z @ 0x1802942A0 (-InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v4; // edi
  int WeakReference; // eax
  char v8; // al
  int v9; // edx
  int v10; // edx
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // edi
  int inserted; // eax
  int v15; // eax
  int v17; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v18; // [rsp+44h] [rbp-14h]
  unsigned __int8 v19; // [rsp+48h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct IUnknownWeakRef *v21; // [rsp+78h] [rbp+20h] BYREF

  v17 = 1;
  v4 = 0;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  WeakReference = CResource::GetWeakReference((CResource *)a2, &v21);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  *(_QWORD *)(a1 + 296) = v21;
  *(_DWORD *)(a1 + 284) = a3;
  v8 = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 67LL);
  v9 = *(_DWORD *)(a1 + 284);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v11 = v8 != 0 ? 69 : 2;
    }
    else
    {
      v4 = 1;
      inserted = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v17, 1u);
      if ( inserted < 0 )
        ModuleFailFastForHRESULT(inserted, retaddr);
    }
  }
  else
  {
    v4 = 1;
    v15 = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v17, 0);
    if ( v15 < 0 )
      ModuleFailFastForHRESULT(v15, retaddr);
  }
  v12 = CBaseExpression::SetTarget(a1, a2[20], (volatile signed __int64 *)a2, v11, 0x12u, v4, v18, v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x76u, 0LL);
    CScrollAnimation::Stop((CScrollAnimation *)a1);
  }
  else
  {
    (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)a2 + 544LL))(a2, a1);
    *(_BYTE *)(a1 + 312) |= 1u;
    return 0;
  }
  return v13;
}
