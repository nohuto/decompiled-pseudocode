/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002E618
 * Callers:
 *     std::forward_list_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY____std::allocator_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY_______::remove_if__lambda_9eb6c93c26a617cd5e90003f5e6b044a___ @ 0x1800430D8 (std--forward_list_std--unique_ptr_AUDIOPROTOCOLNOTIFY_std--default_delete_AUDIOPROTOCOLNOTIFY___.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@XZ @ 0x18002A594 (--1-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@QEAA@X.c)
 */

void __fastcall std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  void **v1; // rdi
  void **v2; // rbx

  v1 = *(void ***)(a1 + 8);
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
