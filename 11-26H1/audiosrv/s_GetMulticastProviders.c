/*
 * XREFs of s_GetMulticastProviders @ 0x180108840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180107DB4 (-GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_GUID@@U-$functio.c)
 */

__int64 __fastcall s_GetMulticastProviders(__int64 a1, void **a2, _DWORD *a3)
{
  int MulticastProviders; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v10 = 0LL;
  v9 = 0;
  MulticastProviders = CMulticastSessionManager::GetMulticastProviders((__int64)s_MulticastSessionManager, &v10, &v9);
  v6 = MulticastProviders;
  if ( MulticastProviders >= 0 )
  {
    *a2 = v10;
    *a3 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)MulticastProviders);
    if ( v10 )
      operator delete(v10);
    return v6;
  }
}
