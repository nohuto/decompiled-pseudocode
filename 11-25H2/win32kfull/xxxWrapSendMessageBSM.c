/*
 * XREFs of xxxWrapSendMessageBSM @ 0x140240450
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageBSM @ 0x140128DF0 (xxxSendMessageBSM.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x140283680 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall xxxWrapSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        _BYTE *Src)
{
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  __int64 UserSessionState; // rax
  int v14; // eax
  __int64 v15; // rdi
  _OWORD v17[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v18; // [rsp+90h] [rbp-38h]

  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v9 = Src;
  if ( (unsigned __int64)Src >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[39] = v9[39];
  RtlCopyVolatileMemory(v17, Src, 0x28uLL);
  if ( (v17[0] & 0x10) != 0 )
  {
    if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = HasTcbPrivilege();
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v11, v10);
      v12 = (unsigned int)IsPrivileged(UserSessionState + 42544) != 0;
    }
    if ( !v12 )
    {
      LODWORD(v17[0]) &= ~0x10u;
      RtlCopyVolatileMemory(Src, v17, 0x28uLL);
    }
  }
  v14 = xxxSendMessageBSM(a1, a2, a3, a4, (struct tagBROADCASTSYSTEMMSGPARAMS *)v17, 0);
  v15 = v14;
  if ( !v14 && (BYTE4(v17[0]) & 1) != 0 )
    RtlCopyVolatileMemory(Src, v17, 0x28uLL);
  return v15;
}
