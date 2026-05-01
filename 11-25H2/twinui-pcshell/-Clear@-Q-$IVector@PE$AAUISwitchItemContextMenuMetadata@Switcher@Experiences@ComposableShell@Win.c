/*
 * XREFs of ?Clear@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x18068C524
 * Callers:
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXXZ @ 0x18068C580 (-Clear@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compos_ea_18068C580.c)
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@WCI@E$AAAXXZ @ 0x18068C590 (-Clear@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compos_ea_18068C590.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_Clear@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJXZ @ 0x180692BD0 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_180692BD0.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAXPEAV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAV12@AEAV?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@0@@Z @ 0x18068AB50 (--$_Destroy_range@V-$allocator@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experience.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x18068EE10 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18068F6C0 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _Clear__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXXZ(
        __int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax
  void *Exception; // rax
  void *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 v10; // [rsp+40h] [rbp+8h]

  try
  {
    Platform::Collections::Details::IncrementCounter();
    v2 = *(__int64 **)(a1 + 96);
    v3 = v2[1];
    if ( *v2 != v3 )
    {
      std::_Destroy_range<std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>(
        *v2,
        v3);
      v2[1] = *v2;
    }
    result = Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Notify(
               a1,
               0LL,
               0LL);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v9 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v7 = __abi_winrt_ptr_ctor(v9);
    throw (Platform::OutOfMemoryException **)&v7;
  }
  catch ( std::exception )
  {
    v6 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v10 = Platform::FailureException::FailureException(v6);
    v8 = __abi_winrt_ptr_ctor(v10);
    throw (Platform::FailureException **)&v8;
  }
  return result;
}
