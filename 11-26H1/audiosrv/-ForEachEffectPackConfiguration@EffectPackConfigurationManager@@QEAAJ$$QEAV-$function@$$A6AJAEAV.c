/*
 * XREFs of ?ForEachEffectPackConfiguration@EffectPackConfigurationManager@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z@std@@@Z @ 0x1800869C8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18013C178 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPackConfigurationManager::ForEachEffectPackConfiguration(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  while ( v5 != v6 )
  {
    v7 = *(_QWORD *)(a2 + 56);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180086A7BLL);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
    v5 += 16LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
