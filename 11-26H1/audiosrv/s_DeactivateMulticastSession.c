/*
 * XREFs of s_DeactivateMulticastSession @ 0x180108700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_DeactivateMulticastSession(__int64 a1, __int128 *a2)
{
  __int64 **i; // rbx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = *a2;
  EtwEventActivityIdControl(4LL, &v5);
  for ( i = (__int64 **)*((_QWORD *)s_MulticastSessionManager + 3); i; i = (__int64 **)*i )
    (*(void (__fastcall **)(__int64 *, __int128 *))(*i[1] + 80))(i[1], a2);
  EtwEventActivityIdControl(4LL, &v5);
  return 0LL;
}
