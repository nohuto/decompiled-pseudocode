/*
 * XREFs of Win32AllocPoolWithPriorityZInit @ 0x1401EAA10
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401FC310 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 */

__int64 __fastcall Win32AllocPoolWithPriorityZInit(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 UserSessionState; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  v8[0] = &v9;
  v10 = a3;
  v8[1] = &v10;
  v9 = a1;
  v8[2] = &v11;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___)(
           UserSessionState + 72016,
           a2,
           a3,
           v8);
}
