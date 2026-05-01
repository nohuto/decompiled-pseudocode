/*
 * XREFs of ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800CBD44
 * Callers:
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057DAE8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 * Callees:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800CBAAC (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@XZ @ 0x1800CC188 (-front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800CC270 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x1801630F8 (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_sim.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x18057F9E8 (-find@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@.c)
 *     ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x18057FE08 (-push_front@-$deque@_KV-$allocator@_K@std@@@std@@QEAAXAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(
        _QWORD *a1,
        __int64 a2,
        __m128i *a3)
{
  __m128i v3; // xmm6
  __int64 v6; // rax
  PVOID v7; // r11
  __int64 v8; // rcx
  RTL_SRWLOCK *Ptr; // rbx
  RTL_SRWLOCK *v10; // rcx
  char v11; // si
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  _QWORD *i; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  __m128i v22; // [rsp+28h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-39h]
  RTL_SRWLOCK *v24; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-21h] BYREF
  char v26[48]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v27; // [rsp+E0h] [rbp+6Fh] BYREF

  v27 = a2;
  v6 = 2 * (a1[84] & std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()((unsigned __int8 *)&v27));
  v8 = a1[81];
  Ptr = *(RTL_SRWLOCK **)(v8 + 8 * v6 + 8);
  if ( Ptr == (RTL_SRWLOCK *)a1[79] )
    goto LABEL_10;
  while ( v7 != Ptr[2].Ptr )
  {
    if ( Ptr == *(RTL_SRWLOCK **)(v8 + 8 * v6) )
      goto LABEL_10;
    Ptr = (RTL_SRWLOCK *)Ptr[1].Ptr;
  }
  if ( !Ptr )
  {
LABEL_10:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
  }
  else
  {
    Ptr += 3;
    v3 = *a3;
    AcquireSRWLockExclusive(Ptr);
    v24 = Ptr;
    v10 = Ptr + 19;
    if ( !Ptr[23].Ptr )
    {
LABEL_5:
      if ( Ptr )
        ReleaseSRWLockExclusive(Ptr);
      return 0;
    }
  }
  v13 = (_QWORD *)std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front(v10);
  v14 = *v13 - v3.m128i_i64[0];
  if ( *v13 == v3.m128i_i64[0] )
    v14 = v13[1] - _mm_srli_si128(v3, 8).m128i_u64[0];
  if ( !v14 )
    goto LABEL_5;
  v22 = v3;
  winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(Ptr, (__int128 *)v22.m128i_i8);
  if ( Ptr )
    ReleaseSRWLockExclusive(Ptr);
  v11 = 1;
  v15 = a1[90];
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::find(
                    a1 + 91,
                    &v24,
                    a3) != a1[92] )
  {
    if ( a1 == (_QWORD *)-688LL )
      v20 = 0LL;
    else
      v20 = a1[86];
    v19 = a1[89];
    v21 = v19
        + *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                   a1 + 91,
                                   &v22,
                                   a3)
                    + 32LL);
    v22 = (__m128i)v20;
    v23 = v21 + 1;
    v25[1] = 0LL;
    v25[0] = v20;
    v25[2] = v21;
    ((void (__fastcall *)(_QWORD *, char *, _QWORD *, __m128i *))std::deque<unsigned __int64>::erase)(
      a1 + 86,
      v26,
      v25,
      &v22);
    v15 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                   a1 + 91,
                                   &v22,
                                   a3)
                    + 32LL);
  }
  v16 = (_QWORD *)a1[92];
  for ( i = (_QWORD *)*v16; i != v16; i = (_QWORD *)*i )
  {
    v18 = i[4];
    if ( v18 < v15 )
      i[4] = v18 + 1;
  }
  *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                           a1 + 91,
                           &v22,
                           a3)
            + 32LL) = 0LL;
  std::deque<unsigned __int64>::push_front(a1 + 86, &v27);
  return v11;
}
