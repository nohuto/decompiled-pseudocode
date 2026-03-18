/*
 * XREFs of ?SetInertiaDecayRates@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_3F@@@Z @ 0x18024B2EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802767F4 (-SetProperty@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??9@YA_NAEBUD2D_VECTOR_3F@@0@Z @ 0x1802463E0 (--9@YA_NAEBUD2D_VECTOR_3F@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetInertiaDecayRates(
        __int64 a1,
        __int64 *a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  v2 = *((_DWORD *)a2 + 2);
  v9 = *a2;
  v10 = v2;
  if ( operator!=((float *)&v9, (float *)(a1 + 204)) )
  {
    v6 = *(_QWORD *)(a1 + 48) == 0LL;
    v7 = *(_DWORD *)(v5 + 8);
    *(_QWORD *)v4 = *(_QWORD *)v5;
    *(_DWORD *)(v4 + 8) = v7;
    if ( !v6 )
      CResource::InvalidateConsumingAnimationsInternal(a1);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
