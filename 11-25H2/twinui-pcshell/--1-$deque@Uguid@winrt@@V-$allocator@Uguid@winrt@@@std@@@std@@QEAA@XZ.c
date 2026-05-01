/*
 * XREFs of ??1?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x1800A35F8
 * Callers:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A3448 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXXZ @ 0x1800A3624 (-_Tidy@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<winrt::guid>::~deque<winrt::guid>(void **a1)
{
  void *v2; // rcx

  std::deque<winrt::guid>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  operator delete(v2, (const struct std::nothrow_t *)0x10);
}
