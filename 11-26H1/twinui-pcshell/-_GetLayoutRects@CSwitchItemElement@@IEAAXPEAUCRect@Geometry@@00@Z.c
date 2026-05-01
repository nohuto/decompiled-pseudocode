/*
 * XREFs of ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1804C0C54
 * Callers:
 *     ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804BFE80 (-GetThumbnailLocation@CSwitchItemElement@@UEAA-AUCRect@Geometry@@XZ.c)
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804BFF40 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C1220 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804C0A88 (-_CalcThumbnailRect@CSwitchItemElement@@IEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

void __fastcall CSwitchItemElement::_GetLayoutRects(
        CSwitchItemElement *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3,
        struct Geometry::CRect *a4)
{
  int v5; // esi
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  int v12; // r15d
  int v13; // ecx
  int v14; // ebx
  int v15; // r9d
  unsigned int v16; // ecx
  int v17; // r11d
  int v18; // eax
  unsigned int v19; // r9d
  char v20; // al
  int v21; // ecx
  int v22; // r14d
  int v23; // eax
  int v24; // esi
  int v25; // eax
  __int128 v26; // [rsp+20h] [rbp-38h]
  __int128 v27; // [rsp+30h] [rbp-28h] BYREF
  int v28[6]; // [rsp+40h] [rbp-18h] BYREF
  int v29; // [rsp+A0h] [rbp+48h]
  int v30; // [rsp+A8h] [rbp+50h]
  int v31; // [rsp+B0h] [rbp+58h]
  int v32; // [rsp+B8h] [rbp+60h]

  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = *((_DWORD *)this + 92);
  v10 = v5 - *((_DWORD *)this + 93);
  v11 = *((_DWORD *)this + 110);
  v12 = v10 - *((_DWORD *)this + 107);
  v13 = *((_DWORD *)this + 94);
  v14 = v12 - v11;
  v15 = v13 + *((_DWORD *)this + 108);
  v16 = *((_DWORD *)this + 98) + v13;
  v17 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15) - *((_DWORD *)this + 95);
  v30 = v11;
  v18 = v15 + *((_DWORD *)this + 111);
  v31 = v15;
  v19 = v16 + *((_DWORD *)this + 85);
  v29 = v9;
  v32 = v18;
  *(_QWORD *)&v26 = __PAIR64__(v16, v9);
  *((_QWORD *)&v26 + 1) = __PAIR64__(v19, v10);
  if ( *((_QWORD *)this + 75) )
  {
    v20 = 1;
    DWORD2(v26) = v14;
  }
  else
  {
    v20 = 0;
  }
  v21 = *((_DWORD *)this + 99);
  v28[0] = v9;
  v22 = v14;
  if ( !v20 )
    v22 = v10;
  v28[2] = v10;
  v28[3] = v17;
  v28[1] = v19 + v21;
  CSwitchItemElement::_CalcThumbnailRect((__int64)this, &v27, v28);
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v14 = v5 - v12;
    v23 = v5 - v29;
    LODWORD(v26) = v5 - v22;
    v24 = v5 - DWORD2(v27);
    DWORD2(v26) = v23;
    v25 = v24 - v27;
    LODWORD(v27) = v24;
    DWORD2(v27) += v25;
    v12 = v14 + v30;
  }
  if ( a2 )
  {
    *(_DWORD *)a2 = v14;
    *((_DWORD *)a2 + 1) = v31;
    *((_DWORD *)a2 + 2) = v12;
    *((_DWORD *)a2 + 3) = v32;
  }
  if ( a3 )
    *(_OWORD *)a3 = v26;
  if ( a4 )
    *(_OWORD *)a4 = v27;
}
