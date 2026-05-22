/*
 * XREFs of ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9B18
 * Callers:
 *     ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF540 (-OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B33E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800C7C5C (--$_Try_emplace@AEBK$$V@-$map@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocator.c)
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C98D0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA94C (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticProcessor::OnHapticInterfaceArrival(
        HapticProcessor *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  int DeviceNodeParent; // eax
  int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 v12; // rbx
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v18[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17 = a2;
  v16 = 0;
  DeviceNodeParent = HapticProcessor::GetDeviceNodeParent(this, a3, &v16);
  v6 = DeviceNodeParent;
  if ( DeviceNodeParent >= 0 )
  {
    v18[0] = 0LL;
    v18[1] = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v18[0]) = 0;
    v19 = 0LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    std::wstring::assign((char *)v18, a3, v7);
    LODWORD(v19) = v16;
    v9 = *(_QWORD *)std::map<unsigned long,HapticProcessor::HapticInterfaceInfo>::_Try_emplace<unsigned long const &,>(
                      (__int64 *)this + 4,
                      (__int64)v20,
                      &v17,
                      v8);
    std::wstring::operator=((void *)(v9 + 40), v18);
    *(_DWORD *)(v9 + 72) = v19;
    v11 = (__int64 *)*((_QWORD *)this + 2);
    v12 = *v11;
    v20[0] = *v11;
    v13 = v16;
    while ( (__int64 *)v12 != v11 )
    {
      if ( v13 == *(_DWORD *)(v12 + 64) )
      {
        std::wstring::wstring((__int64)v20, (__int64)a3);
        v6 = HapticProcessor::TryAttachHapticMouse(v14, v17, v12 + 32, v20);
        std::wstring::_Tidy_deallocate(v20);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
            (const char *)(unsigned int)v6);
          goto LABEL_12;
        }
        break;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
        v20,
        v10);
      v12 = v20[0];
    }
    v6 = 0;
LABEL_12:
    std::wstring::_Tidy_deallocate(v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)DeviceNodeParent);
  }
  return (unsigned int)v6;
}
