/*
 * XREFs of ?HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ @ 0x180163360
 * Callers:
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180162BD0 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 */

bool __fastcall SnapEducationHandler::HasWindowFocusUpdatedFrequently(SnapEducationHandler *this)
{
  SnapEducationHandler *v1; // r10
  unsigned __int64 v2; // rcx
  unsigned int v4; // r11d
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r11d
  __int64 v9; // r9
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 8);
  if ( v2 >= *((unsigned __int8 *)v1 + 25) )
    return 0;
  v4 = 0;
  v5 = *((_QWORD *)v1 + 7);
  v10[0] = (char *)v1 + 32;
  v6 = v5 + v2;
  while ( 1 )
  {
    v10[1] = v5;
    if ( v5 == v6 )
      break;
    v7 = std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)v10);
    v4 = *(_DWORD *)(v7 + 48) + v8;
    v5 = v9 + 1;
  }
  return v4 > *((unsigned __int8 *)v1 + 24);
}
