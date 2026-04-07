/*
 * XREFs of ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z @ 0x180022944
 * Callers:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180021EB0 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F98C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800618DC (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::GetRootVisualNoAddRef(_QWORD *a1, int a2)
{
  int v3; // edx

  if ( !a2 )
    return a1[26];
  v3 = a2 - 1;
  if ( !v3 )
    return a1[28];
  if ( v3 == 1 )
    return a1[66];
  return 0LL;
}
