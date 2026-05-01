/*
 * XREFs of ?set@ShyTaskbarMargin@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVThickness@Xaml@UI@Windows@@@Z @ 0x180696E74
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::ShyTaskbarMargin::set(
        __int64 *a1,
        _OWORD *a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm1
  __int64 (__fastcall *v4)(__int64 *, _OWORD *); // rax
  int v5; // eax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  v3 = a2[1];
  v6[0] = *a2;
  v4 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v2 + 128);
  v6[1] = v3;
  v5 = v4(a1, v6);
  __abi_ThrowIfFailed(v5);
}
