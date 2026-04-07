/*
 * XREFs of ?Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z @ 0x1800738BC
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCC10 (-ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CThemePartPrimitive@@IEAA@XZ @ 0x18008A080 (--0CThemePartPrimitive@@IEAA@XZ.c)
 */

__int64 __fastcall CThemePartPrimitive::Create(struct CThemePartPrimitive **a1)
{
  CThemePartPrimitive *v2; // rax
  struct CThemePartPrimitive *v3; // rax
  unsigned int v4; // ebx

  if ( a1 )
  {
    v2 = (CThemePartPrimitive *)DefaultHeap::AllocClear(0x50uLL);
    if ( v2 && (v3 = CThemePartPrimitive::CThemePartPrimitive(v2)) != 0LL )
    {
      *a1 = v3;
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xB8u, 0LL);
      *a1 = 0LL;
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xB8u, 0LL);
  }
  return v4;
}
