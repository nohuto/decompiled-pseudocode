/*
 * XREFs of ?RethrowCaughtException@wil@@YAXXZ @ 0x18003A464
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x18002EBE0 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::RethrowCaughtException(wil *this)
{
  if ( wil::details::g_pfnRethrow )
    wil::details::g_pfnRethrow();
}
