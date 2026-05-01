/*
 * XREFs of ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x18010D610
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall `winrt::impl::make_marshaler'::`2'::marshaler::Release(char *a1)
{
  int v2; // edi
  char v3; // zf
  __int64 *v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 6);
  if ( v2 )
  {
    v3 = 0;
    if ( v2 < 0 )
      abort();
  }
  else
  {
    v3 = 1;
  }
  if ( v3 && a1 )
  {
    v4 = (__int64 *)(a1 + 16);
    if ( *v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  }
  return (unsigned int)v2;
}
