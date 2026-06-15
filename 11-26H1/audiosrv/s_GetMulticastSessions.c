/*
 * XREFs of s_GetMulticastSessions @ 0x1801088E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180107EB0 (-GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_MulticastSessionC.c)
 */

__int64 __fastcall s_GetMulticastSessions(__int64 a1, void **a2, _DWORD *a3, const char *a4)
{
  int MulticastSessions; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v11 = 0LL;
  v10 = 0;
  MulticastSessions = CMulticastSessionManager::GetMulticastSessions((__int64)s_MulticastSessionManager, &v11, &v10, a4);
  v7 = MulticastSessions;
  if ( MulticastSessions >= 0 )
  {
    *a2 = v11;
    *a3 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)MulticastSessions);
    if ( v11 )
      operator delete(v11);
    return v7;
  }
}
