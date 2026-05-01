/*
 * XREFs of ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x18068FA88
 * Callers:
 *     ??1?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@XZ @ 0x18068B958 (--1-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ?SetObject@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AEAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18068FE60 (-SetObject@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **__fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  Platform::Details *v3; // rdi
  HRESULT ContextToken; // eax
  struct IUnknown *v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rsi
  struct IUnknown *v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  ULONG_PTR v10; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v3 = *(Platform::Details **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    v10 = 0LL;
    ContextToken = CoGetContextToken(&v10);
    __abi_ThrowIfFailed(ContextToken);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 && (v7 = (__int64 *)(a1 + 8), (v8 = *(struct IUnknown **)(a1 + 8)) != 0LL) && v6 != v10 )
    {
      Platform::Details::ReleaseInContextImpl(v3, v8, v5);
    }
    else
    {
      (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v3 + 16LL))(v3);
      v7 = (__int64 *)(a1 + 8);
    }
    result = (_UNKNOWN **)Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 2;
  }
  return result;
}
