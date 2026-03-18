/*
 * XREFs of ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18007A0F8
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180024C7C (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180078C80 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079980 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079CF0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CDropShadow *__fastcall CSpriteVisual::GetDropShadow(CSpriteVisual *this)
{
  _DWORD *v1; // r8
  struct CDropShadow *result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  result = 0LL;
  if ( (*v1 & 0x40000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    v5 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( *v4 != 14 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v4;
        if ( (unsigned int)v5 >= (unsigned int)v3 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        return *(struct CDropShadow **)result;
    }
    result = (struct CDropShadow *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    return *(struct CDropShadow **)result;
  }
  return result;
}
