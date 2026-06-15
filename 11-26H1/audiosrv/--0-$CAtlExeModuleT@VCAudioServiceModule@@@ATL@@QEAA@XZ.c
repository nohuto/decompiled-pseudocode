/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800D6F10
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800D9110 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800AA844 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1800D834C (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(__int64 a1)
{
  __int64 v2; // rcx
  ATL::CAtlComModule *v3; // rcx

  v2 = a1 + 24;
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)a1;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)v2) >= 0 )
    *(_DWORD *)(a1 + 8) = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  *(_DWORD *)(a1 + 72) = GetCurrentThreadId();
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 5000;
  *(_DWORD *)(a1 + 92) = 1000;
  *(_BYTE *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 98) = 1;
  ATL::CAtlComModule::ExecuteObjectMain(v3, 1);
  return a1;
}
