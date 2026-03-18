/*
 * XREFs of Win32AllocPoolWithQuota @ 0x1400B3DD0
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400B3E34 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall Win32AllocPoolWithQuota(__int64 a1, unsigned int a2, int a3)
{
  __int64 UserSessionState; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a2;
  v7[0] = &v9;
  v9 = 256LL;
  v7[1] = &v8;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___)(
           UserSessionState + 72016,
           a1,
           a2,
           v7);
}
