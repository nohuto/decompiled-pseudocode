/*
 * XREFs of ??$_Copy_n_unchecked4@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_KPEAU12@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@PEAU12@_K0@Z @ 0x1800AFC78
 * Callers:
 *     ??$_Assign_counted_range@PEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@_K@Z @ 0x180042560 (--$_Assign_counted_range@PEAULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotifi.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800677F8 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Copy_n_unchecked4<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *,unsigned __int64,CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    v5 = a1 - a3;
    do
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)v3, (__int64 *)(v5 + v3));
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v5 + v3 + 8);
      v3 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v3;
}
