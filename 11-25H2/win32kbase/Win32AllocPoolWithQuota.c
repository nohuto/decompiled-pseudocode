/*
 * XREFs of Win32AllocPoolWithQuota @ 0x140069360
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400693C8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall Win32AllocPoolWithQuota(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = v2;
  v8 = 256LL;
  v6[0] = &v8;
  v6[1] = &v7;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___)(
           UserSessionState + 72032,
           a1,
           v2,
           v6);
}
