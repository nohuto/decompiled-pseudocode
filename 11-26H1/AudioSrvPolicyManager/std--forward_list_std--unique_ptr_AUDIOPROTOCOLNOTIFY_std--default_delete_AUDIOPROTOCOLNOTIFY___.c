/*
 * XREFs of std::forward_list_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY____std::allocator_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY_______::remove_if__lambda_9eb6c93c26a617cd5e90003f5e6b044a___ @ 0x1800430D8
 * Callers:
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180029D60 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 * Callees:
 *     ??1_Flist_node_remove_op@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18002E618 (--1_Flist_node_remove_op@-$forward_list@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UA.c)
 */

void __fastcall std::forward_list_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY____std::allocator_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY_______::remove_if__lambda_9eb6c93c26a617cd5e90003f5e6b044a___(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  _BYTE *v3; // r9
  __int64 *v4; // r8
  _QWORD **v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v7 = &v6;
  v2 = *a1;
  v6 = 0LL;
  if ( v2 )
  {
    v3 = *(_BYTE **)a2;
    do
    {
      if ( *v3 || v2[1] != **(_QWORD **)(a2 + 8) )
      {
        a1 = (_QWORD **)v2;
        v2 = (_QWORD *)*v2;
      }
      else
      {
        *v3 = 1;
        v4 = *a1;
        v2 = (_QWORD *)**a1;
        *v4 = 0LL;
        *a1 = v2;
        *v7 = (__int64)v4;
        v7 = v4;
      }
    }
    while ( v2 );
  }
  std::forward_list<std::unique_ptr<AUDIOPROTOCOLNOTIFY>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v5);
}
