/*
 * XREFs of ?GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18059AA28
 * Callers:
 *     ?RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@Z @ 0x18058C414 (-RaiseUiaNotificationForMonitorMove@HotkeyHandler@@AEAAXPEAUHWND__@@IUIntendedHotKeySnapInfo@1@@.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x18059ACC0 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180599D28 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x18059A230 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     ?equal_range@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$00@std@@@std@@QEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x18059B380 (-equal_range@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$00@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs(int **a1, __int64 a2, __int64 a3)
{
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  int *v9; // r14
  int *i; // rdi
  __int64 *v11; // rbx
  _DWORD *v12; // r8
  _BYTE *v13; // rdx
  __int64 **v14; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  _QWORD v18[3]; // [rsp+30h] [rbp-41h] BYREF
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF

  v18[2] = a2;
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 72LL))(a3, &v19);
  v5 = (float)(HIDWORD(v19) - DWORD1(v19));
  v6 = (float)(DWORD2(v19) - v19);
  v7 = (float)SDWORD1(v19);
  v8 = (float)(int)v19;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = a1[1];
  for ( i = *a1; i != v9; i += 16 )
  {
    if ( (float)i[4] == v6 && (float)i[5] == v5 && (float)i[7] == v8 && (float)i[8] == v7 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,1>>::equal_range(
        a1 + 3,
        v18,
        i + 1);
      v11 = (__int64 *)v18[0];
      while ( v11 != (__int64 *)v18[1] )
      {
        v12 = v11 + 4;
        v13 = *(_BYTE **)(a2 + 8);
        if ( v13 == *(_BYTE **)(a2 + 16) )
        {
          std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)a2, v13, v12);
        }
        else
        {
          *(_DWORD *)v13 = *v12;
          *(_QWORD *)(a2 + 8) += 4LL;
        }
        v14 = (__int64 **)v11[2];
        if ( *((_BYTE *)v14 + 25) )
        {
          for ( j = (__int64 *)v11[1]; !*((_BYTE *)j + 25) && v11 == (__int64 *)j[2]; j = (__int64 *)j[1] )
            v11 = j;
          v11 = j;
        }
        else
        {
          v11 = (__int64 *)v11[2];
          for ( k = *v14; !*((_BYTE *)k + 25); k = (__int64 *)*k )
            v11 = k;
        }
      }
    }
  }
  std::_Sort_unchecked<unsigned int *,std::less<void>>(
    *(char **)a2,
    *(int **)(a2 + 8),
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2,
    0);
  return a2;
}
