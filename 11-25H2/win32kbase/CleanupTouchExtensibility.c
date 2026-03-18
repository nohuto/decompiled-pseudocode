/*
 * XREFs of CleanupTouchExtensibility @ 0x1401A1BD8
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x14014FA4C (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     RIMFreePointerDevice @ 0x1401E3C1C (RIMFreePointerDevice.c)
 */

__int64 __fastcall CleanupTouchExtensibility(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  PVOID v10; // [rsp+30h] [rbp+8h] BYREF

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 19288) )
  {
    v10 = 0LL;
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( (int)RawInputManagerObjectResolveHandle(*(char **)(UserSessionState + 19288), 3u, 0, &v10) >= 0 )
    {
      v8 = W32GetUserSessionState(v7, v6);
      v9 = HMValidateHandleNoSecure(*(_QWORD *)(v8 + 19328), 19);
      if ( v9 )
      {
        v6 = *(_QWORD *)(v9 + 456);
        if ( v6 )
          RIMFreePointerDevice(v10);
      }
    }
    result = W32GetUserSessionState(v7, v6);
    *(_QWORD *)(result + 19288) = 0LL;
  }
  return result;
}
