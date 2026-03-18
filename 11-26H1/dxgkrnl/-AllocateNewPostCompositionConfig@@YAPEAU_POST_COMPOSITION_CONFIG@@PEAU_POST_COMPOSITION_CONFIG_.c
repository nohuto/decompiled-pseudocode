/*
 * XREFs of ?AllocateNewPostCompositionConfig@@YAPEAU_POST_COMPOSITION_CONFIG@@PEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x14032FF18
 * Callers:
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x14032EB8C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 */

struct _POST_COMPOSITION_CONFIG *__fastcall AllocateNewPostCompositionConfig(struct _POST_COMPOSITION_CONFIG_QUEUE *a1)
{
  int NextConfigIndex; // eax
  _DWORD *v2; // rdx
  int v3; // ecx
  __int64 v4; // r8
  int v5; // eax

  NextConfigIndex = GetNextConfigIndex(*(_DWORD *)a1);
  v3 = v2[1];
  v4 = NextConfigIndex;
  *v2 = NextConfigIndex;
  if ( NextConfigIndex == v3 || v3 == -1 )
  {
    v5 = GetNextConfigIndex(v3);
    v2[1] = v5;
  }
  return (struct _POST_COMPOSITION_CONFIG *)&v2[8 * v4 + 2 + v4];
}
