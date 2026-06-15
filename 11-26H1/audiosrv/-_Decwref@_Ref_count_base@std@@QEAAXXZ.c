/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180056EC0
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800D8020 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18011D520 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     _dynamic_atexit_destructor_for__CStreamConnectionManagerImpl::s_weakSelf__ @ 0x18016CCD0 (_dynamic_atexit_destructor_for__CStreamConnectionManagerImpl--s_weakSelf__.c)
 *     _dynamic_atexit_destructor_for__g_weakStreamMonitorManager__ @ 0x18016CD30 (_dynamic_atexit_destructor_for__g_weakStreamMonitorManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
