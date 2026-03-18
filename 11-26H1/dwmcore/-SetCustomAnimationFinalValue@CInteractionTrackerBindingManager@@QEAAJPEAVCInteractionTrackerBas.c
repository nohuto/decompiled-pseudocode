/*
 * XREFs of ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBase@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x180278D64
 * Callers:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 * Callees:
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x18013E0C4 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
        __int64 a1,
        __int64 a2,
        CKeyframeAnimation *a3,
        int a4)
{
  const struct KeyframeValue *LastKeyframeValue; // rax
  const char *v8; // r9
  int Value; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rax
  char v14; // r9
  __int64 v15; // [rsp+20h] [rbp-88h] BYREF
  int v16; // [rsp+28h] [rbp-80h]
  int v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+70h] [rbp-38h] BYREF
  int v19; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a3);
  if ( !LastKeyframeValue || *((_DWORD *)LastKeyframeValue + 5) != 1 )
    return 0LL;
  v17 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v15, v8);
  v11 = Value;
  if ( Value < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)(unsigned int)Value);
    CExpressionValue::DestroyCurrent((CExpressionValue *)&v15);
    return v11;
  }
  if ( !a4 )
  {
    v19 = v16;
    v13 = *(_QWORD *)a2;
    v18 = v15;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(v13 + 472))(a2, &v18, 1LL);
    v14 = 3;
LABEL_9:
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(a1, a2, a2, v14);
    goto LABEL_10;
  }
  if ( a4 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 496LL))(a2, v10, 1LL);
    v14 = 4;
    goto LABEL_9;
  }
LABEL_10:
  CExpressionValue::DestroyCurrent((CExpressionValue *)&v15);
  return 0LL;
}
