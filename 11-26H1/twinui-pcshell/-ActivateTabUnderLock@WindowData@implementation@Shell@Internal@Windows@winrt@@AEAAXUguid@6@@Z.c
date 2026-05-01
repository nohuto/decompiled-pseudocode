/*
 * XREFs of ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800CBAAC
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180029C64 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800CBD44 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1800CBC08 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 *     ?front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@XZ @ 0x1800CC188 (-front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800CC6D0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x180580E78 (-find@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Inter.c)
 *     ?push_front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAX$$QEAUguid@winrt@@@Z @ 0x180580F20 (-push_front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAX$$QEAUguid@winrt@@@Z.c)
 */

unsigned __int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(
        _QWORD *a1,
        __int128 *a2)
{
  unsigned __int64 **v2; // rbx
  __int64 v4; // r9
  __int64 v6; // r11
  unsigned __int64 *v7; // r10
  unsigned __int64 result; // rax
  __m128i *v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  char v19[32]; // [rsp+60h] [rbp-20h] BYREF

  v2 = (unsigned __int64 **)(a1 + 19);
  v4 = a1[22];
  v6 = v4 + a1[23];
  if ( a1 == (_QWORD *)-152LL )
    v7 = 0LL;
  else
    v7 = *v2;
  v17 = *a2;
  if ( v7 )
    result = *v7;
  else
    result = 0LL;
  v14 = result;
  while ( 1 )
  {
    v15 = v4;
    if ( v4 == v6 )
      break;
    v9 = (__m128i *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*(&v14);
    v12 = *v9;
    result = v9->m128i_i64[0] - v17;
    if ( !result )
      result = _mm_srli_si128(v12, 8).m128i_u64[0] - *((_QWORD *)&v17 + 1);
    if ( !result )
    {
      if ( v10 != v6 )
      {
        v16 = v10;
        v18 = v10 + 1;
        v17 = v11;
        v15 = 0LL;
        v14 = v11;
        std::deque<tagRECT>::erase(v2, v19, &v14, &v17);
        v13 = std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front(v2);
        std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::find(
          a1 + 3,
          &v14,
          v13);
        if ( v14 != a1[4] )
          winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
            *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(v14 + 32),
            0);
        return std::deque<winrt::guid>::push_front(v2, a2);
      }
      return result;
    }
    v4 = v10 + 1;
  }
  return result;
}
