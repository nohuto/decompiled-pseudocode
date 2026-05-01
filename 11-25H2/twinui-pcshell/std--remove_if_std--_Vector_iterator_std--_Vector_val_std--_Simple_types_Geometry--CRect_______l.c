/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_36235454365469fccadfc3a0ea7b3429___ @ 0x1805823A4
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x180587870 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_36235454365469fccadfc3a0ea7b3429___(
        _QWORD *a1,
        _OWORD *a2,
        _OWORD *a3,
        _QWORD *a4)
{
  _OWORD *i; // rdi
  _OWORD *j; // rsi
  _QWORD *result; // rax
  __int64 v10; // [rsp+20h] [rbp-8h]

  for ( i = a2; i != a3; ++i )
  {
    if ( (unsigned __int8)SnapLayoutHelpers::DoSnapRegionsOverlap(1LL, *a4, i, *(unsigned int *)a4[1], v10) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !(unsigned __int8)SnapLayoutHelpers::DoSnapRegionsOverlap(1LL, *a4, j, *(unsigned int *)a4[1], v10) )
        *i++ = *j;
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
