/*
 * XREFs of ??1?$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ @ 0x18011BA9C
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18011C528 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x18011BFAC (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<CMonitorManager::CStreamConnectionImpl>::~_Temporary_owner<CMonitorManager::CStreamConnectionImpl>(
        CMonitorManager::CStreamConnectionImpl **a1,
        unsigned int a2)
{
  CMonitorManager::CStreamConnectionImpl *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(v2, a2);
  return result;
}
