/*
 * XREFs of ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18016BC00
 * Callers:
 *     ?AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18016BAD4 (-AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV-$deque@Uta.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1800CBC08 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18016D02C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ??$remove_if@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@V10@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@Z @ 0x1802A24F4 (--$remove_if@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ResizeSnapRegion@CSnapAssistControllerBase@@IEBA?AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z @ 0x1805A7730 (-ResizeSnapRegion@CSnapAssistControllerBase@@IEBA-AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 **__fastcall CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::deque<tagRECT>>(
        __int64 a1,
        HWND a2,
        _QWORD *a3,
        SnapRectHelpers *a4)
{
  __int64 v7; // rax
  int v8; // eax
  struct IImmersiveMonitor *v9; // rdx
  int v10; // r10d
  unsigned int v11; // r9d
  __int64 v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // rsi
  const struct tagRECT *v18; // rax
  __int64 v19; // r11
  _QWORD *v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // r10
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  int v29; // [rsp+20h] [rbp-79h]
  _QWORD *v30; // [rsp+30h] [rbp-69h] BYREF
  __int64 v31; // [rsp+38h] [rbp-61h]
  __int64 v32; // [rsp+40h] [rbp-59h]
  int v33; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-49h] BYREF
  __int64 v35; // [rsp+58h] [rbp-41h]
  __int64 v36; // [rsp+60h] [rbp-39h]
  _QWORD *v37; // [rsp+68h] [rbp-31h] BYREF
  __int64 v38; // [rsp+70h] [rbp-29h]
  __int64 v39; // [rsp+78h] [rbp-21h]
  char v40[24]; // [rsp+80h] [rbp-19h] BYREF
  __int64 *v41; // [rsp+98h] [rbp-1h] BYREF
  struct tagRECT pvAttribute; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v43; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v7 = *(_QWORD *)a4;
  v43 = 0LL;
  v8 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(v7 + 88))(a4, &v43);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x89,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v8,
      v29);
  v10 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v9);
  v11 = v10 + pvAttribute.top - DWORD1(v43) <= (unsigned int)(2 * v10);
  if ( v10 + pvAttribute.bottom - HIDWORD(v43) <= (unsigned int)(2 * v10) )
    v11 |= 4u;
  v12 = a3[3];
  v13 = v11 | 2;
  v14 = a3[4];
  v30 = a3;
  v31 = v12;
  if ( pvAttribute.left - ((int)v43 - v10) > (unsigned int)(2 * v10) )
    v13 = v11;
  v15 = v13 | 8;
  v16 = v12;
  if ( v10 + pvAttribute.right - DWORD2(v43) > (unsigned int)(2 * v10) )
    v15 = v13;
  v17 = v12 + v14;
  v33 = dword_18078CAB0[v15];
  while ( v16 != v17 )
  {
    v18 = (const struct tagRECT *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v30);
    if ( Geometry::CRect::Intersects((Geometry::CRect *)&pvAttribute, v18) )
    {
      v37 = a3;
      while ( 1 )
      {
        v38 = v12;
        if ( v12 == v17 )
          break;
        v20 = (_QWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v37);
        v30 = (_QWORD *)*v20;
        v31 = v20[1];
        v21 = (_OWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD **, int *, __int128 *, struct tagRECT *, _QWORD **))CSnapAssistControllerBase::ResizeSnapRegion)(
                          HIDWORD(v31),
                          &v34,
                          &v33,
                          &v43,
                          &pvAttribute,
                          &v30);
        ++v12;
        *v22 = *v21;
      }
      break;
    }
    v16 = v19 + 1;
    v31 = v16;
  }
  v23 = (_QWORD *)*a3;
  v24 = a3[4];
  v39 = a3[3];
  v32 = v39 + v24;
  v36 = v39 + v24;
  v31 = 0LL;
  v30 = v23;
  v35 = 0LL;
  v34 = v23;
  v38 = 0LL;
  v37 = v23;
  v25 = (_QWORD *)std::remove_if<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,_lambda_f9bbe9b79fcb587def877da126a47fb9_>(
                    v40,
                    &v37,
                    &v34);
  v35 = 0LL;
  v26 = (_QWORD *)*v25;
  v27 = v25[2];
  v34 = v26;
  v36 = v27;
  return std::deque<tagRECT>::erase((__int64)a3, &v41, (__int64)&v34, (__int64)&v30);
}
