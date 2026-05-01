/*
 * XREFs of ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1800DBD18
 * Callers:
 *     ?AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800DBBF0 (-AdjustRegionsForInitialSnapPosition@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV-$deque@Uta.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1800D973C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1800DC040 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ??$remove_if@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@V10@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@Z @ 0x1802AAE64 (--$remove_if@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ResizeSnapRegion@CSnapAssistControllerBase@@IEBA?AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z @ 0x1805838F0 (-ResizeSnapRegion@CSnapAssistControllerBase@@IEBA-AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::deque<tagRECT>>(
        __int64 a1,
        HWND a2,
        __int64 *a3,
        SnapRectHelpers *a4)
{
  __int64 v7; // rax
  int v8; // eax
  struct IImmersiveMonitor *v9; // rdx
  int v10; // eax
  int v11; // r10d
  __int64 v12; // rdi
  unsigned int v13; // r11d
  int v14; // r9d
  unsigned int v15; // r8d
  __int64 v16; // rax
  bool v17; // cc
  __int64 v18; // r11
  __int64 v19; // rsi
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 *v22; // r11
  _OWORD *v23; // rax
  _OWORD *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  int v32; // [rsp+20h] [rbp-89h]
  int v33; // [rsp+30h] [rbp-79h] BYREF
  __int64 v34; // [rsp+38h] [rbp-71h] BYREF
  __int64 v35; // [rsp+40h] [rbp-69h]
  __int64 v36; // [rsp+48h] [rbp-61h]
  _QWORD v37[3]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v38[3]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v39[3]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v40[24]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v41[24]; // [rsp+B0h] [rbp+7h] BYREF
  struct tagRECT pvAttribute; // [rsp+C8h] [rbp+1Fh] BYREF
  __int128 v43; // [rsp+D8h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v7 = *(_QWORD *)a4;
  v43 = 0LL;
  v8 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(v7 + 88))(a4, &v43);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v8,
      v32);
  v10 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v9);
  v11 = v10;
  v12 = a3[3];
  v13 = 2 * v10;
  v14 = (v10 + pvAttribute.top - DWORD1(v43) <= (unsigned int)(2 * v10)) | 4;
  if ( v10 + pvAttribute.bottom - HIDWORD(v43) > (unsigned int)(2 * v10) )
    v14 = v10 + pvAttribute.top - DWORD1(v43) <= (unsigned int)(2 * v10);
  v15 = v14 | 2;
  if ( pvAttribute.left - ((int)v43 - v10) > (unsigned int)(2 * v10) )
    v15 = v14;
  v16 = v15 | 8;
  v17 = v11 + pvAttribute.right - DWORD2(v43) <= v13;
  v18 = a3[3];
  if ( !v17 )
    v16 = v15;
  v19 = v12 + a3[4];
  v33 = dword_180762440[v16];
  while ( v18 != v19 )
  {
    if ( Geometry::CRect::Intersects(
           (Geometry::CRect *)&pvAttribute,
           *(const struct tagRECT **)(a3[1] + 8 * (v18 & (a3[2] - 1)))) )
    {
      while ( v12 != v19 )
      {
        v21 = v12 & (a3[2] - 1);
        v22 = *(__int64 **)(a3[1] + 8 * v21);
        v34 = *v22;
        v35 = v22[1];
        v23 = (_OWORD *)((__int64 (__fastcall *)(__int64, _QWORD *, int *, __int128 *, struct tagRECT *, __int64 *))CSnapAssistControllerBase::ResizeSnapRegion)(
                          v21,
                          v37,
                          &v33,
                          &v43,
                          &pvAttribute,
                          &v34);
        ++v12;
        *v24 = *v23;
      }
      break;
    }
    v18 = v20 + 1;
  }
  v25 = a3[3];
  v26 = *a3;
  v27 = a3[4];
  v38[1] = 0LL;
  v37[1] = 0LL;
  v35 = 0LL;
  v38[2] = v25 + v27;
  v37[2] = v25 + v27;
  v36 = v25;
  v38[0] = v26;
  v37[0] = v26;
  v34 = v26;
  v28 = (__int64 *)std::remove_if<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,_lambda_f9bbe9b79fcb587def877da126a47fb9_>(
                     v40,
                     &v34,
                     v37);
  v39[1] = 0LL;
  v29 = *v28;
  v30 = v28[2];
  v39[0] = v29;
  v39[2] = v30;
  return std::deque<tagRECT>::erase(a3, v41, v39, v38);
}
