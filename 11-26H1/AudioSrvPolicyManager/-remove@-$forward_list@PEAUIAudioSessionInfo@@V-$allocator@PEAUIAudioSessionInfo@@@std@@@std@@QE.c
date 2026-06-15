/*
 * XREFs of ?remove@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAAXAEBQEAUIAudioSessionInfo@@@Z @ 0x180041020
 * Callers:
 *     ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002AABC (-UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x180028D30 (--1_Flist_node_remove_op@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInf.c)
 */

void __fastcall std::forward_list<IAudioSessionInfo *>::remove(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // r8
  _QWORD **v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-18h]

  v4 = a1;
  v6 = &v5;
  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    if ( v2[1] == *a2 )
    {
      v3 = *a1;
      v2 = (_QWORD *)**a1;
      *v3 = 0LL;
      *a1 = v2;
      *v6 = (__int64)v3;
      v6 = v3;
    }
    else
    {
      a1 = (_QWORD **)v2;
      v2 = (_QWORD *)*v2;
    }
  }
  std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v4);
}
