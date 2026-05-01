/*
 * XREFs of ??$remove_if@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@V10@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@Z @ 0x1802A24F4
 * Callers:
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18016BC00 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 */

_QWORD *__fastcall std::remove_if<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,_lambda_f9bbe9b79fcb587def877da126a47fb9_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // r9
  _QWORD *v6; // r11
  __int64 v7; // rdi
  _DWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  __int64 v15; // r9
  _QWORD *result; // rax
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v3 = *(_QWORD **)a2;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = a1;
  if ( *(_QWORD *)a2 )
    v3 = (_QWORD *)*v3;
  v7 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v17 = v3;
  while ( 1 )
  {
    *((_QWORD *)&v17 + 1) = v5;
    if ( v5 == v7 )
      break;
    v8 = (_DWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v17);
    if ( (unsigned int)(v8[3] - v8[1]) < 0xC8 || (unsigned int)(v8[2] - *v8) < 0xC8 )
      break;
    ++v5;
  }
  v9 = v5 == v7;
  v10 = *((_QWORD *)&v17 + 1);
  v18 = v17;
  if ( !v9 )
  {
    v11 = *((_QWORD *)&v18 + 1);
    while ( 1 )
    {
      *((_QWORD *)&v18 + 1) = v11 + 1;
      if ( v11 + 1 == v7 )
        break;
      v12 = std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v18);
      if ( (unsigned int)(*(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 4)) >= 0xC8
        && (unsigned int)(*(_DWORD *)(v12 + 8) - *(_DWORD *)v12) >= 0xC8 )
      {
        v13 = *(_OWORD *)v12;
        v14 = (_OWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v17);
        v10 = v15 + 1;
        *((_QWORD *)&v17 + 1) = v10;
        *v14 = v13;
      }
    }
  }
  *v6 = *(_QWORD *)a2;
  result = v6;
  *(_QWORD *)(a2 + 16) = v10;
  v6[1] = 0LL;
  v6[2] = v10;
  return result;
}
