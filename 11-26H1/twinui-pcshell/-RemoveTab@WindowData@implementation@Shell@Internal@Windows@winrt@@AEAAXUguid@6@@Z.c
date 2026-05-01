/*
 * XREFs of ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800CD4DC
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180029C64 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x1800CB594 (--$_Erase@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Wi.c)
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800CB680 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEBAAEAUApplicationViewHistory@SnapEducationHandler@@XZ @ 0x1800CBBE8 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@Snap.c)
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1800CBC08 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 *     ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x1802A3FD0 (--$_Erase@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implemen.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTab(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // r9
  __int64 v6; // rsi
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  __m128i *v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  _QWORD *v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 *v18; // [rsp+58h] [rbp-18h] BYREF

  v2 = a1 + 19;
  v4 = a1[22];
  v6 = v4 + a1[23];
  if ( a1 == (_QWORD *)-152LL )
    v7 = 0LL;
  else
    v7 = (_QWORD *)*v2;
  v13 = *(_OWORD *)a2;
  if ( v7 )
    v8 = (_QWORD *)*v7;
  else
    v8 = 0LL;
  v15 = v8;
  while ( 1 )
  {
    v16 = v4;
    if ( v4 == v6 )
      break;
    v9 = (__m128i *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::operator*((__int64)&v15);
    v10 = *v9;
    v11 = v9->m128i_i64[0] - v13;
    if ( !v11 )
      v11 = _mm_srli_si128(v10, 8).m128i_u64[0] - *((_QWORD *)&v13 + 1);
    if ( !v11 )
      break;
    ++v4;
  }
  v17 = v4;
  v14 = v4 + 1;
  v13 = (unsigned __int64)v7;
  v16 = 0LL;
  v15 = v7;
  std::deque<tagRECT>::erase((__int64)v2, &v18, (__int64)&v15, (__int64)&v13);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Erase<winrt::guid>(
    a1 + 11,
    a2);
  v13 = *(_OWORD *)a2;
  winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTabProxyWindow((__int64)a1, (__int64)&v13);
  return std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Erase<winrt::guid>(
           a1 + 3,
           a2);
}
