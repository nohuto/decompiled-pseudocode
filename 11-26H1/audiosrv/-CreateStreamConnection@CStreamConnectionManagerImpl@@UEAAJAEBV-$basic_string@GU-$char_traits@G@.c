/*
 * XREFs of ?CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18011C8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamConnectionManagerImpl::CreateStreamConnection(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct StreamConnectionSettings *a4,
        __int64 *a5)
{
  return CMonitorManager::CreateStreamConnection(*(CMonitorManager **)(a1 + 8), a2, a3, a4, a5);
}
