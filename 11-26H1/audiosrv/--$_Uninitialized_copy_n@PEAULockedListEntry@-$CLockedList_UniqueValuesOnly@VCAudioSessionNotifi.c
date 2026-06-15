/*
 * XREFs of ??$_Uninitialized_copy_n@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@PEAU12@_K0AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x1800424EC
 * Callers:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_K@Z @ 0x180042560 (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotifi.c)
 * Callees:
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180040FD8 (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@0@@Z @ 0x180042708 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNot.c)
 */

__int64 *__fastcall std::_Uninitialized_copy_n<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  char *v6; // rsi

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a2 )
  {
    v6 = (char *)a3 - a1;
    do
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
        v3,
        (__int64 *)v5);
      v3 += 2;
      *(_DWORD *)&v6[v5 + 8] = *(_DWORD *)(v5 + 8);
      v5 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  std::_Destroy_range<std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>(
    v3,
    v3);
  return v3;
}
