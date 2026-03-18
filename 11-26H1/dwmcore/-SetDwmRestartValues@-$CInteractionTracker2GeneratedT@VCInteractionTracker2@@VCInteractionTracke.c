/*
 * XREFs of ?SetDwmRestartValues@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_3F@@@Z @ 0x18024AF24
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802767F4 (-SetProperty@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??9@YA_NAEBUD2D_VECTOR_3F@@0@Z @ 0x1802463E0 (--9@YA_NAEBUD2D_VECTOR_3F@@0@Z.c)
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetDwmRestartValues(
        __int64 a1,
        __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // xmm0_8
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  v2 = *((_DWORD *)a2 + 2);
  v9 = *a2;
  v10 = v2;
  if ( operator!=((float *)&v9, (float *)(a1 + 188)) )
  {
    v6 = *v4;
    v7 = *((_DWORD *)v4 + 2);
    *(_BYTE *)(v5 + 829) |= 0x40u;
    *(_QWORD *)v3 = v6;
    *(_DWORD *)(v3 + 8) = v7;
  }
  return 0LL;
}
