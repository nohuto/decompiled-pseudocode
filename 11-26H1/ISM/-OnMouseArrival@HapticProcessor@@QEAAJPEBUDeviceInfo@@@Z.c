/*
 * XREFs of ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9D18
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18019BF58 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C7D60 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_1800C7D60.c)
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C98D0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA94C (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticProcessor::OnMouseArrival(HapticProcessor *this, const struct DeviceInfo *a2)
{
  char *v3; // rsi
  int DeviceNodeParent; // ebx
  __int64 v5; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r11d
  __int64 *v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14[2]; // [rsp+28h] [rbp-38h] BYREF
  wchar_t v15[16]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v13 = 0;
  v3 = (char *)a2 + 76;
  DeviceNodeParent = HapticProcessor::GetDeviceNodeParent(this, (const unsigned __int16 *)a2 + 38, &v13);
  if ( DeviceNodeParent >= 0 )
  {
    v7 = v13;
    std::wstring::wstring((__int64)v15, (__int64)v3);
    *(_DWORD *)(*(_QWORD *)std::map<std::wstring,unsigned long>::_Try_emplace<std::wstring,>(
                             (__int64 *)this + 2,
                             (__int64)v14,
                             v15)
              + 64LL) = v7;
    std::wstring::_Tidy_deallocate(v15);
    v9 = v13;
    if ( v13 )
    {
      v10 = (__int64 *)*((_QWORD *)this + 4);
      v11 = *v10;
      v14[0] = *v10;
      while ( (__int64 *)v11 != v10 )
      {
        if ( v9 == *(_DWORD *)(v11 + 72) )
        {
          std::wstring::wstring((__int64)v15, (__int64)v3);
          DeviceNodeParent = HapticProcessor::TryAttachHapticMouse(v12, *(unsigned int *)(v11 + 32), v15, v11 + 40);
          std::wstring::_Tidy_deallocate(v15);
          if ( DeviceNodeParent >= 0 )
            return 0LL;
          v5 = 74LL;
          goto LABEL_3;
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
          v14,
          v8);
        v11 = v14[0];
      }
    }
    return 0LL;
  }
  else
  {
    v5 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)DeviceNodeParent);
    return (unsigned int)DeviceNodeParent;
  }
}
