/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@KAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEBQE$AAU34567@I@Z @ 0x1806B32E4
 * Callers:
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1806B2960 (--0-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x1806B3C10 (-CopyToOrDetach@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18009B288 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802CA560 (__Platform_CoTaskMemAlloc.c)
 */

void *__fastcall Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::AllocateAndCopyElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rdi

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0x1FFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v5 = v2;
  v4 = _Platform_CoTaskMemAlloc(8 * v2);
  if ( !v4 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset_0(v4, 0, 8 * v2);
  if ( (_DWORD)v2 )
  {
    v6 = v4;
    do
    {
      __abi_winrt_ptr_assign(v6++, *a1++);
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
