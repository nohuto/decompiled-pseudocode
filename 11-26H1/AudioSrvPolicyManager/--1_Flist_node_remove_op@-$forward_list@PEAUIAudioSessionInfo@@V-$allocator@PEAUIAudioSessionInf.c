/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x180028D30
 * Callers:
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x18003EE90 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_6.c)
 *     ?remove@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAAXAEBQEAUIAudioSessionInfo@@@Z @ 0x180041020 (-remove@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QE.c)
 *     _std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e____::_1_::dtor$0 @ 0x18004E0D3 (_std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      operator delete(v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
