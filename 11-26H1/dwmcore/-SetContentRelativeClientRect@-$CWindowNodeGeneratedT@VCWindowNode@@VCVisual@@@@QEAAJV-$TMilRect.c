/*
 * XREFs of ?SetContentRelativeClientRect@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18021AFF0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNodeGeneratedT<CWindowNode,CVisual>::SetContentRelativeClientRect(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  _OWORD *v3; // rdx
  __int64 *v4; // r9
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  v7 = *a2;
  if ( operator!=(&v7, (_DWORD *)(a1 + 688)) )
  {
    v5 = *v4;
    *v3 = v2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v5 + 80))(v4, 0LL, 0LL);
  }
  return 0LL;
}
