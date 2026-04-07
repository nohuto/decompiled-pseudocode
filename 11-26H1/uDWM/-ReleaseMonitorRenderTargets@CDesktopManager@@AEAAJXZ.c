/*
 * XREFs of ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180084AC4
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18006D560 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::ReleaseMonitorRenderTargets(CDesktopManager *this)
{
  int AllDisplaysNoRef; // eax
  unsigned int v3; // ebx
  void *v4; // rdi
  CDWMDisplay **v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  void *lpMem[3]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-10h]

  memset(lpMem, 0, sizeof(lpMem));
  v10 = 0;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)lpMem);
  v3 = AllDisplaysNoRef;
  v4 = lpMem[0];
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x588u, 0LL);
  }
  else
  {
    if ( v10 )
    {
      v5 = (CDWMDisplay **)lpMem[0];
      v6 = v10;
      do
      {
        CDWMDisplay::SetDcompTarget(*v5++, 0LL);
        --v6;
      }
      while ( v6 );
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x58Fu, 0LL);
  }
  if ( v4 != lpMem[1] )
    DefaultHeap::Free(v4);
  return v3;
}
