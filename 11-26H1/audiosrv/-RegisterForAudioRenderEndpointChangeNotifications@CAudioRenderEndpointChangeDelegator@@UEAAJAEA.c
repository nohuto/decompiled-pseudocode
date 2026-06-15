/*
 * XREFs of ?RegisterForAudioRenderEndpointChangeNotifications@CAudioRenderEndpointChangeDelegator@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800AB3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?push_front@?$forward_list@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800AB440 (-push_front@-$forward_list@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioRenderEndpointChangeDelegator::RegisterForAudioRenderEndpointChangeNotifications(
        CAudioRenderEndpointChangeDelegator *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  try
  {
    std::forward_list<Microsoft::WRL::WeakRef>::push_front((char *)this + 72, a2);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE97,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                           v5);
  }
  return result;
}
