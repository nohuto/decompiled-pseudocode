/*
 * XREFs of ?begin@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCResource@@@2@XZ @ 0x1801599D0
 * Callers:
 *     ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18015992C (-UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14CC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x1801D2338 (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ?AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x18026043C (-AddLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z @ 0x180260E88 (-RemoveLight@CVisual@@QEAAXPEAVCLight@@W4LightBehavior@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 *__fastcall detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::begin(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
  {
LABEL_9:
    v2 = (unsigned __int64)a1;
    goto LABEL_7;
  }
  switch ( *a1 & 3LL )
  {
    case 1LL:
      v2 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2LL:
      v2 = 0LL;
      break;
    case 3LL:
      goto LABEL_9;
    default:
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
LABEL_7:
  *a2 = v2;
  return a2;
}
