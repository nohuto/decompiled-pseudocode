/*
 * XREFs of ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_K@Z @ 0x180042560
 * Callers:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800423E4 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180040FD8 (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x1800424EC (--$_Uninitialized_copy_n@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotifi.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x180042708 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNot.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800677F8 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Copy_n_unchecked4@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_KPEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@PEAU12@_K0@Z @ 0x1800AFC78 (--$_Copy_n_unchecked4@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificat.c)
 */

__int64 *__fastcall std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::_Assign_counted_range<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *>(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 size_of; // rax
  __int64 *v11; // rbx
  int v12; // eax
  __int64 *v13; // rdx
  __int64 *result; // rax
  __int64 *v15; // r8
  unsigned __int64 v16; // rbx

  v3 = *a1;
  v5 = a3;
  v6 = a2;
  v7 = ((char *)a1[2] - (char *)*a1) >> 4;
  if ( a3 > v7 )
  {
    v8 = 0xFFFFFFFFFFFFFFFLL;
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 >> 1;
    if ( v7 <= 0xFFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v7 + v9;
      if ( v7 + v9 < a3 )
        v8 = a3;
    }
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
        v3,
        a1[1]);
      std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<16>(v8);
    v11 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v11;
    a1[1] = v11;
    for ( a1[2] = &v11[2 * v8]; v5; --v5 )
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
        v11,
        (__int64 *)v6);
      v12 = *(_DWORD *)(v6 + 8);
      v6 += 16LL;
      *((_DWORD *)v11 + 2) = v12;
      v11 += 2;
    }
    v13 = v11;
    goto LABEL_11;
  }
  v15 = a1[1];
  v16 = ((char *)v15 - (char *)v3) >> 4;
  if ( v5 <= v16 )
  {
    v11 = &v3[2 * v5];
    std::_Copy_n_unchecked4<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *,unsigned __int64,CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *>(
      a2,
      v5,
      v3);
    v13 = a1[1];
LABEL_11:
    result = (__int64 *)std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
                          v11,
                          v13);
    a1[1] = v11;
    return result;
  }
  while ( v3 != v15 )
  {
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v3, v6);
    *((_DWORD *)v3 + 2) = *(_DWORD *)(v6 + 8);
    v3 += 2;
    v15 = a1[1];
    v6 += 16LL;
  }
  result = std::_Uninitialized_copy_n<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
             v6,
             v5 - v16,
             v15);
  a1[1] = result;
  return result;
}
