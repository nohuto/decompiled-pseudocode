/*
 * XREFs of ??1?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180043258
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$0 @ 0x18004D859 (_TSSession--TSSession_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18002A594 (--1-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@X.c)
 */

void __fastcall std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::~forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>(
        void **a1)
{
  void **v1; // rdi
  void **v2; // rbx

  v1 = (void **)*a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (void **)*v1;
      std::unique_ptr<AUDIOPROTOCOLNOTIFY>::~unique_ptr<AUDIOPROTOCOLNOTIFY>(v1 + 1);
      std::_Deallocate<16>(v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
