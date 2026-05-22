/*
 * XREFs of ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180047E30
 * Callers:
 *     NotifyInputSinkRemoved @ 0x180047CA0 (NotifyInputSinkRemoved.c)
 *     NotifyInputSinkParented @ 0x180047CE0 (NotifyInputSinkParented.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180059444 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     atexit @ 0x18009A4BC (atexit.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A5438 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *InputSinkDataCache::GetInstance(void)
{
  if ( dword_180254E40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180254E40);
    if ( dword_180254E40 == -1 )
    {
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180254DD8);
      qword_180254E18 = 0LL;
      xmmword_180254E20 = 0LL;
      qword_180254E30 = 0LL;
      byte_180254E38 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180254E40);
    }
  }
  return &SRWLock;
}
