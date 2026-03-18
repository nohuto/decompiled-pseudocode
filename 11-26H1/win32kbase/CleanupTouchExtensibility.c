/*
 * XREFs of CleanupTouchExtensibility @ 0x1401C5B00
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x140179858 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 */

__int64 __fastcall CleanupTouchExtensibility(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  result = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(result + 19320) )
  {
    v14 = 0LL;
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    if ( (int)RawInputManagerObjectResolveHandle(*(char **)(UserSessionState + 19320), 3u, 0, (PVOID *)&v14) >= 0 )
    {
      v11 = W32GetUserSessionState(v9, v8, v10);
      LOBYTE(v12) = 19;
      v13 = HMValidateHandleNoSecure(*(_QWORD *)(v11 + 19360), v12);
      if ( v13 )
      {
        v8 = *(_QWORD *)(v13 + 456);
        if ( v8 )
          RIMFreePointerDevice(v14, v8);
      }
    }
    result = W32GetUserSessionState(v9, v8, v10);
    *(_QWORD *)(result + 19320) = 0LL;
  }
  return result;
}
