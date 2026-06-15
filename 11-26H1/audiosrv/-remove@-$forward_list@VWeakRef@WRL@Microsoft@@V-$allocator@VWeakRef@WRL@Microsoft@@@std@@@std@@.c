/*
 * XREFs of ?remove@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800CC89C
 * Callers:
 *     ?UnregisterFromAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180078760 (-UnregisterFromAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJ.c)
 * Callees:
 *     ??1_Flist_node_remove_op@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18007BC44 (--1_Flist_node_remove_op@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Micros.c)
 */

void __fastcall std::forward_list<Microsoft::WRL::WeakRef>::remove(_QWORD **a1, _QWORD *a2)
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
  std::forward_list<Microsoft::WRL::WeakRef>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v4);
}
