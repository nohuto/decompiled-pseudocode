/*
 * XREFs of ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x1803FE8E4
 * Callers:
 *     ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x1801AFD9C (-close_and_wait@operation_guard@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::slim_event_t<1>::wait(_DWORD *Address)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    if ( *Address )
      return 1;
    CompareAddress = 0;
  }
  while ( WaitOnAddress(Address, &CompareAddress, 4uLL, 0xFFFFFFFF) );
  if ( GetLastError() != 1460 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBE6,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
  return 0;
}
