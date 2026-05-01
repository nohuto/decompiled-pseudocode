/*
 * XREFs of _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::dtor$34 @ 0x180703CE3
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~0x40u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 120));
  }
}
