/*
 * XREFs of Win32AllocPoolWithPriorityZInit @ 0x1401C1DC0
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401D2DE8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 */

__int64 __fastcall Win32AllocPoolWithPriorityZInit(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 UserSessionState; // rax
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v13 = a4;
  v12 = a3;
  v11 = a1;
  v10[0] = &v11;
  v10[1] = &v12;
  v10[2] = &v13;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___)(
           UserSessionState + 72032,
           a2,
           a3,
           v10);
}
