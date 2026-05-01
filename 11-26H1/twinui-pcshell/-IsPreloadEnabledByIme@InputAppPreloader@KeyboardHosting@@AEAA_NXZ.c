/*
 * XREFs of ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1801BCE5C
 * Callers:
 *     ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1802271C8 (-IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsImeInputProfileEnabled @ 0x1801BCFA8 (IsImeInputProfileEnabled.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802C861C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall KeyboardHosting::InputAppPreloader::IsPreloadEnabledByIme(KeyboardHosting::InputAppPreloader *this)
{
  volatile __int32 *v1; // rbx
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (volatile __int32 *)((char *)this + 32);
  if ( !(unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((char *)this + 32) )
  {
    v8 = 0LL;
    v3 = *(__int64 **)(v2 + 8);
    v4 = *v3;
    v8 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 160))(v3, &v8);
    if ( v5 >= 0 )
      _InterlockedExchange(v1, (unsigned __int8)IsImeInputProfileEnabled(v8) + 1);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v5);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(v1) == 2;
}
