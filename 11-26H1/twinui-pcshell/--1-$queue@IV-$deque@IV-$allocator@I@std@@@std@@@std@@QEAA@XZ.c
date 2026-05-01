/*
 * XREFs of ??1?$queue@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x180619FD0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$11 @ 0x1807022F9 (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1807022F9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::queue<unsigned int>::~queue<unsigned int,std::deque<unsigned int>>(__int64 *a1)
{
  return std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(a1);
}
