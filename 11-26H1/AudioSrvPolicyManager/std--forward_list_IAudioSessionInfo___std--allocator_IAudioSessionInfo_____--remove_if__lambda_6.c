/*
 * XREFs of std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x18003EE90
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015050 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     _lambda_6c758f270a739346e4977fa18103cf5e_::operator() @ 0x180027638 (_lambda_6c758f270a739346e4977fa18103cf5e_--operator().c)
 *     ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x180028D30 (--1_Flist_node_remove_op@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInf.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 **v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  __int64 **v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h]
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v2 = a1;
  v5 = a1;
  v6 = 0LL;
  v7 = &v6;
  v3 = *a1;
  while ( v3 )
  {
    if ( lambda_6c758f270a739346e4977fa18103cf5e_::operator()(&v8, v3[1]) )
    {
      v4 = *v2;
      v3 = (__int64 *)**v2;
      *v4 = 0LL;
      *v2 = v3;
      *v7 = (__int64)v4;
      v7 = v4;
    }
    else
    {
      v2 = (__int64 **)v3;
      v3 = (__int64 *)*v3;
    }
  }
  std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v5);
}
