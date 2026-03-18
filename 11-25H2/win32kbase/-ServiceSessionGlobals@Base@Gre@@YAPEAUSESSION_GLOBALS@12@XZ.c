/*
 * XREFs of ?ServiceSessionGlobals@Base@Gre@@YAPEAUSESSION_GLOBALS@12@XZ @ 0x1401C9930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall Gre::Base::ServiceSessionGlobals(Gre::Base *this)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  result = (struct Gre::Base::SESSION_GLOBALS *)W32GetReferencedSessionProcessWithTag(0LL, 1953261124LL, 0LL);
  v2 = result;
  if ( result )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(result, &ApcState);
    v4 = *(_QWORD *)(W32GetSessionState(v3) + 88);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v2);
    return (struct Gre::Base::SESSION_GLOBALS *)v4;
  }
  return result;
}
