/*
 * XREFs of ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1804AF064
 * Callers:
 *     ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804AE2B0 (-GetThumbnailLocation@CSwitchItemElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804AE370 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804AF620 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804AEE98 (-_CalcThumbnailRect@CSwitchItemElement@@IEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

void __fastcall CSwitchItemElement::_GetLayoutRects(
        CSwitchItemElement *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3,
        struct Geometry::CRect *a4)
{
  int v4; // r11d
  int v7; // edi
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // r14d
  int v14; // r15d
  int v15; // r9d
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // r14d
  int v20; // edi
  int v21; // eax
  __int128 v22; // [rsp+20h] [rbp-38h]
  __int128 v23; // [rsp+30h] [rbp-28h] BYREF
  int v24[6]; // [rsp+40h] [rbp-18h] BYREF
  int v25; // [rsp+A0h] [rbp+48h]
  int v26; // [rsp+A8h] [rbp+50h]
  int v27; // [rsp+B0h] [rbp+58h]
  int v28; // [rsp+B8h] [rbp+60h]

  v4 = *((_DWORD *)this + 92);
  v7 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v25 = v4;
  v10 = v7 - *((_DWORD *)this + 93);
  v11 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v12 = *((_DWORD *)this + 94);
  v13 = v10;
  v14 = v10 - *((_DWORD *)this + 107);
  v15 = v11 - *((_DWORD *)this + 95);
  v16 = v14 - *((_DWORD *)this + 110);
  v27 = v12 + *((_DWORD *)this + 108);
  DWORD1(v22) = *((_DWORD *)this + 98) + v12;
  v26 = *((_DWORD *)this + 110);
  v17 = v27 + *((_DWORD *)this + 111);
  v24[2] = v10;
  v28 = v17;
  HIDWORD(v22) = DWORD1(v22) + *((_DWORD *)this + 85);
  if ( *((_QWORD *)this + 75) )
    v13 = v16;
  LODWORD(v22) = v4;
  DWORD2(v22) = v13;
  v24[1] = DWORD1(v22) + *((_DWORD *)this + 85) + *((_DWORD *)this + 99);
  v24[0] = v4;
  v24[3] = v15;
  CSwitchItemElement::_CalcThumbnailRect((__int64)this, &v23, v24);
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v18 = v7 - v13;
    v16 = v7 - v14;
    v19 = v7 - v25;
    LODWORD(v22) = v18;
    v20 = v7 - DWORD2(v23);
    DWORD2(v22) = v19;
    v21 = v20 - v23;
    LODWORD(v23) = v20;
    DWORD2(v23) += v21;
    v14 = v16 + v26;
  }
  if ( a2 )
  {
    *(_DWORD *)a2 = v16;
    *((_DWORD *)a2 + 1) = v27;
    *((_DWORD *)a2 + 2) = v14;
    *((_DWORD *)a2 + 3) = v28;
  }
  if ( a3 )
    *(_OWORD *)a3 = v22;
  if ( a4 )
    *(_OWORD *)a4 = v23;
}
