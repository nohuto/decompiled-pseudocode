/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018873C
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1401886D0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14018890C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z @ 0x14030A9D8 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1)
{
  PVOID *p_pvRbrush; // rbx
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  __int64 v5; // r8
  int RealizedBrush; // eax
  __int64 v7; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  p_pvRbrush = &a1->pvRbrush;
  result = a1->pvRbrush;
  if ( result )
    return result;
  pvRbrush = a1[3].pvRbrush;
  if ( !pvRbrush )
    return 0LL;
  v5 = pvRbrush[6];
  if ( !v5 )
    return 0LL;
  RealizedBrush = bGetRealizedBrush(
                    *(struct BRUSH **)&a1[4].flColorType,
                    (struct EBRUSHOBJ *)a1,
                    *(int (**)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(v5 + 2776));
  v7 = (__int64)*p_pvRbrush;
  if ( !RealizedBrush )
  {
    if ( v7 )
    {
      EngFreeUserMem((PVOID)(v7 - 16));
      *p_pvRbrush = 0LL;
    }
    return 0LL;
  }
  if ( !v7 )
    return 0LL;
  if ( !*((_QWORD *)GreGetCurrentThread(v7) + 8) )
    vTryToCacheRealization(
      (struct EBRUSHOBJ *)a1,
      (struct RBRUSH *)((char *)*p_pvRbrush - 16),
      *(struct BRUSH **)&a1[4].flColorType,
      0,
      1);
  return *p_pvRbrush;
}
